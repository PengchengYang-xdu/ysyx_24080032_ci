// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h849d1297__0;
    VlWide<8>/*255:0*/ __Vtemp_h339e77a6__0;
    VlWide<16>/*511:0*/ __Vtemp_h34b42438__0;
    VlWide<16>/*511:0*/ __Vtemp_he0807aa7__0;
    VlWide<8>/*255:0*/ __Vtemp_h4f1e2643__0;
    VlWide<8>/*255:0*/ __Vtemp_h1bbb68cb__0;
    VlWide<16>/*511:0*/ __Vtemp_h7b7037ea__0;
    VlWide<16>/*511:0*/ __Vtemp_hbab7a784__0;
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6705: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6705, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6707: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6707, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6711: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6711, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6713: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6713, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6717: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6717, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6719: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6719, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6723: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6723, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6725: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6725, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6729: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6729, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6731: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6731, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6735: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6735, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6737: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6737, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6741: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6741, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6743: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6743, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6747: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6747, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6749: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6749, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6753: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6753, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6755: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6755, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6759: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6759, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6761: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6761, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6765: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6765, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6767: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6767, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6771: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6771, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6773: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6773, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6777: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6779: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6779, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6783: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6783, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6785: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6785, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6789: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6789, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6791: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6791, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6796: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6796, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6798: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6798, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6803: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6803, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6805: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6805, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6811: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6811, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6813: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6813, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6817: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6817, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6819: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6819, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6825: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6825, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6827: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6827, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6832: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6832, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6834: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6834, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6839: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6839, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6841: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6841, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6847: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6847, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6849: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6849, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6854: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6854, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6856: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6856, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6861: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6861, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6863: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6863, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6869: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6869, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6871: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6871, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0xbU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
           & (3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                     >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = ((3U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                         >> 1U))) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                     >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = ((3U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
              >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source)) 
           << 2U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
                ? (0xffffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
                : 0U) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_2)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_release_ack)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10362: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10362, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10364: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10364, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10368: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10368, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10370: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10370, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10374: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10374, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10376: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10376, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10380: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10380, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10382: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10382, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10386: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10386, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10388: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10388, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10392: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10392, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10394: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10394, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10398: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10398, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10400: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10400, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10404: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10404, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10406: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10406, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10410: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10410, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10412: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10412, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10416: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10416, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10418: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10418, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10422: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10422, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10424: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10424, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10428: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10428, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10430: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10430, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10434: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10434, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10436: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10436, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10440: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10440, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10442: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10442, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10446: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10446, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10448: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10448, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10452: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10452, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10454: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10454, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10458: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10458, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10460: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10460, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10464: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10464, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10466: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10466, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10470: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10470, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10472: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10472, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10476: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10476, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10478: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10478, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10482: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10482, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10484: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10484, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10488: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10488, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10490: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10490, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10494: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10494, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10496: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10496, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10500: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10500, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10502: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10502, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10506: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10506, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10508: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10508, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10512: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10512, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10514: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10514, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10518: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10518, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10520: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10520, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10524: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10524, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10526: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10526, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10530: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10530, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10532: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10532, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10536: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10536, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10538: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10538, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10542: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10542, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10544: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10544, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10548: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10548, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10550: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10550, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10554: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10554, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10556: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10556, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10560: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10560, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10562: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10562, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10566: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10566, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10568: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10568, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10572: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10572, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10574: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10574, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10578: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10578, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10580: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10580, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10584: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10584, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10586: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10586, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10590: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10590, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10592: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10592, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10596: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10596, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10598: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10598, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10602: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10602, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10604: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10604, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10608: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10608, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10610: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10610, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10614: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10614, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10616: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10616, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10620: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10620, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10622: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10622, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10626: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10626, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10628: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10628, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10632: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10632, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10634: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10634, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10638: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10638, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10640: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10640, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10644: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10644, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10646: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10646, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10650: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10650, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10652: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10652, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10656: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10656, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10658: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10658, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10662: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10662, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10664: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10664, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10668: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10668, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10670: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10670, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10674: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10674, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10676: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10676, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10680: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10680, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10682: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10682, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10686: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10686, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10688: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10688, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10692: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10692, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10694: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10694, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10698: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10698, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10700: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10700, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10704: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10704, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10706: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10706, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_1) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10711: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10711, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10713: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10713, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10718: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10718, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10720: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10720, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10726: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10726, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10728: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10728, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10732: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10732, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10734: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10734, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10740: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10740, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10742: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10742, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10747: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10747, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10749: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10749, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10754: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10754, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10756: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10756, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready) 
                                  != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32)
                                       ? ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_2))
                                           ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_2)))
                                           : 0U) : 0U)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10762: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10762, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10764: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10764, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10770: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10770, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10772: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10772, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10777: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10779: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10779, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10784: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10784, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10786: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10786, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10792: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10792, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10794: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10794, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__unnamedblk1__DOT___GEN_2 
        = ((0x1dU >= (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size_hi)) 
                       << 3U) | (((IData)((0U != (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6) 
                                                     >> 3U)))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_8) 
                                                          >> 1U)))) 
                                             << 1U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_10)))))
            ? (0x3fffffffU & ((IData)(0x7fffU) << (
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size_hi)) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6) 
                                                                    >> 3U)))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_8) 
                                                                       >> 1U)))) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_10))))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__unnamedblk1__DOT___GEN_3 
        = ((0x1dU >= (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_size_hi)) 
                       << 3U) | (((IData)((0U != (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6) 
                                                     >> 3U)))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_8) 
                                                          >> 1U)))) 
                                             << 1U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_10)))))
            ? (0x3fffffffU & ((IData)(0x7fffU) << (
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_size_hi)) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6) 
                                                                    >> 3U)))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_8) 
                                                                       >> 1U)))) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_10))))))
            : 0U);
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arvalid)) 
                                 | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                                                >> 8U)) 
                                    == (0x7fffU & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__unnamedblk1__DOT___GEN_2))))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16829: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1: Assertion failed\n    at ToTL.scala:114 assert (!in.ar.valid || r_size1 === UIntToOH1(r_size, beatCountBits)) // because aligned\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16829, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16831: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16831, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awvalid)) 
                                 | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                                                >> 8U)) 
                                    == (0x7fffU & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__unnamedblk1__DOT___GEN_3))))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16835: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1: Assertion failed\n    at ToTL.scala:150 assert (!in.aw.valid || w_size1 === UIntToOH1(w_size, beatCountBits)) // because aligned\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16837: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16837, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awvalid)) 
                                  | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen))) 
                                 | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awsize)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16843: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1: Assertion failed\n    at ToTL.scala:151 assert (!in.aw.valid || in.aw.bits.len === 0.U || in.aw.bits.size === log2Ceil(beatBytes).U) // because aligned\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16843, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16845: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16845, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__winner_0)) 
                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__winner_1)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16849: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1: Assertion failed\n    at Arbiter.scala:77 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16849, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16851: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16851, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___nodeOut_a_valid_T)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__winner_0)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__winner_1))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16855: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1: Assertion failed\n    at Arbiter.scala:79 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16855, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16857: Assertion failed in %NysyxSoCFull.fpga.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16857, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok 
        = (1U & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                                >> 3U))))) 
                       | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                       >> 3U)))) | 
                      (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                    >> 3U)))) | (3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                                     >> 3U)))) 
                    | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                    >> 3U)))) | (5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                                     >> 3U)))) 
                  | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                  >> 3U)))) | (7U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                                   >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0x16U >= vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN)
            ? (0x7fffffU & ((IData)(0xffU) << vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                    & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (0xdU > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
           & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                             >> 3U))))) 
                    | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                    >> 3U)))) | (2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                                     >> 3U)))) 
                  | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                  >> 3U)))) | (4U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                                   >> 3U)))) 
                | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                >> 3U)))) | (6U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                               >> 3U)))) 
              | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                              >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (6U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (0U == ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                               >> 0xcU)) | (1U & (~ 
                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                                                   >> 0xcU)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                    >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = ((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                                      >> 3U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (2U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                  | (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                            >> 0x1eU)))) | ((9U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size)) 
                                            & (0U == 
                                               ((2U 
                                                 & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                                                    >> 0x1eU)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                                                       >> 0x1eU))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
            & (3U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1 
        = ((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                               >> 3U))) | (1U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                                     >> 3U)))) 
                | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                >> 3U)))) | (3U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                               >> 3U)))) 
              | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                              >> 3U)))) | (5U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                                     >> 3U)))) 
            | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                            >> 3U)))) | (7U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                                   >> 3U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2 
        = (1U & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                                >> 3U))))) 
                       | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                       >> 3U)))) | 
                      (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                    >> 3U)))) | (3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                                     >> 3U)))) 
                    | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                    >> 3U)))) | (5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                                     >> 3U)))) 
                  | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                  >> 3U)))) | (7U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                                   >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_7 
        = ((0x16U >= vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_0)
            ? (0x7fffffU & ((IData)(0xffU) << vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_0))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
                    & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_7)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
                        >> 0xcU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
                                              >> 0xcU))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1 
        = (1U & (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_41))) 
                  | (0U == ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
                                   >> 0x1eU)) | (1U 
                                                 & (~ 
                                                    (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
                                                     >> 0x1eU)))))) 
                 | (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
                           >> 0x1eU))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = (0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_44 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_45 
        = (0xdU > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_46 
        = (6U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_47 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_45) 
             & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                               >> 3U))))) 
                      | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                      >> 3U)))) | (2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                                       >> 3U)))) 
                    | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                    >> 3U)))) | (4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                                     >> 3U)))) 
                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                  >> 3U)))) | (6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                                   >> 3U)))) 
                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                >> 3U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_46)) 
           & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_41))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_48 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_49 
        = ((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                                      >> 3U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_46)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_45)) 
           & ((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_41))) 
              | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
                 >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_50 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_51 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_52 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_53 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
           << 3U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
           >> 0x1dU);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[4U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[5U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[6U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[7U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[8U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[9U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[0xaU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[0xbU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[0xcU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[0xdU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[0xeU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57[0xfU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_1)
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_58 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_59 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_58) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_60 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_59) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_61 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_59) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_62 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_3) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_4))
            ? VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_5)
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_63 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_64 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_63) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_3) 
            & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode)))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_54 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_55 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_56 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    __Vtemp_h849d1297__0[0U] = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                << 2U);
    __Vtemp_h849d1297__0[1U] = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                >> 0x1eU);
    __Vtemp_h849d1297__0[2U] = 0U;
    __Vtemp_h849d1297__0[3U] = 0U;
    __Vtemp_h849d1297__0[4U] = 0U;
    __Vtemp_h849d1297__0[5U] = 0U;
    __Vtemp_h849d1297__0[6U] = 0U;
    __Vtemp_h849d1297__0[7U] = 0U;
    VL_SHIFTR_WWW(256,256,256, __Vtemp_h339e77a6__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h849d1297__0);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h339e77a6__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h339e77a6__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h339e77a6__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h339e77a6__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h339e77a6__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h339e77a6__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h339e77a6__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h339e77a6__0[7U];
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49737: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49737, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49739: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49739, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49743: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49743, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49745: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49745, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49749: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49749, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49751: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49751, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49755: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49755, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49757: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49757, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49761: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49761, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49763: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49763, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49767: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49767, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49769: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49769, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49773: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49773, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49775: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49775, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49779: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49779, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49781: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49781, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49785: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49785, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49787: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49787, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49791: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49791, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49793: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49793, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49797: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49797, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49799: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49799, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49803: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49803, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49805: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49805, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49809: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49809, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49811: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49811, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49815: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49815, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49817: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49817, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49821: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49821, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49823: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49823, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49827: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49827, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49829: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49829, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49833: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49833, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49835: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49835, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49839: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Get carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49839, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49841: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49841, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49845: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49845, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49847: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49847, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49851: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Get carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49851, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49853: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49853, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49857: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49857, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49859: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49859, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49863: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49863, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49865: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49865, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49869: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49869, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49871: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49871, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49875: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49875, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49877: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49877, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49881: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49881, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49883: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49883, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49887: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49887, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49889: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49889, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49893: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49893, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49895: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49895, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49899: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49899, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49901: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49901, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49905: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49905, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49907: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49907, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49911: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49911, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49913: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49913, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49917: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49917, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49919: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49919, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49923: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49923, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49925: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49925, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49929: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49929, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49931: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49931, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49935: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49935, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49937: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49937, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (4U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49941: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49941, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49943: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49943, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49947: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49947, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49949: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49949, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49953: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49953, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49955: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49955, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49959: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Logical carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49959, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49961: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49961, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49965: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49965, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49967: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49967, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49971: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49971, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49973: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49973, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49977: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49977, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49979: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49979, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49983: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49983, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49985: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49985, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49989: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Hint carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49989, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49991: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49991, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49995: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49995, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49997: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 49997, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50001: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50001, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50003: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50003, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50007: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50007, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50009: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50009, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50013: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50013, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50015: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50015, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50019: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50019, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50021: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50021, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50025: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50025, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50027: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50027, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50031: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50031, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50033: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50033, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50037: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50037, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50039: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50039, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50043: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50043, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50045: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50045, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50049: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50049, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50051: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50051, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50055: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50055, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50057: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50057, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50061: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50061, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50063: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50063, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50067: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50067, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50069: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50069, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50073: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50073, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50075: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50075, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50079: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50079, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50081: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50081, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50085: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50085, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50087: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50087, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50091: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50091, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50093: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50093, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50097: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50097, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50099: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50099, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50103: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50103, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50105: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50105, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50109: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50109, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50111: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50111, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50115: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50115, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50117: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50117, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50121: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50121, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50123: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50123, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50127: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50127, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50129: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50129, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50133: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50133, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50135: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50135, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50139: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50139, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50141: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50141, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50145: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50145, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50147: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50147, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50151: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50151, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50153: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50153, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50157: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50157, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50159: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50159, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50163: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50163, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50165: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50165, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50169: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50169, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50171: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50171, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_43)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50175: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50175, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50177: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50177, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50181: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50181, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50183: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50183, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                     & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50187: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50187, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50189: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50189, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_44) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50193: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50193, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50195: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50195, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_44) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50199: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50199, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50201: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50201, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_44) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_43)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50205: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50205, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50207: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50207, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_44) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50211: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50211, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50213: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50213, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_44) 
                     & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50217: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50217, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50219: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50219, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_48) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_47))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50223: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel carries Release type unsupported by manager (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50223, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50225: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50225, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_48) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_49))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50229: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50229, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50231: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50231, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_48) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50235: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel Release carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50235, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50237: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50237, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_48) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_43)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50241: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel Release smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50241, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50243: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50243, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_48) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50247: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel Release address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50247, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50249: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50249, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_48) 
                     & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50253: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel Release carries invalid report param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50253, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50255: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50255, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_50) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_47))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50259: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50259, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50261: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50261, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_50) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_49))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50265: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50265, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50267: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50267, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_50) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50271: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50271, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50273: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50273, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_50) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_43)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50277: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50277, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50279: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50279, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_50) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50283: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50283, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50285: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50285, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_50) 
                     & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50289: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50289, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50291: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50291, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_51) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50295: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50295, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50297: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50297, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_51) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50301: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50301, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50303: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50303, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_51) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50307: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel AccessAck address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50307, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50309: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50309, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_51) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50313: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel AccessAck carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50313, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50315: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50315, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_52) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50319: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50319, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50321: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50321, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_52) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50325: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50325, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50327: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50327, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_52) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50331: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50331, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50333: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50333, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_52) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50337: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel AccessAckData carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50337, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50339: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50339, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_53) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50343: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel HintAck carries unmanaged address (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50343, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50345: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50345, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_53) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50349: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel HintAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50349, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50351: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50351, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_53) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50355: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel HintAck address not aligned to size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50355, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50357: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50357, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_53) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50361: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel HintAck carries invalid param (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50361, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50363: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50363, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_bits_sink)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50367: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'E' channels carries invalid sink ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50367, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50369: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50369, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_54) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50373: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50373, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50375: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50375, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_54) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50379: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel param changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50379, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50381: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50381, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_54) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50385: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50385, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50387: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50387, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_54) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50391: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50391, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50393: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50393, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_54) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50397: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50397, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50399: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50399, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50403: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50403, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50405: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50405, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50409: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50409, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50411: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50411, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50415: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50415, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50417: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50417, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50421: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50421, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50423: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50423, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50427: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50427, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50429: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50429, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_56) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode_3))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50433: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50433, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50435: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50435, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_56) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param_3))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50439: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel param changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50439, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50441: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50441, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_56) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size_3))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50445: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50445, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50447: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50447, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_56) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source_3))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50451: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50451, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50453: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50453, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_56) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__address_2)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50457: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel address changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50457, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50459: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50459, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_65 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_1);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_2) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_65)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50464: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50464, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50466: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50466, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_66 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_59) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_66) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50471: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50471, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50473: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50473, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_60) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50479: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50479, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50481: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50481, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_60) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50485: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50485, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50487: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50487, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_61) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                >> 1U)))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50493: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50493, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50495: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50495, "");
    }
    VL_SHIFTR_WWW(512,512,512, __Vtemp_h34b42438__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
        = __Vtemp_h34b42438__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[1U] 
        = __Vtemp_h34b42438__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[2U] 
        = __Vtemp_h34b42438__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[3U] 
        = __Vtemp_h34b42438__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[4U] 
        = __Vtemp_h34b42438__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[5U] 
        = __Vtemp_h34b42438__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[6U] 
        = __Vtemp_h34b42438__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[7U] 
        = __Vtemp_h34b42438__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[8U] 
        = __Vtemp_h34b42438__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[9U] 
        = __Vtemp_h34b42438__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xaU] 
        = __Vtemp_h34b42438__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xbU] 
        = __Vtemp_h34b42438__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xcU] 
        = __Vtemp_h34b42438__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xdU] 
        = __Vtemp_h34b42438__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xeU] 
        = __Vtemp_h34b42438__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xfU] 
        = __Vtemp_h34b42438__0[0xfU];
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_61) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_62) 
                        != (0x7fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50500: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50500, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50502: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50502, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_58) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50507: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50509: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50509, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready 
                                  != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_59)
                                       ? VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3)
                                       : 0ULL)) | (0ULL 
                                                   == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50515: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50515, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50517: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50517, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0ULL == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50523: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50523, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50525: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50525, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_67 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_5);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_6) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_67)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50530: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' channel re-used a source ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50530, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50532: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50532, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_68 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_64) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_68) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50537: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50537, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50539: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50539, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_64) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50544: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50544, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50546: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50546, "");
    }
    VL_SHIFTR_WWW(512,512,512, __Vtemp_he0807aa7__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_57);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
        = __Vtemp_he0807aa7__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[1U] 
        = __Vtemp_he0807aa7__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[2U] 
        = __Vtemp_he0807aa7__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[3U] 
        = __Vtemp_he0807aa7__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[4U] 
        = __Vtemp_he0807aa7__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[5U] 
        = __Vtemp_he0807aa7__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[6U] 
        = __Vtemp_he0807aa7__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[7U] 
        = __Vtemp_he0807aa7__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[8U] 
        = __Vtemp_he0807aa7__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[9U] 
        = __Vtemp_he0807aa7__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xaU] 
        = __Vtemp_he0807aa7__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xbU] 
        = __Vtemp_he0807aa7__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xcU] 
        = __Vtemp_he0807aa7__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xdU] 
        = __Vtemp_he0807aa7__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xeU] 
        = __Vtemp_he0807aa7__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xfU] 
        = __Vtemp_he0807aa7__0[0xfU];
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_64) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp_1))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_62) 
                        != (0x7fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50552: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50552, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50554: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50554, "");
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_63) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_1)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack)) 
                       & (~ ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_opcode))))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_enq_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50560: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50560, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50562: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50562, "");
    }
    if (VL_UNLIKELY((((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT__c_set_wo_ready 
                        == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__unnamedblk1__DOT___GEN_64)
                             ? VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3)
                             : 0ULL))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50567: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'C' and 'D' concurrent, despite minlatency > 0 (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50567, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50569: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50569, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0ULL == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50575: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50575, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50577: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50577, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_set) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_2)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50581: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'D' channel re-used a sink ID (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50581, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50583: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50583, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_set) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                           >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_bits_sink)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50587: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1: Assertion failed: 'E' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:171:98)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50587, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50589: Assertion failed in %NysyxSoCFull.fpga.hints.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 50589, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_8 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_9 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok 
        = (1U & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                                >> 3U))))) 
                       | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                       >> 3U)))) | 
                      (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                    >> 3U)))) | (3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                                     >> 3U)))) 
                    | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                    >> 3U)))) | (5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                                     >> 3U)))) 
                  | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                  >> 3U)))) | (7U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                                   >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0x16U >= vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN)
            ? (0x7fffffU & ((IData)(0xffU) << vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10 
        = (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                    & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___is_aligned_mask_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_11 
        = (0xdU > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_11) 
           & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                             >> 3U))))) 
                    | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                    >> 3U)))) | (2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                                     >> 3U)))) 
                  | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                  >> 3U)))) | (4U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                                   >> 3U)))) 
                | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                >> 3U)))) | (6U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                               >> 3U)))) 
              | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                              >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_13 
        = (6U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_14 
        = (0U == ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                               >> 0xcU)) | (1U & (~ 
                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                                                   >> 0xcU)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_12) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_13)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_14));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_17 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_14) 
                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                    >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_18 
        = ((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                                      >> 3U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_13)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_11)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_19 
        = (2U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_20 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_23 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_24 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_12) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_13) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_14) 
                  | (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                            >> 0x1eU)))) | ((9U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size)) 
                                            & (0U == 
                                               ((2U 
                                                 & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                                                    >> 0x1eU)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                                                       >> 0x1eU))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_12) 
            & (3U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_1 
        = ((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                               >> 3U))) | (1U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                                     >> 3U)))) 
                | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                >> 3U)))) | (3U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                               >> 3U)))) 
              | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                              >> 3U)))) | (5U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                                     >> 3U)))) 
            | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                            >> 3U)))) | (7U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                                   >> 3U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_32 
        = (0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_34 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_36 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_37 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_2 
        = (1U & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                                >> 3U))))) 
                       | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                       >> 3U)))) | 
                      (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                    >> 3U)))) | (3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                                     >> 3U)))) 
                    | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                    >> 3U)))) | (5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                                     >> 3U)))) 
                  | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                  >> 3U)))) | (7U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                                   >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___is_aligned_mask_T_7 
        = ((0x16U >= vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_0)
            ? (0x7fffffU & ((IData)(0xffU) << vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_0))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_40 
        = (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address 
                    & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___is_aligned_mask_T_7)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_41 
        = ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address 
                        >> 0xcU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address 
                                              >> 0xcU))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__address_ok_1 
        = (1U & (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_41))) 
                  | (0U == ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address 
                                   >> 0x1eU)) | (1U 
                                                 & (~ 
                                                    (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address 
                                                     >> 0x1eU)))))) 
                 | (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address 
                           >> 0x1eU))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_42 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_43 
        = (0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_44 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_45 
        = (0xdU > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_46 
        = (6U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_47 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_45) 
             & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                               >> 3U))))) 
                      | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                      >> 3U)))) | (2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                                       >> 3U)))) 
                    | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                    >> 3U)))) | (4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                                     >> 3U)))) 
                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                  >> 3U)))) | (6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                                   >> 3U)))) 
                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                >> 3U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_46)) 
           & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_41))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_48 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_49 
        = ((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                                      >> 3U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_46)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_45)) 
           & ((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_41))) 
              | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address 
                 >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_50 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_51 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_52 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_53 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
           << 3U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
           >> 0x1dU);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[4U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[5U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[6U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[7U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[8U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[9U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[0xaU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[0xbU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[0xcU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[0xdU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[0xeU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57[0xfU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_1)
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_58 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_59 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_58) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_60 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_59) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_61 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_59) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_62 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___same_cycle_resp_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__c_set_wo_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___same_cycle_resp_T_3) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_4))
            ? VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5)
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_63 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_64 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_63) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__same_cycle_resp_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___same_cycle_resp_T_3) 
            & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode)))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_54 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_55 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_56 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    __Vtemp_h4f1e2643__0[0U] = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                << 2U);
    __Vtemp_h4f1e2643__0[1U] = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                                >> 0x1eU);
    __Vtemp_h4f1e2643__0[2U] = 0U;
    __Vtemp_h4f1e2643__0[3U] = 0U;
    __Vtemp_h4f1e2643__0[4U] = 0U;
    __Vtemp_h4f1e2643__0[5U] = 0U;
    __Vtemp_h4f1e2643__0[6U] = 0U;
    __Vtemp_h4f1e2643__0[7U] = 0U;
    VL_SHIFTR_WWW(256,256,256, __Vtemp_h1bbb68cb__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes, __Vtemp_h4f1e2643__0);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h1bbb68cb__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h1bbb68cb__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h1bbb68cb__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h1bbb68cb__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h1bbb68cb__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h1bbb68cb__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h1bbb68cb__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h1bbb68cb__0[7U];
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36093: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36093, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36095: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36095, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_18))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36099: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36099, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36101: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36101, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36105: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36105, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36107: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36107, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36111: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36111, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36113: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36113, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36117: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36117, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36119: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36119, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36123: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36123, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36125: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36125, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36129: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36129, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36131: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36131, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36135: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36135, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36137: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36137, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_18))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36141: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36141, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36143: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36143, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36147: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36147, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36149: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36149, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36153: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36153, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36155: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36155, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36159: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36159, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36161: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36161, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36165: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36165, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36167: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36167, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36171: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36171, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36173: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36173, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36177: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36177, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36179: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36179, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36183: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36183, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36185: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36185, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_13) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_17)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36189: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36189, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36191: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36191, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36195: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Get carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36195, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36197: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36197, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36201: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36201, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36203: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36203, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36207: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Get carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36207, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36209: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36209, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36213: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36213, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36215: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36215, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_25) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36219: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36219, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36221: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36221, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_25) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36225: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36225, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36227: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36227, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_25) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36231: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36231, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36233: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36233, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_25) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36237: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel PutFull carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36237, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36239: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36239, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36243: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36243, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36245: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36245, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_26) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36249: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36249, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36251: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36251, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_26) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36255: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36255, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36257: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36257, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36261: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36261, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36263: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36263, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36267: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel PutPartial carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36267, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36269: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36269, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36273: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36273, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36275: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36275, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36279: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36279, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36281: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36281, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36285: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36285, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36287: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36287, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_28) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36291: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36291, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36293: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36293, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_28) 
                     & (4U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36297: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36297, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36299: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36299, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36303: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36303, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36305: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36305, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_29) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_27))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36309: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36309, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36311: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36311, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_29) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36315: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Logical carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36315, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36317: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36317, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_29) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36321: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36321, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36323: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36323, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36327: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36327, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36329: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36329, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_29) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36333: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36333, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36335: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36335, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_30) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36339: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36339, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36341: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36341, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_30) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36345: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Hint carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36345, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36347: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36347, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36351: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36351, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36353: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36353, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36357: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36357, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36359: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36359, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_30) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36363: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36363, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36365: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36365, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36369: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36369, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36371: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36371, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_31) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36375: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36375, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36377: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36377, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_31) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_32)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36381: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36381, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36383: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36383, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_31) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36387: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36387, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36389: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36389, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_31) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36393: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36393, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36395: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36395, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_31) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36399: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36399, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36401: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36401, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36405: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36405, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36407: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36407, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_33) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_32)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36411: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36411, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36413: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36413, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_33) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36417: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36417, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36419: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36419, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_33) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_34)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36423: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36423, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36425: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36425, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_33) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36429: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36429, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36431: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36431, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36435: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36435, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36437: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36437, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_35) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_32)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36441: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36441, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36443: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36443, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_35) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36447: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36447, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36449: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36449, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_35) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_34)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36453: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36453, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36455: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36455, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_36))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36459: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36459, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36461: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36461, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_37) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36465: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36465, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36467: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36467, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_37) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36471: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36471, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36473: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36473, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_37) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36477: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36477, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36479: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36479, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36483: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36483, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36485: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36485, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_38) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36489: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36489, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36491: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36491, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_36))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36495: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36495, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36497: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36497, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_39) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36501: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36501, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36503: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36503, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_39) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36507: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36509: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36509, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_39) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36513: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36513, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36515: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36515, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_42) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36519: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36519, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36521: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36521, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_42) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36525: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36525, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36527: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36527, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_42) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_43)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36531: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36531, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36533: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36533, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_42) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36537: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36537, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36539: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36539, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_42) 
                     & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36543: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36543, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36545: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36545, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_44) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36549: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36549, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36551: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36551, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_44) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36555: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36555, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36557: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36557, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_44) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_43)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36561: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36561, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36563: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36563, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_44) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36567: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36567, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36569: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36569, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_44) 
                     & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36573: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36573, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36575: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36575, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_48) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_47))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36579: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel carries Release type unsupported by manager (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36579, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36581: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36581, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_48) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_49))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36585: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36585, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36587: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36587, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_48) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36591: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel Release carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36591, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36593: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36593, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_48) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_43)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36597: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel Release smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36597, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36599: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36599, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_48) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36603: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel Release address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36603, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36605: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36605, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_48) 
                     & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36609: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel Release carries invalid report param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36609, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36611: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36611, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_50) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_47))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36615: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36615, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36617: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36617, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_50) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_49))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36621: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36621, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36623: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36623, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_50) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36627: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36627, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36629: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36629, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_50) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_43)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36633: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36633, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36635: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36635, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_50) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36639: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36639, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36641: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36641, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_50) 
                     & (6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36645: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36645, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36647: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36647, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_51) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36651: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36651, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36653: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36653, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_51) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36657: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36657, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36659: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36659, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_51) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36663: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel AccessAck address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36663, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36665: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36665, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_51) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36669: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel AccessAck carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36669, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36671: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36671, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_52) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36675: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36675, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36677: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36677, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_52) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36681: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36681, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36683: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36683, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_52) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36687: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36687, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36689: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36689, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_52) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36693: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel AccessAckData carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36693, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36695: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36695, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_53) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__address_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36699: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel HintAck carries unmanaged address (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36699, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36701: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36701, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_53) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__source_ok_2))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36705: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel HintAck carries invalid source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36705, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36707: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36707, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_53) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_40))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36711: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel HintAck address not aligned to size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36711, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36713: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36713, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_53) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36717: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel HintAck carries invalid param (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36717, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36719: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36719, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_bits_sink)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36723: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'E' channels carries invalid sink ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36723, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36725: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36725, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_54) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36729: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36729, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36731: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36731, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_54) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36735: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel param changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36735, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36737: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36737, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_54) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36741: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36741, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36743: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36743, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_54) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36747: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36747, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36749: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36749, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_54) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36753: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36753, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36755: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36755, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36759: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36759, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36761: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36761, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36765: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36765, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36767: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36767, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36771: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36771, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36773: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36773, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36777: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36779: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36779, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_55) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36783: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36783, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36785: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36785, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_56) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_3))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36789: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel opcode changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36789, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36791: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36791, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_56) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_3))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36795: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel param changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36795, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36797: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36797, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_56) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_3))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36801: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel size changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36801, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36803: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36803, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_56) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_3))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36807: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel source changed within multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36807, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36809: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36809, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_56) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address_2)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36813: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel address changed with multibeat operation (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36813, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36815: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36815, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_65 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_1);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_2) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_65)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36820: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36820, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36822: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36822, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_66 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_59) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_66) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36827: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36827, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36829: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36829, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_60) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_9 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_8 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36835: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36837: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36837, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_60) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36841: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36841, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36843: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36843, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_61) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                >> 1U)))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_9 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_8 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36849: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36849, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36851: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36851, "");
    }
    VL_SHIFTR_WWW(512,512,512, __Vtemp_h7b7037ea__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
        = __Vtemp_h7b7037ea__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[1U] 
        = __Vtemp_h7b7037ea__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[2U] 
        = __Vtemp_h7b7037ea__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[3U] 
        = __Vtemp_h7b7037ea__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[4U] 
        = __Vtemp_h7b7037ea__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[5U] 
        = __Vtemp_h7b7037ea__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[6U] 
        = __Vtemp_h7b7037ea__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[7U] 
        = __Vtemp_h7b7037ea__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[8U] 
        = __Vtemp_h7b7037ea__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[9U] 
        = __Vtemp_h7b7037ea__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xaU] 
        = __Vtemp_h7b7037ea__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xbU] 
        = __Vtemp_h7b7037ea__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xcU] 
        = __Vtemp_h7b7037ea__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xdU] 
        = __Vtemp_h7b7037ea__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xeU] 
        = __Vtemp_h7b7037ea__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xfU] 
        = __Vtemp_h7b7037ea__0[0xfU];
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_61) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_62) 
                        != (0x7fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36856: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36856, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36858: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36858, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_58) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36863: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36863, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36865: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36865, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__a_set_wo_ready 
                                  != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_59)
                                       ? VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3)
                                       : 0ULL)) | (0ULL 
                                                   == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__a_set_wo_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36871: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36871, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36873: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36873, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0ULL == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36879: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36879, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36881: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36881, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_67 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_6) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_67)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36886: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' channel re-used a source ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36886, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36888: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36888, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_68 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_64) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_68) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__same_cycle_resp_1)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36893: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36893, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36895: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36895, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_64) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__same_cycle_resp_1)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36900: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36900, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36902: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36902, "");
    }
    VL_SHIFTR_WWW(512,512,512, __Vtemp_hbab7a784__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_57);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
        = __Vtemp_hbab7a784__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[1U] 
        = __Vtemp_hbab7a784__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[2U] 
        = __Vtemp_hbab7a784__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[3U] 
        = __Vtemp_hbab7a784__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[4U] 
        = __Vtemp_hbab7a784__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[5U] 
        = __Vtemp_hbab7a784__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[6U] 
        = __Vtemp_hbab7a784__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[7U] 
        = __Vtemp_hbab7a784__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[8U] 
        = __Vtemp_hbab7a784__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[9U] 
        = __Vtemp_hbab7a784__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xaU] 
        = __Vtemp_hbab7a784__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xbU] 
        = __Vtemp_hbab7a784__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xcU] 
        = __Vtemp_hbab7a784__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xdU] 
        = __Vtemp_hbab7a784__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xeU] 
        = __Vtemp_hbab7a784__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xfU] 
        = __Vtemp_hbab7a784__0[0xfU];
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_64) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__same_cycle_resp_1))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_62) 
                        != (0x7fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36908: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36908, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36910: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36910, "");
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_63) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack)) 
                       & (~ ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_opcode))))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36916: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36916, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36918: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36918, "");
    }
    if (VL_UNLIKELY((((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__c_set_wo_ready) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT__c_set_wo_ready 
                        == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__unnamedblk1__DOT___GEN_64)
                             ? VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3)
                             : 0ULL))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36923: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'C' and 'D' concurrent, despite minlatency > 0 (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36923, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36925: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36925, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0ULL == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36931: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36931, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36933: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36933, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_set) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36937: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'D' channel re-used a sink ID (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36937, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36939: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36939, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_set) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2)) 
                           >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_bits_sink)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36943: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1: Assertion failed: 'E' channel acknowledged for nothing inflight (connected at src/chiplink/ChipLink.scala:70:16)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36943, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36945: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 36945, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__unnamedblk1__DOT___GEN_2 
        = ((0x1dU >= (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size_hi)) 
                       << 3U) | (((IData)((0U != (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                                     >> 3U)))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_8) 
                                                          >> 1U)))) 
                                             << 1U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_10)))))
            ? (0x3fffffffU & ((IData)(0x7fffU) << (
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size_hi)) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                                                    >> 3U)))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_8) 
                                                                       >> 1U)))) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_10))))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__unnamedblk1__DOT___GEN_3 
        = ((0x1dU >= (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi)) 
                       << 3U) | (((IData)((0U != (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                                     >> 3U)))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_8) 
                                                          >> 1U)))) 
                                             << 1U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_10)))))
            ? (0x3fffffffU & ((IData)(0x7fffU) << (
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi)) 
                                                    << 3U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                                                    >> 3U)))) 
                                                       << 2U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_8) 
                                                                       >> 1U)))) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_10))))))
            : 0U);
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arvalid)) 
                                 | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                                >> 8U)) 
                                    == (0x7fffU & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__unnamedblk1__DOT___GEN_2))))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16829: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1: Assertion failed\n    at ToTL.scala:114 assert (!in.ar.valid || r_size1 === UIntToOH1(r_size, beatCountBits)) // because aligned\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16829, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16831: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16831, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awvalid)) 
                                 | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                                >> 8U)) 
                                    == (0x7fffU & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__unnamedblk1__DOT___GEN_3))))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16835: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1: Assertion failed\n    at ToTL.scala:150 assert (!in.aw.valid || w_size1 === UIntToOH1(w_size, beatCountBits)) // because aligned\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16837: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16837, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awvalid)) 
                                  | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen))) 
                                 | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awsize)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16843: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1: Assertion failed\n    at ToTL.scala:151 assert (!in.aw.valid || in.aw.bits.len === 0.U || in.aw.bits.size === log2Ceil(beatBytes).U) // because aligned\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16843, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16845: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16845, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_0)) 
                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_1)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16849: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1: Assertion failed\n    at Arbiter.scala:77 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16849, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16851: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16851, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___nodeOut_a_valid_T)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_0)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_1))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16855: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1: Assertion failed\n    at Arbiter.scala:79 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16855, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16857: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16857, "");
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->externalPins_ps2_clk));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__delay 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__lfsr;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__lfsr = 0xfU;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__delay 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__lfsr;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__lfsr = 6U;
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__lfsr 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__lfsr) 
                        << 1U)) | (1U & VL_REDXOR_4(
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__lfsr)))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__delay 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__lfsr;
        } else if ((1U & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_0)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_1))))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__delay 
                = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__delay) 
                           - (IData)(1U)));
        }
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__lfsr 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__lfsr) 
                        << 1U)) | (1U & VL_REDXOR_4(
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__lfsr)))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__delay 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__lfsr;
        } else if ((1U & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN))))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__delay 
                = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__delay) 
                           - (IData)(1U)));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__in_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__n_state)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__n_state)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__in_ready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__out_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__n_state) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__n_state) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__out_valid))));
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key;
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_10)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arvalid)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_arvalid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_wvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_10)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wvalid)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_wvalid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_awvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_10)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awvalid)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_awvalid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__in_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__n_state)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__n_state)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__in_ready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__out_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__n_state) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__n_state) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__out_valid))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__in_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_7))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__in_ready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_0) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_3))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__out_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__n_state) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__n_state) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__out_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wlast 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) 
              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2)) 
                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7)) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__in_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__n_state)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__n_state)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__in_ready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__out_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_6))) 
              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__n_state)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__out_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_bready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_10)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_bready)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_bready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_rready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_10)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_rready)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_rready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_0)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_1)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_3)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__arvalid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__rready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_0))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_2) 
                 | ((~ (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state)))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__rready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_12) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_arready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__wvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_5)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_7)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__wvalid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_5)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_7)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awvalid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__rready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_8)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_6)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__isL)
                  : ((~ (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__n_state)))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__rready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__bready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_8)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_6)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__isS)
                  : ((~ (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__n_state)))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__bready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4)
                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__isL))
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_7)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__arvalid)))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT____Vcellinp__mem_ext__W0_en) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb))) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v0 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data);
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v0 = 0U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v0 
            = (0xfffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                     >> 6U)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb) 
            >> 1U))) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v1 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data 
                        >> 8U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v1 = 8U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v1 
            = (0xfffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                     >> 6U)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb) 
            >> 2U))) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v2 
            = (0xffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data 
                        >> 0x10U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v2 = 1U;
        vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v2 = 0x10U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v2 
            = (0xfffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                     >> 6U)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT____Vcellinp__mem_ext__W0_en) 
         & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb) 
            >> 3U))) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data 
               >> 0x18U);
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v3 = 0x18U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__Memory__v3 
            = (0xfffffffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                     >> 6U)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_wready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_9) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wready)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_wready)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_wready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid)
                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_12)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_rvalid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_9) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_arready)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_arready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_awready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_9) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_awready)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_awready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_bvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_9)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_bvalid)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_bvalid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_9)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7)
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rvalid)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_rvalid)))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT____Vlvbound_hdaea10f3__0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT____Vlvbound_hdaea10f3__0;
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__Memory__v0 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT____Vlvbound_hdaea10f3__0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT____Vlvbound_hdaea10f3__0;
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__Memory__v0 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__enq_ptr_value;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT____Vlvbound_hdaea10f3__0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
        if ((0x10U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT____Vlvbound_hdaea10f3__0;
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__Memory__v0 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__enq_ptr_value;
        }
    }
}
