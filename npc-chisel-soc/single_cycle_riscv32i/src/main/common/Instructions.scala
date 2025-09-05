package npc.common

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import org.chipsalliance.rvdecoderdb


val instTable: Iterable[rvdecoderdb.Instruction] = rvdecoderdb.instructions(os.pwd / "rvdecoderdb" / "rvdecoderdbtest" / "jvm" / "riscv-opcodes")

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

val rv32iExceptionInstructions = 
    Set("sbreak", "scall", "pause", "fence.tso", "fence", "slli_rv32", "srli_rv32", "srai_rv32")
val rv32iTargetSets = Set("rv_i", "rv32_i")
val rvzicsrTargetSets = Set("rv_zicsr")
val rv32iInstList = instTable
    .filter(instr => rv32iTargetSets.contains(instr.instructionSet.name))
    .filter(instr => !rv32iExceptionInstructions.contains(instr.instructionSet.name))
    .map(InstructionPattern(_))
    .toSeq
val rvzicsrInstList = instTable
    .filter(instr => rvzicsrTargetSets.contains(instr.instructionSet.name))
    .filter(_.pseudoFrom.isEmpty)
    .map(InstructionPattern(_))
    .toSeq
val instList = rv32iInstList ++ rvzicsrInstList
