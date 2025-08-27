package npc.core.ifu

import chisel3._
import chisel3.util._
import npc.common.Config._
import npc.common.Instructions._
import npc.core.wbu._
import npc.bus.axi._

class IFUIO_HAZARD extends Bundle {
    val flush_flg = Input(Bool())
    val pc_plus4 = Output(UInt(WORD_LEN.W))
    val pc_real_next = Input(UInt(WORD_LEN.W))
    val is_mret = Input(Bool())
}


class IFUIO extends Bundle {
    val imem = Flipped(new AXI4WithoutClk)
}

class IFUIO_pipe_out extends Bundle{
    val if2id_reg_pc = Output(UInt(WORD_LEN.W)) //pipe
    val if2id_inst = Output(UInt(WORD_LEN.W)) //pipe
}

class IFUIO_pipe extends Bundle {
    val in = Flipped(Decoupled(new WBUIO_pipe_out))
    val out = Decoupled(new IFUIO_pipe_out)
}

class IFU extends Module {
    val io = IO(new IFUIO)
    val io_pipe = IO(new IFUIO_pipe)

    dontTouch(io_pipe)


    val io_hazard = IO(new IFUIO_HAZARD)


    //disable AW W B and something in AR R
    io.imem.arid := 0.U
    io.imem.arlen := 0.U
    io.imem.arburst := 0.U
    io.imem.awaddr := 0.U
    io.imem.awvalid := false.B
    io.imem.awid := 0.U
    io.imem.awlen := 0.U
    io.imem.awsize := 0.U
    io.imem.awburst := 0.U
    io.imem.wdata := 0.U
    io.imem.wstrb := 0.U
    io.imem.wvalid := false.B
    io.imem.wlast := false.B
    io.imem.bready := false.B


    val is_mret_rise = io_hazard.is_mret && ~RegNext(io_hazard.is_mret)

    //delay
    lazy val lfsr = RegInit(IFU_DELAY)
    lfsr := Cat(lfsr(2,0), lfsr(0)^lfsr(1)^lfsr(2))
    lazy val delay = RegInit(lfsr)










    //面积优化 尽量少用寄存器 直接透传信号 组合逻辑
    //handshake between modules && handshake between Imem
    val s_BeforePreFire :: s_WaitEnd :: s_WaitFlush :: Nil = Enum(3)
    val c_state = RegInit(s_BeforePreFire)
    val n_state = WireDefault(c_state)
    dontTouch(n_state)

    val shoot = io.imem.rvalid && c_state =/= s_WaitFlush
    val fetch_done = shoot && io_pipe.out.ready//读取到指令 && 下一阶段准备好了接收 && 不是冲刷等待读取完毕的情况
    val fetch_trash = io.imem.rvalid//冲刷阶段只需要读取到指令就行 没必要传输 所以收到指令就可以冲刷了

    io_pipe.in.ready := ~io_pipe.in.valid || fetch_done
    io_pipe.out.valid := io_pipe.in.valid && shoot && ~io_hazard.flush_flg && ~is_mret_rise

    // val start = io_pipe.in.fire//this is the multi cycle version, change it auto fetch to fit 5 pipelines
    val start = io.imem.arready && io_pipe.in.valid && ~io_hazard.flush_flg && ~is_mret_rise

    c_state := n_state//first phase

    n_state := MuxLookup(c_state, s_BeforePreFire)(Seq(//second phase
        s_BeforePreFire       ->  Mux(start, Mux(fetch_done, s_BeforePreFire, s_WaitEnd), s_BeforePreFire),
        s_WaitEnd             ->  Mux(fetch_done, s_BeforePreFire, Mux(io_hazard.flush_flg || is_mret_rise, s_WaitFlush, s_WaitEnd)),
        s_WaitFlush           ->  Mux(fetch_trash, s_BeforePreFire, s_WaitFlush)
    ))//发起的请求必须等取到这次取指之后，再冲刷






    //main process
    val pc_next = Wire(UInt(WORD_LEN.W))
    dontTouch(pc_next)
    
    val reg_pc = withReset(reset.asAsyncReset){
        RegEnable(pc_next, START_ADDR, io_pipe.in.valid)
    }

    val pc_plus4 = reg_pc + 4.U(WORD_LEN.W)
    io_hazard.pc_plus4 := pc_plus4

    pc_next := io_hazard.pc_real_next
    
    //connect
    io.imem.araddr := reg_pc
    io.imem.arsize := 2.U
    io.imem.arvalid := start && c_state === s_BeforePreFire
    io.imem.rready := fetch_done || c_state === s_WaitFlush

    io_pipe.out.bits.if2id_reg_pc := reg_pc
    io_pipe.out.bits.if2id_inst := io.imem.rdata
}

