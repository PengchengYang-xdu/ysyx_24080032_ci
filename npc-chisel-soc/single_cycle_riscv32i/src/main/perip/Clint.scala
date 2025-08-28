package npc.perip.clint

import chisel3._
import chisel3.util._
import npc.common.Config._
import npc.common.Instructions._
import npc.bus.axi._


class Clint(coreConfig: CoreConfig) extends Module{
    val io = IO(new AXI4WithoutClk)
    io.rlast := true.U
    io.rid := 0.U
    io.bid := 0.U
    val ADDR = "h02000000".U
    val mtime = RegInit(0.U(64.W))
    mtime := mtime + 1.U

    val AXI_AR_fire = io.arvalid & io.arready
    val AXI_R_fire = io.rvalid & io.rready

    val sr_BeforeAXI_AR_Fire :: sr_BeforeAXI_R_Fire :: Nil = Enum(2)
    val c_state = RegInit(sr_BeforeAXI_AR_Fire)
    val n_state = WireDefault(c_state)
    n_state := MuxLookup(c_state, sr_BeforeAXI_AR_Fire)(Seq(
        sr_BeforeAXI_AR_Fire   -> Mux(AXI_AR_fire, sr_BeforeAXI_R_Fire, sr_BeforeAXI_AR_Fire),
        sr_BeforeAXI_R_Fire    -> Mux(AXI_R_fire, sr_BeforeAXI_AR_Fire, sr_BeforeAXI_R_Fire)
    ))
    c_state := n_state

    io.arready := c_state === sr_BeforeAXI_AR_Fire
    io.rvalid := c_state === sr_BeforeAXI_R_Fire
    io.rresp := 0.U

    val rdata = RegInit(0.U)
    rdata := Mux(io.araddr === ADDR, mtime(31, 0), mtime(63, 32))

    io.rdata := rdata
}
