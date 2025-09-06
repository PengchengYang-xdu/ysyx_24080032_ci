import npc.common.Config._
import npc.common.InstructionsNew._

import npc.core._
import npc.core.ifu._
import npc.core.idu._
import npc.core.exu._
import npc.core.lsu._
import npc.core.wbu._
import npc.perip._

object Elaborate extends App {
    // === 单独测试 instList ===
  println("=== Instruction List ===")
  allPossibleInput = allPossibleInput(os.pwd / "rvdecoderdb" / "rvdecoderdbtest" / "jvm" / "riscv-opcodes")
  allPossibleInput.map(_.toString).foreach(println)





//   val firtoolOptions = Array("--lowering-options=" + List(
//     // make yosys happy
//     // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
//     "disallowLocalVariables",
//     "disallowPackedArrays",
//     "locationInfoStyle=wrapInAtSquareBracket"
//   ).reduce(_ + "," + _))
//   // circt.stage.ChiselStage.emitSystemVerilogFile(new npc.core.Core, args, firtoolOptions)
//   circt.stage.ChiselStage.emitSystemVerilogFile(new npc.NPC, args, firtoolOptions)
//   // circt.stage.ChiselStage.emitSystemVerilogFile(new npc.core.ifu.IFU, args, firtoolOptions)
}
