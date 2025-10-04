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

    // 1. 将 lowering-options 字符串单独计算出来
    val loweringOptionsString = List(
      // make yosys happy
      // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
      "disallowLocalVariables",
      "disallowPackedArrays",
      "locationInfoStyle=wrapInAtSquareBracket"
    ).reduce(_ + "," + _)

    // 2. 定义你想使用的前缀
    val modulePrefix = "ysyx_24080032_" // 将你的前缀定义在这里

    // 3. 构造 firtoolOptions 数组
    val firtoolOptions = Array(
        s"--lowering-options=$loweringOptionsString", // 保持原有的 lowering-options
        s"-prefix=$modulePrefix"                       // 添加 -prefix 选项
    )

    // 4. 调用 ChiselStage
    circt.stage.ChiselStage.emitSystemVerilogFile(new npc.NPC, args, firtoolOptions)
}