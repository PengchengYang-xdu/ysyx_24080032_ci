package npc.core.icache

import chisel3._
import chisel3.util._
import scala.math._
import npc.common.Config._
import npc.common.Instructions._
import npc.bus.axi._
import npc.bus.axi.AXI4Connector._

class iCacheIO extends Bundle {
    val in = new AXI4WithoutClk//ifu
    val out = Flipped(new AXI4WithoutClk)//imem
}

class iCacheBlock(val m: Int, val n: Int) extends Bundle{
    val valid = Bool()
    val tag = UInt((WORD_LEN - m - n).W)
    val data = Vec((2 << (m - 1)) / (WORD_LEN / BYTE_LEN), UInt(WORD_LEN.W))
}

class iCacheSet(val m: Int, val n: Int, val ways: Int) extends Bundle{
    val set = Vec(ways, new iCacheBlock(m, n))
}

class iCache(val block_size: Int, val sets: Int, val ways: Int) extends Module{
    val io = IO(new iCacheIO)

    val in_arready = RegInit(true.B)
    val in_rvalid = RegInit(false.B)
    io.in.arready := in_arready
    io.in.rvalid := in_rvalid

    val out_arvalid = RegInit(false.B)
    val out_rready = RegInit(false.B)
    io.out.arvalid := out_arvalid
    io.out.rready := out_rready

    val m = log2(block_size).toInt
    val n = log2(sets).toInt
    val w = math.ceil(log2(ways)).toInt
    val c = block_size / (WORD_LEN / BYTE_LEN)
    val index_width = n
    val offset_width = m
    val tag_width = WORD_LEN - m - n
    val ways_width = w
    val count = RegInit(c.U(log2Ceil(c + 1).W))
    val req_index = io.in.araddr(m + n - 1, m)
    val req_offset = io.in.araddr(m - 1, 0)
    val req_tag = io.in.araddr(WORD_LEN - 1, m + n)
    val addr_align = io.in.araddr - req_offset
    dontTouch(count)
    dontTouch(req_index)
    dontTouch(req_offset)
    dontTouch(req_tag)
    dontTouch(addr_align)

    val icache = RegInit(VecInit(Seq.fill(sets)(0.U.asTypeOf(new iCacheSet(m, n, ways)))))
    dontTouch(icache)

    /*-----------------------FSM-----------------------*/
    val s_IDLE :: s_icache_lookup :: s_imem_ar :: s_imem_r :: s_ifu_r :: Nil = Enum(5)
    val c_state = RegInit(s_IDLE)
    val n_state = WireDefault(c_state)
    dontTouch(n_state)

    val hit = WireDefault(false.B)
    val hit_num = WireDefault(0.U(ways_width.W))
    for (i <- 0 until ways) {
        when(icache(req_index).set(i).tag === req_tag && icache(req_index).set(i).valid === true.B) {
            hit := true.B
            hit_num := i.U
        }
    }

    //state conditions
    val is_sdram_raddr = (io.in.araddr >= "ha000_0000".U(WORD_LEN.W) && io.in.araddr <= "hbfff_ffff".U(WORD_LEN.W))

    val is_ifu_ar_fire = io.in.arvalid && io.in.rready
    val is_hit_handshake = hit && io.in.rready
    val is_imem_ar_fire = io.out.arvalid && io.out.arready
    val is_imem_r_fire = io.out.rvalid && io.out.rready
    val is_ifu_r_fire = io.in.rvalid && io.in.rready

    val hit_rdata = Mux(hit, icache(req_index).set(hit_num).data(req_offset >> 2), 0.U)
    val send_rdata = Reg(UInt(WORD_LEN.W))
    when(is_hit_handshake){
        send_rdata := hit_rdata
    }.otherwise{
        send_rdata := io.out.rdata
    }
    io.in.rdata := send_rdata
    dontTouch(send_rdata)

    DefaultIFU()
    DefaultIMEM()

    c_state := n_state//first phase

