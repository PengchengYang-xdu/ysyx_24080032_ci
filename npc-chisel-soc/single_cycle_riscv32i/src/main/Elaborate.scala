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

import firrtl.options.StageOptions
import firrtl.stage.FirrtlOptions
import firrtl.transforms.ModulePrefixAnnotation

object Elaborate extends App {
  val annos = Seq(
    ModulePrefixAnnotation("ysyx_24080032_")
  )

  val firtoolOptions = Array(
    "--lowering-options=" + List(
      "disallowLocalVariables",
      "disallowPackedArrays",
      "locationInfoStyle=wrapInAtSquareBracket"
    ).mkString(",")
  )

  circt.stage.ChiselStage.emitSystemVerilogFile(
    new npc.NPC,
    args,
    firtoolOptions,
    annos
  )
}
