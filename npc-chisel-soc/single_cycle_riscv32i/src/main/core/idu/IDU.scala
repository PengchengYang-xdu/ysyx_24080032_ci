package npc.core.idu

import chisel3._
import chisel3.util._
import npc.common.Config._
import npc.common.ProcessUnit._
import npc.common.ProcessTpe._
import npc.common.BJTpe._
import npc.common.CH1Tpe._
import npc.common.CH2Tpe._
import npc.common.RFwe._
import npc.common.IMMTpe._
import npc.common.Instructions._
import npc.core.ifu._
/*
              ___ _____ _   _ _____ ____  ____ ___ ____
             / _ \_   _| | | | ____|  _ \/ ___|_ _/ ___|
            | | | || | | |_| |  _| | |_) \___ \| | |  _
            | |_| || | |  _  | |___|  _ < ___) | | |_| |
             \___/ |_| |_| |_|_____|_| \_\____/___\____|
*/
class IDUIO extends Bundle{
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
class IDUIO_pipe_out extends Bundle{
    val id2exe_processunit = Output(UInt(ProcessUnit.ProcessUnit_Width.W))
    val id2exe_processtpe = Output(UInt(ProcessTpe.ProcessTpe_Width.W))
    val id2exe_bjtpe = Output(UInt(BJTpe.BJTpe_Width.W))
    val id2exe_rfwe = Output(UInt(RFwe.RFwe_Width.W))
    val id2exe_rd_addr = Output(UInt(ADDR_LEN.W))
    val id2exe_ch1 = Output(UInt(WORD_LEN.W))
    val id2exe_ch2 = Output(UInt(WORD_LEN.W))
    val id2exe_ch3 = Output(UInt(WORD_LEN.W))
}
class IDUIO_pipe extends Bundle{
    val in = Flipped(Decoupled(new IFUIO_pipe_out))
    val out = Decoupled(new IDUIO_pipe_out)
}
/*
             ___ ____  _   _
            |_ _|  _ \| | | |
             | || | | | | | |
             | || |_| | |_| |
            |___|____/ \___/
*/
class IDU extends Module{
    val io = IO(new IDUIO)
/*
              ____ ____  ____
             / ___|  _ \|  _ \
            | |  _| |_) | |_) |
            | |_| |  __/|  _ <
             \____|_|   |_| \_\
*/
    val gpr = new GPR
    val rs1_data = gpr.read(inst(19, 15))
    val rs2_data = gpr.read(inst(24, 20))
    when(io.gpr_we){
        gpr.write(io.gpr_waddr, io.gpr_wdata)
    }
/*
             ____  _____ ____ ___  ____  _____ ____
            |  _ \| ____/ ___/ _ \|  _ \| ____|  _ \
            | | | |  _|| |  | | | | | | |  _| | |_) |
            | |_| | |__| |__| |_| | |_| | |___|  _ <
            |____/|_____\____\___/|____/|_____|_| \_\
*/
    val io_pipe = IO(new IDUIO_pipe)

    //main process
    val inst = io_pipe.in.bits.if2id_inst
    val reg_pc = io_pipe.in.bits.if2id_reg_pc

    val decodeTable = new DecodeTable(instList, Seq(ProcessUnit, ProcessTpe, BJTpe, CH1Tpe, CH2Tpe, RFwe, IMMTpe))
    val decodeBundle = decodeTable.decode(inst)

    val immtpe = decodeBundle(IMMTpe)
    val imm_i = inst(31, 20).asSInt
    val imm_s = Cat(inst(31, 25), inst(11, 7)).asSInt
    val imm_b = Cat(inst(31), inst(7), inst(30, 25), inst(11, 8), 0.U(1.W)).asSInt
    val imm_j = Cat(inst(31), inst(19, 12), inst(20), inst(30, 21), 0.U(1.W)).asSInt
    val imm_u = Cat(inst(31, 12), 0.U(12.W)).asSInt
    val imm = MuxLookup(immtpe, 0.S)(Seq(
        IMMTpe.IMM_TYPE_I -> imm_i,
        IMMTpe.IMM_TYPE_U -> imm_u,
        IMMTpe.IMM_TYPE_J -> imm_j,
        IMMTpe.IMM_TYPE_S -> imm_s,
        IMMTpe.IMM_TYPE_B -> imm_b
    )).asUInt

    val rd_addr = inst(11, 7)
    val csr_addr = inst(31, 20)

    val ch1 = Mux1H(Seq(
        (decodeBundle(CH1Tpe) === CH1Tpe.CH1Tpe_RS1) -> gpr_rs1_data,
        (decodeBundle(CH1Tpe) === CH1Tpe.CH1Tpe_PC) -> reg_pc
    ))
    val ch2 = Mux1H(Seq(
        (decodeBundle(CH2Tpe) === CH2Tpe.CH2Tpe_IMM) -> imm,
        (decodeBundle(CH2Tpe) === CH2Tpe.CH2Tpe_CSR_ADDR) -> csr_addr,
        (decodeBundle(CH2Tpe) === CH2Tpe.CH2Tpe_RS2) -> gpr_rs2_data
    ))
    val ch3 = Mux(decodeBundle(BJTpe).orR, reg_pc, gpr_rs1_data) +& imm


    //pipeline
    val io_pipe.out.bits.id2exe_processunit = decodeBundle(ProcessUnit)
    val io_pipe.out.bits.id2exe_processtpe = decodeBundle(ProcessTpe)
    val io_pipe.out.bits.id2exe_bjtpe = decodeBundle(BJTpe)
    val io_pipe.out.bits.id2exe_rfwe = decodeBundle(RFwe)
    val io_pipe.out.bits.id2exe_rd_addr = rd_addr
    val io_pipe.out.bits.id2exe_ch1 = ch1
    val io_pipe.out.bits.id2exe_ch2 = ch2
    val io_pipe.out.bits.id2exe_ch3 = ch3


    class Ebreak extends BlackBox with HasBlackBoxPath{
        val io = IO(new Bundle{
            val inst = Input(UInt(WORD_LEN.W))
        })
        addPath("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel/single_cycle_riscv32i/src/main/core/idu/Ebreak.sv")
    }

    val ebreak = Some(Module(new Ebreak))
    ebreak.get.io.inst := inst



















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

