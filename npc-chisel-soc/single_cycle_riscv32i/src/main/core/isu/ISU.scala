package npc.core.isu

import chisel3._
import chisel3.util._
import npc.common.Config._
import npc.common._
import npc.common.Instructions._
import npc.core.idu._
/*
              ___ _____ _   _ _____ ____  ____ ___ ____
             / _ \_   _| | | | ____|  _ \/ ___|_ _/ ___|
            | | | || | | |_| |  _| | |_) \___ \| | |  _
            | |_| || | |  _  | |___|  _ < ___) | | |_| |
             \___/ |_| |_| |_|_____|_| \_\____/___\____|
*/
class ISUIO extends Bundle{
    val gpr_we = Input(Bool())
    val gpr_wdata = Input(UInt(WORD_LEN.W))
    val gpr_waddr = Input(UInt(ADDR_LEN.W))
}
/*
             ____ ___ ____  _____ ____ ___ ____
            |  _ \_ _|  _ \| ____/ ___|_ _/ ___|
            | |_) | || |_) |  _| \___ \| | |  _
            |  __/| ||  __/| |___ ___) | | |_| |
            |_|  |___|_|   |_____|____/___\____|
*/
class ISUIO_pipe_out extends Bundle{
    val is2exe_processunit = Output(UInt(ProcessUnit.ProcessUnit_Width.W))
    val is2exe_processtpe = Output(UInt(ProcessTpe.ProcessTpe_Width.W))
    val is2exe_bjtpe = Output(UInt(BJTpe.BJTpe_Width.W))
    val is2exe_rfwe = Output(UInt(RFwe.RFwe_Width.W))
    val is2exe_rd_addr = Output(UInt(ADDR_LEN.W))
    val is2exe_ch1 = Output(UInt(WORD_LEN.W))
    val is2exe_ch2 = Output(UInt(WORD_LEN.W))
    val is2exe_ch3 = Output(UInt(WORD_LEN.W))
}
class ISUIO_pipe extends Bundle {
    val in = Flipped(Decoupled(new IDUIO_pipe_out))
    val out = Decoupled(new ISUIO_pipe_out)
}
/*
             ___ ____  _   _
            |_ _/ ___|| | | |
             | |\___ \| | | |
             | | ___) | |_| |
            |___|____/ \___/
*/
class ISU extends Module{
    val io_pipe = IO(new ISUIO_pipe)
    val io = IO(new ISUIO)
/*
              ____ ____  ____
             / ___|  _ \|  _ \
            | |  _| |_) | |_) |
            | |_| |  __/|  _ <
             \____|_|   |_| \_\
*/
    val gpr = new GPR
    val rs1_data = gpr.read(io_pipe.in.bits.id2is_rs1_addr)
    val rs2_data = gpr.read(io_pipe.in.bits.id2is_rs2_addr)
    when(io.gpr_we){
        gpr.write(io.gpr_waddr, io.gpr_wdata)
    }









    val ch1 = Mux1H(Seq(
        (io_pipe.in.bits.id2is_ch1tpe === CH1Tpe.CH1Tpe_RS1) -> rs1_data,
        (io_pipe.in.bits.id2is_ch1tpe === CH1Tpe.CH1Tpe_PC) -> io_pipe.in.bits.id2is_reg_pc
    ))
    val ch2 = Mux1H(Seq(
        (io_pipe.in.bits.id2is_ch2tpe === CH2Tpe.CH2Tpe_IMM) -> io_pipe.in.bits.id2is_imm,
        (io_pipe.in.bits.id2is_ch2tpe === CH2Tpe.CH2Tpe_CSR_ADDR) -> io_pipe.in.bits.id2is_csr_addr,
        (io_pipe.in.bits.id2is_ch2tpe === CH2Tpe.CH2Tpe_RS2) -> rs2_data
    ))
    val ch3 = Mux(io_pipe.in.bits.id2is_bjtpe.orR, io_pipe.in.bits.id2is_reg_pc, rs1_data) +& io_pipe.in.bits.id2is_imm

    io_pipe.out.bits.is2exe_processunit := io_pipe.in.bits.id2is_processunit
    io_pipe.out.bits.is2exe_processtpe := io_pipe.in.bits.id2is_processtpe
    io_pipe.out.bits.is2exe_bjtpe := io_pipe.in.bits.id2is_bjtpe
    io_pipe.out.bits.is2exe_rfwe := io_pipe.in.bits.id2is_rfwe
    io_pipe.out.bits.is2exe_rd_addr := io_pipe.in.bits.id2is_rd_addr
    io_pipe.out.bits.is2exe_ch1 := ch1
    io_pipe.out.bits.is2exe_ch2 := ch2
    io_pipe.out.bits.is2exe_ch3 := ch3







/*
             _   _    _    _   _ ____  ____  _   _    _    _  _______
            | | | |  / \  | \ | |  _ \/ ___|| | | |  / \  | |/ / ____|
            | |_| | / _ \ |  \| | | | \___ \| |_| | / _ \ | ' /|  _|
            |  _  |/ ___ \| |\  | |_| |___) |  _  |/ ___ \| . \| |___
            |_| |_/_/   \_\_| \_|____/|____/|_| |_/_/   \_\_|\_\_____|
*/
    //handshake between modules
    val in_ready = RegInit(false.B)
    val out_valid = RegInit(false.B)
    io_pipe.in.ready := in_ready
    io_pipe.out.valid := out_valid

    val s_BeforePreFire :: s_AfterPreFire :: Nil = Enum(2)
    val c_state = RegInit(s_BeforePreFire)
    val n_state = WireDefault(c_state)
    dontTouch(n_state)

    c_state := n_state//first phase

    n_state := MuxLookup(c_state, s_BeforePreFire)(Seq(//second phase
        s_BeforePreFire  ->  Mux(io_pipe.in.fire, s_AfterPreFire, s_BeforePreFire),
        s_AfterPreFire   ->  Mux(io_pipe.out.fire, s_BeforePreFire, s_AfterPreFire)
    ))

    switch(n_state){//third phase
        is(s_BeforePreFire){
            in_ready := true.B
            out_valid := false.B
        }
        is(s_AfterPreFire){
            in_ready := false.B
            out_valid := true.B
        }
    }

}

