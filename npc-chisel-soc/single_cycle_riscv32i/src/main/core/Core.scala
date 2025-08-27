package npc.core

import chisel3._
import chisel3.util._
import npc.common.Config._
import npc.common.Instructions._

import npc.core._
import npc.core.ifu._
import npc.core.idu._
import npc.core.exu._
import npc.core.lsu._
import npc.core.wbu._
import npc.perip._
import npc.bus.axi._
import npc.core.icache._

class CoreIO extends Bundle {
    val imem = Flipped(new AXI4WithoutClk)
    val dmem = Flipped(new AXI4WithoutClk)
}

class Core extends Module {
    val io = IO(new CoreIO)

    val gpr = Module(new GPR)
    val csr = Module(new CSR)

    val ifu = Module(new IFU)
    val idu = Module(new IDU)
    val exu = Module(new EXU)
    val lsu = Module(new LSU)
    val wbu = Module(new WBU)

    // StageConnect(ifu.io_pipe.out, idu.io_pipe.in)
    // StageConnect(idu.io_pipe.out, exu.io_pipe.in)
    // StageConnect(exu.io_pipe.out, lsu.io_pipe.in)
    // StageConnect(lsu.io_pipe.out, wbu.io_pipe.in)
    // StageConnect(wbu.io_pipe.out, ifu.io_pipe.in)
    wbu.io_pipe.out.ready := true.B
    val ready_r = RegNext(ifu.io_pipe.in.ready)
    ifu.io_pipe.in.valid := RegEnable(true.B, ifu.io_pipe.in.valid, ifu.io_pipe.in.ready & ready_r)

    pipelineConnect(ifu.io_pipe.out, idu.io_pipe.in)
    pipelineConnect(idu.io_pipe.out, exu.io_pipe.in)
    pipelineConnect(exu.io_pipe.out, lsu.io_pipe.in)
    pipelineConnect(lsu.io_pipe.out, wbu.io_pipe.in)











    val icache = Module(new iCache(8, 4, 1, "FIFO"))
    io.imem <> icache.io.out
    icache.io.in <> ifu.io.imem

    idu.fencei_io_vr.is_fencei_io <> icache.fencei_io_vr.is_fencei_io





    
    idu.io.gpr_rs1_data := gpr.io.gpr_rs1_data
    idu.io.gpr_rs2_data := gpr.io.gpr_rs2_data
    gpr.io.gpr_rs1_addr := idu.io.gpr_rs1_addr
    gpr.io.gpr_rs2_addr := idu.io.gpr_rs2_addr

    io.dmem <> lsu.io.dmem

    csr.io.csr_raddr := idu.io.csr_raddr
    idu.io.csr_rdata := csr.io.csr_rdata
    csr.io.csr_wdata := wbu.io.csr_wdata
    csr.io.csr_addr := wbu.io.csr_addr
    csr.io.csr_cmd := wbu.io.csr_cmd
    gpr.io.gpr_wen := wbu.io.gpr_wen
    gpr.io.gpr_addr := wbu.io.gpr_addr
    gpr.io.gpr_wdata := wbu.io.gpr_wdata




































    idu.io_hazard.stall_flg := false.B


















    //Struc hazard
    /*fix in xbar*/





















    //control hazard
    //先只实现ecall的异常处理, 只会产生在idu阶段
    val is_irq = RegNext(wbu.io.irq_valid && wbu.io.is_irq)
    dontTouch(is_irq)
    csr.io.csr_is_irq := is_irq
    csr.io.csr_reg_pc := wbu.io_pipe.in.bits.ls2wb_reg_pc//pipe line irq
    csr.io.csr_irq_num := wbu.io.irq_num

    ifu.io_hazard.is_mret := idu.io.is_mret

