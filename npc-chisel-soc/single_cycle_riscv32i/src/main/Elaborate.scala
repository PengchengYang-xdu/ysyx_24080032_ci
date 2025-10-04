import npc.common.Config._
import npc.common._
import npc.common.Instructions._
import npc.core._
import npc.core.ifu._
import npc.core.idu._
import npc.core.isu._
import npc.core.exu._
import npc.core.wbu._
import npc.perip._

object Elaborate extends App {
    // // === 单独测试 instList ===
    // println("=== Instruction List ===")
    // instList.foreach { InstructionPattern =>
    //   println(s"${InstructionPattern.toString}")
    // }





    val firtoolOptions = Array(
        "--module-name-prefix=ysyx_24080032_",
        "--lowering-options=" + List(
        "disallowLocalVariables",
        "disallowPackedArrays",
        "locationInfoStyle=wrapInAtSquareBracket"
        ).mkString(",")
    )
    // circt.stage.ChiselStage.emitSystemVerilogFile(new npc.core.Core, args, firtoolOptions)
    circt.stage.ChiselStage.emitSystemVerilogFile(new npc.NPC, args, firtoolOptions)
    // circt.stage.ChiselStage.emitSystemVerilogFile(new npc.core.ifu.IFU, args, firtoolOptions)
}