    n_state := MuxLookup(c_state, s_IDLE)(Seq(//second phase
        s_IDLE           ->  Mux(is_ifu_ar_fire, Mux(is_sdram_raddr, s_icache_lookup, s_imem_ar), s_IDLE),
        s_icache_lookup  ->  Mux(is_hit_handshake, s_IDLE, s_imem_ar),
        s_imem_ar        ->  Mux(is_imem_ar_fire, s_imem_r, s_imem_ar),
        s_imem_r         ->  Mux(is_imem_r_fire, s_ifu_r, s_imem_r),
        s_ifu_r          ->  Mux(is_ifu_r_fire, s_IDLE, s_ifu_r),
    ))

    switch(n_state){//third phase
        is(s_IDLE){

        }
        is(s_icache_lookup){
            in_rvalid := hit
            in_arready := false.B
            out_arvalid := false.B
            out_rready := false.B
        }
        is(s_imem_ar){
            connectAll(io.in, io.out)
            io.out.arburst :="b01".U
            io.out.arlen := 0.U
            io.out.arsize := "b10".U

            in_rvalid := false.B
            in_arready := false.B
            out_arvalid := true.B
            out_rready := false.B
        }
        is(s_imem_r){
            connectAll(io.in, io.out)
            io.out.arburst :="b01".U
            io.out.arlen := 0.U
            io.out.arsize := "b10".U

            in_rvalid := false.B
            in_arready := false.B
            out_arvalid := false.B
            out_rready := true.B
        }
        is(s_ifu_r){
            connectAll(io.in, io.out)
            io.out.arburst :="b01".U
            io.out.arlen := 0.U
            io.out.arsize := "b10".U

            in_rvalid := true.B
            in_arready := false.B
            out_arvalid := false.B
            out_rready := false.B
        }
    }

    //检查空闲的cache块
    val hasEmpty = WireDefault(false.B)
    val emptyIndex = RegInit(0.U(ways_width.W))
    for (i <- (ways - 1) to 0 by -1) {
        when(icache(req_index).set(i).valid === false.B) {
            hasEmpty := true.B
            emptyIndex := i.U
        }
    }


    when(is_ifu_r_fire && is_sdram_raddr){//替换或填充逻辑, 这里需要补充根据配置选择LRU或者FIFO或者RANDOM
        val set = icache(req_index).set
        when(hasEmpty === true.B) {
            // 如果有空闲块，填充
            set(emptyIndex).valid := true.B
            set(emptyIndex).tag := req_tag
            set(emptyIndex).data(0) := io.out.rdata
        }.otherwise{
            // 如果没有空闲块，替换逻辑
            val randomIndex = scala.util.Random.nextInt(ways)
            set(randomIndex).valid := true.B
            set(randomIndex).tag := req_tag
            set(randomIndex).data(0) := io.out.rdata
        }
    }

/*-----------------------function-----------------------*/
    def log2(x: Int): Double = {
        math.log(x) / math.log(2)
    }

    def DefaultIFU(): Unit = {
        // io.in.arready := true.B
        // io.in.rdata := 0.U
        io.in.rresp := 0.U
        // io.in.rvalid := false.B
        io.in.rlast := false.B
        io.in.rid := 0.U
        io.in.awready := false.B
        io.in.wready := false.B
        io.in.bresp := 0.U
        io.in.bvalid := false.B
        io.in.bid := 0.U
    }

    def DefaultIMEM(): Unit = {
        io.out.araddr := 0.U
        // io.out.arvalid := false.B
        io.out.arid := 0.U
        io.out.arlen := 0.U
        io.out.arsize := 0.U
        io.out.arburst := 0.U
        // io.out.rready := false.B
        io.out.awaddr := 0.U
        io.out.awvalid := false.B
        io.out.awid := 0.U
        io.out.awlen := 0.U
        io.out.awsize := 0.U
        io.out.awburst := 0.U
        io.out.wdata := 0.U
        io.out.wstrb := 0.U
        io.out.wvalid := false.B
        io.out.wlast := false.B
        io.out.bready := false.B
    }
}