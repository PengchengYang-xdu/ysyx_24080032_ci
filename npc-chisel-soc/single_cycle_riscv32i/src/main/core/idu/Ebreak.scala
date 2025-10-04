package npc.core.idu

import chisel3._
import chisel3.util._
import npc.common.Config._
import npc.common._
import npc.common.Instructions._

class Ebreak extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(WORD_LEN.W))
  })

  // 直接内嵌 SystemVerilog 代码
  // 注意 Verilog 字符串中的换行需要用多行字符串 """ ... """ 包裹
  chisel3.experimental.verilog(
"""
    import "DPI-C" function void npc_trap();

    always @(*)begin
        if(inst == 32'h00100073)
            npc_trap();
    end

""")
}
