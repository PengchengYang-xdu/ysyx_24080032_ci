package npc.core

import chisel3._
import chisel3.util._
import npc.common.Config._
import npc.common.Instructions._


class GPR {
    val gpr = Mem(GPR_NUM, UInt(WORD_LEN.W))
    def read(addr: UInt) : UInt = Mux(addr === 0.U, 0.U, gpr(addr))
    def write(addr: UInt, data: UInt) = {
        gpr(addr) := data(WORD_LEN - 1, 0)
    }
}