    val is_ctrl_hazard = ((exu.io.br_flg && exu.io.br_target =/= ifu.io_pipe.out.bits.if2id_reg_pc) || (exu.io.jmp_flg && exu.io.alu_out =/= ifu.io_pipe.out.bits.if2id_reg_pc)) && exu.io_pipe.out.valid
    dontTouch(is_ctrl_hazard)

    val is_ctrl_hazard_r = RegInit(false.B)
    val is_irq_r = RegInit(false.B)
    is_ctrl_hazard_r := Mux(is_ctrl_hazard, true.B, Mux(ifu.io_pipe.in.ready & ifu.io_pipe.in.valid, false.B, is_ctrl_hazard_r))
    is_irq_r := Mux(is_irq, true.B, Mux(ifu.io_pipe.in.ready & ifu.io_pipe.in.valid, false.B, is_irq_r))

    ifu.io_hazard.flush_flg := is_ctrl_hazard | is_irq
    idu.io_hazard.flush_flg := is_ctrl_hazard | is_irq
    exu.io_hazard.flush_flg := is_ctrl_hazard | is_irq
    lsu.io_hazard.flush_flg := is_irq
    wbu.io_hazard.flush_flg := is_irq

    //ifu next pc process
    val sel_br = exu.io.br_flg
    val sel_jmp = exu.io.jmp_flg
    val sel_mret = idu.io.is_mret
    val pc_next_normal = Mux1H(Seq(
        sel_br   -> exu.io.br_target,
        sel_jmp  -> exu.io.alu_out,
        sel_mret -> csr.io.csr_mepc
    ))
    val pc_real_next = Mux(is_irq_r, csr.io.csr_mtvec, Mux(is_ctrl_hazard_r, pc_next_normal, ifu.io_hazard.pc_plus4))
    ifu.io_hazard.pc_real_next := pc_real_next


    when(ifu.io_hazard.flush_flg){ifu.io_pipe.in.valid := false.B}
    when(idu.io_hazard.flush_flg){idu.io_pipe.in.valid := false.B}
    when(exu.io_hazard.flush_flg){exu.io_pipe.in.valid := false.B}
    when(lsu.io_hazard.flush_flg){lsu.io_pipe.in.valid := false.B}
    when(wbu.io_hazard.flush_flg){wbu.io_pipe.in.valid := false.B}










































    def pipelineConnect[T <: Data, T2 <: Data](prevOut: DecoupledIO[T], thisIn: DecoupledIO[T]) = {
        prevOut.ready := thisIn.ready
        thisIn.bits := RegEnable(prevOut.bits, prevOut.valid && thisIn.ready)
        thisIn.valid := RegEnable(prevOut.valid, thisIn.ready);
    }

    def dataConflict(rs: UInt, rd: UInt) = (rs === rd)
    def dataConflictWithStage(stage_left: IDU, stage_right_is_working: Bool, rd: UInt, is_w: Bool) = {
        val rs1 = stage_left.io.gpr_rs1_addr
        val rs2 = stage_left.io.gpr_rs2_addr
        val is_working = stage_right_is_working
        val rs1_is_zero = rs1 === 0.U
        val rs2_is_zero = rs2 === 0.U
        val rs1_is_read = stage_left.io.gpr_rs1_is_read
        val rs2_is_read = stage_left.io.gpr_rs2_is_read
        
        val stage_left_valid_r = RegNext(stage_left.io_pipe.in.valid)
        ((rs1_is_read && ~rs1_is_zero && dataConflict(rs1, rd)) || (rs2_is_read && ~rs2_is_zero && dataConflict(rs2, rd))) && is_working && is_w && stage_left_valid_r
    }

}






















object StageConnect {
  def apply[T <: Data](left: DecoupledIO[T], right: DecoupledIO[T]) = {
    val arch = "multi"
    if      (arch == "single")   { right.bits := left.bits }
    else if (arch == "multi")    { right :<>= left }
    else if (arch == "pipeline") { right :<>= RegEnable(left, left.fire) }
    else if (arch == "ooo")      { right :<>= Queue(left, 16) }
  }
}