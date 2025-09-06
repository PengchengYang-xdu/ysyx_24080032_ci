package npc.common

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import org.chipsalliance.rvdecoderdb




case class InstructionPattern (
  val inst: rvdecoderdb.Instruction
) extends DecodePattern {
  override def bitPat: BitPat = BitPat("b" + inst.encoding.toString())
}

object InstructionPattern {
  implicit class addMethodsToInsn(i: InstructionPattern) {
    def hasArg(arg: String) = i.inst.args.map(_.name).contains(arg)
  }
}

object allPossibleInput {
    def apply(opcodePath: os.Path): Seq[InstructionPattern] = {
        val instTable: Iterable[rvdecoderdb.Instruction] = rvdecoderdb.instructions(opcodePath)
        val instSets = Set("rv_i", "rv_zicsr", "rv_system", "rv_zifencei")
        val ex_rv_i = Set("fence")
        val ex_rv_zicsr = Set("csrrc", "csrrwi", "csrrsi", "csrrci")
        val ex_rv_system = Set("wfi")
        val instList = instTable
          .filter(_.pseudoFrom.isEmpty) //伪指令不考虑
          .filter(inst => instSets.contains(inst.instructionSet.name))
          .filter(inst => !ex_rv_i.contains(inst.name))
          .filter(inst => !ex_rv_zicsr.contains(inst.name))
          .filter(inst => !ex_rv_system.contains(inst.name))
          .map(InstructionPattern(_))
          .toSeq
        instList
    }
}