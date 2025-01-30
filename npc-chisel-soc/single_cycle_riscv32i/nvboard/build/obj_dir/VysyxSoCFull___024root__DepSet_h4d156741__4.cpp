// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_h90790ec9__0;
    VlWide<16>/*511:0*/ __Vtemp_h2b846762__0;
    VlWide<4>/*127:0*/ __Vtemp_h50f5b233__0;
    VlWide<4>/*127:0*/ __Vtemp_h24c07d71__0;
    VlWide<16>/*511:0*/ __Vtemp_hb7becdfb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_h8eedd903__0;
    VlWide<4>/*127:0*/ __Vtemp_hb75f912d__0;
    VlWide<16>/*511:0*/ __Vtemp_hec3d1678__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__2;
    VlWide<4>/*127:0*/ __Vtemp_h7e579d23__0;
    VlWide<16>/*511:0*/ __Vtemp_h731dd48c__0;
    VlWide<16>/*511:0*/ __Vtemp_hf368b575__0;
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5801: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5801, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5803: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5803, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5807: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5807, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5809: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5809, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5813: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5813, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5815: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5815, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5819: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5819, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5821: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5821, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_1) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5826: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5826, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5828: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5828, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5833: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5833, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5835: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5835, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5841: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5841, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5843: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5843, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5847: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5847, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5849: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5849, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5855: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5855, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5857: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5857, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5862: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5862, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5864: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5864, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5869: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5869, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5871: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5871, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready) 
                                  != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30)
                                       ? ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_2))
                                           ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_2)))
                                           : 0U) : 0U)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5877: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5877, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5879: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5879, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5885: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5885, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5887: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5887, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5892: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5892, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5894: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5894, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5899: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5899, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5901: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5901, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5907: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:42:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5907, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5909: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5909, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0xbU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (3U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = (0U == ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                               >> 0xcU)) | (1U & (~ 
                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                                   >> 0xcU)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
            & (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                      >> 0x1eU))) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
              | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                 >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((3U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
               >> 0x1eU)) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (0x20U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source)) 
           << 2U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_2)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_release_ack)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__inflight_opcodes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4527: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4527, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4529: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4529, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4533: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4533, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4535: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4535, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4539: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4539, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4541: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4541, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4545: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4545, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4547: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4547, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4551: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4551, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4553: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4553, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4557: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4557, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4559: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4559, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4563: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4563, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4565: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4565, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4569: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4569, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4571: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4571, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4575: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4575, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4577: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4577, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4581: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4581, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4583: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4583, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4587: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4587, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4589: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4589, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4593: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4593, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4595: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4595, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4599: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4599, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4601: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4601, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4605: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4605, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4607: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4607, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4611: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4611, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4613: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4613, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4617: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4617, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4619: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4619, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4623: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4623, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4625: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4625, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4629: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4629, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4631: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4631, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4635: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4635, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4637: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4637, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4641: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4641, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4643: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4643, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4647: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4647, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4649: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4649, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4653: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4653, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4655: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4655, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4659: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4659, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4661: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4661, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4665: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4665, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4667: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4667, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4671: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4671, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4673: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4673, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4677: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4677, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4679: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4679, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4683: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4683, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4685: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4685, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4689: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4689, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4691: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4691, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4695: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4695, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4697: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4697, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4701: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4701, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4703: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4703, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4707: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4707, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4709: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4709, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4713: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4713, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4715: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4715, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4719: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4719, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4721: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4721, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4725: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4725, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4727: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4727, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4731: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4731, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4733: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4733, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4737: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4737, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4739: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4739, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4743: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4743, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4745: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4745, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4749: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4749, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4751: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4751, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4755: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4755, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4757: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4757, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4761: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4761, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4763: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4763, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4767: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4767, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4769: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4769, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4773: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4773, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4775: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4775, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4779: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4779, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4781: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4781, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4785: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4785, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4787: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4787, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4791: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4791, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4793: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4793, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4797: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4797, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4799: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4799, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4803: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4803, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4805: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4805, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4809: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4809, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4811: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4811, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4815: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4815, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4817: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4817, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4821: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4821, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4823: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4823, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4827: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4827, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4829: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4829, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4833: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4833, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4835: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4835, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4839: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4839, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4841: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4841, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4845: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4845, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4847: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4847, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4851: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4851, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4853: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4853, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4857: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4857, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4859: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4859, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4863: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4863, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4865: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4865, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4869: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4869, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4871: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4871, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4875: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4875, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4877: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4877, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4881: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4881, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4883: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4883, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4888: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4888, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4890: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4890, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_41) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4895: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4895, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4897: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4897, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4903: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4903, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4905: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4905, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4909: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4909, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4911: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4911, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4917: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4917, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4919: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4919, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4924: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4924, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4926: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4926, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4931: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4931, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4933: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4933, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4939: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4939, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4941: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4941, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4946: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4946, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4948: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4948, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4953: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4953, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4955: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4955, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4961: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:103:11)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4961, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4963: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4963, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0xbU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (3U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = (0U == ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                               >> 0xcU)) | (1U & (~ 
                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                                   >> 0xcU)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
            & (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                      >> 0x1eU))) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
              | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                 >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((3U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
               >> 0x1eU)) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (0x20U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source)) 
           << 2U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_2)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_release_ack)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15763: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15763, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15765: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15765, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15769: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15769, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15771: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15771, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15775: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15775, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15777: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15777, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15781: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15781, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15783: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15783, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15787: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15787, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15789: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15789, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15793: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15793, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15795: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15795, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15799: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15799, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15801: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15801, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15805: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15805, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15807: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15807, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15811: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15811, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15813: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15813, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15817: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15817, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15819: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15819, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15823: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15823, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15825: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15825, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15829: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15829, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15831: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15831, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15835: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15837: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15837, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15841: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15841, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15843: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15843, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15847: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15847, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15849: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15849, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15853: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15853, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15855: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15855, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15859: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15859, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15861: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15861, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15865: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15865, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15867: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15867, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15871: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15871, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15873: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15873, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15877: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15877, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15879: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15879, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15883: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15883, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15885: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15885, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15889: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15889, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15891: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15891, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15895: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15895, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15897: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15897, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15901: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15901, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15903: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15903, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15907: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15907, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15909: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15909, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15913: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15913, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15915: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15915, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15919: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15919, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15921: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15921, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15925: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15925, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15927: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15927, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15931: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15931, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15933: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15933, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15937: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15937, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15939: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15939, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15943: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15943, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15945: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15945, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15949: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15949, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15951: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15951, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15955: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15955, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15957: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15957, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15961: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15961, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15963: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15963, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15967: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15967, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15969: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15969, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15973: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15973, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15975: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15975, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15979: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15979, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15981: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15981, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15985: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15985, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15987: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15987, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15991: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15991, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15993: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15993, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15997: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15997, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15999: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15999, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16003: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16003, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16005: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16005, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16009: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16009, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16011: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16011, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16015: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16015, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16017: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16017, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16021: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16021, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16023: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16023, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16027: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16027, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16029: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16029, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16033: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16033, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16035: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16035, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16039: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16039, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16041: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16041, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16045: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16045, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16047: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16047, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16051: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16051, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16053: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16053, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16057: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16057, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16059: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16059, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16063: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16063, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16065: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16065, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16069: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16069, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16071: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16071, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16075: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16075, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16077: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16077, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16081: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16081, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16083: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16083, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16087: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16087, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16089: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16089, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16093: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16093, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16095: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16095, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16099: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16099, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16101: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16101, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16105: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16105, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16107: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16107, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16111: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16111, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16113: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16113, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16117: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16117, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16119: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16119, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16124: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16124, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16126: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16126, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_41) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16131: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16131, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16133: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16133, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16139: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16139, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16141: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16141, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16145: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16145, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16147: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16147, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16153: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16153, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16155: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16155, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16160: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16160, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16162: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16162, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16167: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16167, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16169: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16169, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16175: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16175, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16177: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16177, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_42))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16182: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16182, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16184: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16184, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16189: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16189, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16191: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16191, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16197: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:103:43)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16197, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:16199: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 16199, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok 
        = (1U & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                >> 4U))))) 
                       | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                       >> 4U)))) | 
                      (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                    >> 4U)))) | (3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                     >> 4U)))) 
                    | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                    >> 4U)))) | (5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                     >> 4U)))) 
                  | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                  >> 4U)))) | (7U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                   >> 4U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0xbU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = (3U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                     >> 4U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)) 
           & (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                     >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (2U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (1U & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                >> 4U))))) 
                       | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                       >> 4U)))) | 
                      (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                    >> 4U)))) | (3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                     >> 4U)))) 
                    | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                    >> 4U)))) | (5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                     >> 4U)))) 
                  | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                  >> 4U)))) | (7U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                   >> 4U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                     >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1 
        = ((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                               >> 4U))) | (1U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                                                     >> 4U)))) 
                | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                                >> 4U)))) | (3U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                                               >> 4U)))) 
              | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                              >> 4U)))) | (5U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                                                     >> 4U)))) 
            | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                            >> 4U)))) | (7U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                                                   >> 4U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
           << 2U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
           >> 0x1eU);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[4U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[5U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[6U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[7U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[8U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[9U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xaU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xbU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xcU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xdU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xeU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xfU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_1));
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    VL_SHIFTL_WWW(128,128,128, __Vtemp_h90790ec9__0, __Vtemp_hd2b6c582__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0);
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[0U] 
            = __Vtemp_h90790ec9__0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[1U] 
            = __Vtemp_h90790ec9__0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[2U] 
            = __Vtemp_h90790ec9__0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[3U] 
            = __Vtemp_h90790ec9__0[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_2)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_release_ack)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    VL_SHIFTR_WWW(512,512,512, __Vtemp_h2b846762__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h2b846762__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h2b846762__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h2b846762__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h2b846762__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h2b846762__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h2b846762__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h2b846762__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h2b846762__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_h2b846762__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_h2b846762__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_h2b846762__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_h2b846762__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_h2b846762__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_h2b846762__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_h2b846762__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_h2b846762__0[0xfU];
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19359: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19359, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19361: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19361, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19365: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19365, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19367: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19367, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19371: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19371, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19373: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19373, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19377: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19377, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19379: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19379, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19383: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19383, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19385: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19385, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19389: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19389, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19391: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19391, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19395: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19395, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19397: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19397, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19401: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19401, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19403: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19403, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19407: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19407, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19409: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19409, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19413: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19413, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19415: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19415, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19419: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19419, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19421: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19421, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19425: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19425, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19427: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19427, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19431: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19431, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19433: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19433, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19437: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19437, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19439: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19439, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19443: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19443, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19445: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19445, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19449: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19449, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19451: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19451, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19455: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19455, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19457: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19457, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19461: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19461, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19463: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19463, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19467: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19467, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19469: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19469, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19473: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Get carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19473, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19475: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19475, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19479: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19479, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19481: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19481, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19485: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Get carries invalid param (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19485, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19487: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19487, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19491: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19491, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19493: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19493, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19497: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Get is corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19497, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19499: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19499, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19503: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19503, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19505: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19505, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19509: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19509, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19511: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19511, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19515: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19515, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19517: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19517, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19521: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull carries invalid param (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19521, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19523: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19523, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19527: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19527, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19529: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19529, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19533: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19533, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19535: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19535, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19539: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19539, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19541: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19541, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19545: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19545, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19547: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19547, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19551: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial carries invalid param (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19551, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19553: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19553, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19557: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19557, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19559: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19559, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19563: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19563, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19565: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19565, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19569: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19569, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19571: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19571, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19575: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19575, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19577: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19577, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (4U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19581: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19581, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19583: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19583, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19587: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19587, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19589: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19589, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19593: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19593, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19595: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19595, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19599: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Logical carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19599, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19601: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19601, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19605: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19605, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19607: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19607, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19611: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19611, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19613: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19613, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19617: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19617, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19619: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19619, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19623: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19623, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19625: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19625, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19629: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Hint carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19629, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19631: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19631, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19635: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19635, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19637: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19637, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19641: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19641, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19643: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19643, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19647: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19647, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19649: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19649, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19653: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel Hint is corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19653, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19655: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19655, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19659: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19659, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19661: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19661, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19665: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19665, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19667: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19667, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19671: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19671, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19673: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19673, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19677: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19677, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19679: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19679, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19683: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19683, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19685: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19685, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19689: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19689, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19691: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19691, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19695: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19695, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19697: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19697, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19701: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19701, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19703: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19703, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19707: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19707, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19709: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19709, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19713: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19713, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19715: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19715, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19719: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19719, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19721: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19721, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19725: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19725, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19727: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19727, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19731: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19731, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19733: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19733, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19737: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19737, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19739: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19739, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19743: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19743, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19745: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19745, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19749: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19749, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19751: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19751, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19755: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19755, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19757: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19757, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19761: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19761, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19763: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19763, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19767: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19767, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19769: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19769, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19773: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19773, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19775: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19775, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19779: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel param changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19779, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19781: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19781, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19785: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19785, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19787: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19787, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19791: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19791, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19793: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19793, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19797: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19797, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19799: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19799, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19803: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19803, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19805: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19805, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19809: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19809, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19811: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19811, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19815: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19815, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19817: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19817, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19821: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19821, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19823: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19823, "");
    }
    VL_SHIFTR_WWW(128,128,128, __Vtemp_h50f5b233__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38[0U] 
        = __Vtemp_h50f5b233__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38[1U] 
        = __Vtemp_h50f5b233__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38[2U] 
        = __Vtemp_h50f5b233__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38[3U] 
        = __Vtemp_h50f5b233__0[3U];
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_1) 
                      & (~ (IData)(vlSelf->reset))) 
                     & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38[0U]))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19828: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19828, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19830: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19830, "");
    }
    VL_SHIFTR_WWW(128,128,128, __Vtemp_h24c07d71__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_2);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39[0U] 
        = __Vtemp_h24c07d71__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39[1U] 
        = __Vtemp_h24c07d71__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39[2U] 
        = __Vtemp_h24c07d71__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39[3U] 
        = __Vtemp_h24c07d71__0[3U];
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39[0U] 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19835: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19837: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19837, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19843: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19843, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19845: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19845, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19849: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19849, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19851: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19851, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                >> 1U)))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19857: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19857, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19859: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19859, "");
    }
    VL_SHIFTR_WWW(512,512,512, __Vtemp_hb7becdfb__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
        = __Vtemp_hb7becdfb__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[1U] 
        = __Vtemp_hb7becdfb__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[2U] 
        = __Vtemp_hb7becdfb__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[3U] 
        = __Vtemp_hb7becdfb__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[4U] 
        = __Vtemp_hb7becdfb__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[5U] 
        = __Vtemp_hb7becdfb__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[6U] 
        = __Vtemp_hb7becdfb__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[7U] 
        = __Vtemp_hb7becdfb__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[8U] 
        = __Vtemp_hb7becdfb__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[9U] 
        = __Vtemp_hb7becdfb__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xaU] 
        = __Vtemp_hb7becdfb__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xbU] 
        = __Vtemp_hb7becdfb__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xcU] 
        = __Vtemp_hb7becdfb__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xdU] 
        = __Vtemp_hb7becdfb__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xeU] 
        = __Vtemp_hb7becdfb__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0xfU] 
        = __Vtemp_hb7becdfb__0[0xfU];
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_size) 
                        != (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19864: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19864, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19866: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19866, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19871: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19871, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19873: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19873, "");
    }
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    VL_SHIFTL_WWW(128,128,128, __Vtemp_h8eedd903__0, __Vtemp_hd2b6c582__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_2);
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((0U != ((((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[0U] 
                                            ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34)
                                                ? __Vtemp_h8eedd903__0[0U]
                                                : 0U)) 
                                           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[1U] 
                                              ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34)
                                                  ? 
                                                 __Vtemp_h8eedd903__0[1U]
                                                  : 0U))) 
                                          | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[2U] 
                                             ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34)
                                                 ? 
                                                __Vtemp_h8eedd903__0[2U]
                                                 : 0U))) 
                                         | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[3U] 
                                            ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34)
                                                ? __Vtemp_h8eedd903__0[3U]
                                                : 0U)))) 
                                 | (0U == (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[0U] 
                                             | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[1U]) 
                                            | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[2U]) 
                                           | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[3U])))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19879: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19879, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19881: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19881, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U] 
                                            | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U]) 
                                           | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U]) 
                                          | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U])) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19887: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19887, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19889: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19889, "");
    }
    VL_SHIFTR_WWW(128,128,128, __Vtemp_hb75f912d__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_2);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40[0U] 
        = __Vtemp_hb75f912d__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40[1U] 
        = __Vtemp_hb75f912d__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40[2U] 
        = __Vtemp_hb75f912d__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40[3U] 
        = __Vtemp_hb75f912d__0[3U];
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_40[0U])))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19894: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19894, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19896: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19896, "");
    }
    VL_SHIFTR_WWW(512,512,512, __Vtemp_hec3d1678__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
        = __Vtemp_hec3d1678__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[1U] 
        = __Vtemp_hec3d1678__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[2U] 
        = __Vtemp_hec3d1678__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[3U] 
        = __Vtemp_hec3d1678__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[4U] 
        = __Vtemp_hec3d1678__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[5U] 
        = __Vtemp_hec3d1678__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[6U] 
        = __Vtemp_hec3d1678__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[7U] 
        = __Vtemp_hec3d1678__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[8U] 
        = __Vtemp_hec3d1678__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[9U] 
        = __Vtemp_hec3d1678__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xaU] 
        = __Vtemp_hec3d1678__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xbU] 
        = __Vtemp_hec3d1678__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xcU] 
        = __Vtemp_hec3d1678__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xdU] 
        = __Vtemp_hec3d1678__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xeU] 
        = __Vtemp_hec3d1678__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0xfU] 
        = __Vtemp_hec3d1678__0[0xfU];
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_size) 
                        != (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19901: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19901, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19903: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19903, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U] 
                                            | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U]) 
                                           | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U]) 
                                          | vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U])) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19909: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/device/ChipLinkBridge.scala:80:80)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19909, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19911: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 19911, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0xbU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
           & (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                     >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = ((3U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                         >> 1U))) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                     >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = ((3U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
              >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source)) 
           << 2U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_2)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_release_ack)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6447: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6447, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6449: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6449, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6453: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6453, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6455: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6455, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6459: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6459, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6461: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6461, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6465: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6465, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6467: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6467, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6471: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6471, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6473: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6473, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6477: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6477, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6479: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6479, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6483: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6483, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6485: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6485, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6489: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6489, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6491: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6491, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6495: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6495, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6497: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6497, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6501: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6501, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6503: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6503, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6507: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6509: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6509, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6513: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6513, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6515: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6515, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6519: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6519, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6521: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6521, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6525: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6525, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6527: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6527, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6531: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6531, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6533: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6533, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6537: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6537, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6539: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6539, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6543: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6543, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6545: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6545, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6549: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6549, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6551: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6551, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6555: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6555, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6557: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6557, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6561: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6561, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6563: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6563, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6567: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6567, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6569: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6569, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6573: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6573, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6575: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6575, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6579: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6579, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6581: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6581, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6585: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6585, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6587: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6587, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6591: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6591, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6593: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6593, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6597: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6597, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6599: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6599, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6603: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6603, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6605: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6605, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6609: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6609, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6611: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6611, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6615: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6615, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6617: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6617, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6621: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6621, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6623: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6623, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6627: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6627, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6629: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6629, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6633: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6633, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6635: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6635, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6639: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6639, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6641: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6641, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6645: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6645, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6647: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6647, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6651: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6651, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6653: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6653, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6657: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6657, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6659: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6659, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6663: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6663, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6665: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6665, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6669: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6669, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6671: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6671, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6675: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6675, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6677: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6677, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6681: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6681, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6683: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6683, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6687: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6687, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6689: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6689, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6693: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6693, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6695: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6695, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6699: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6699, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6701: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6701, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6705: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6705, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6707: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6707, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6711: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6711, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6713: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6713, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6717: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6717, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6719: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6719, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6723: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6723, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6725: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6725, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6729: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6729, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6731: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6731, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6735: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6735, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6737: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6737, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6741: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6741, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6743: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6743, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6747: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6747, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6749: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6749, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6753: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6753, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6755: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6755, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6759: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6759, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6761: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6761, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6765: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6765, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6767: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6767, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6771: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6771, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6773: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6773, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6777: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6779: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6779, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6783: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6783, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6785: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6785, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6789: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6789, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6791: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6791, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6796: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6796, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6798: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6798, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6803: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6803, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6805: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6805, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6811: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6811, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6813: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6813, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6817: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6817, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6819: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6819, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6825: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6825, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6827: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6827, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6832: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6832, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6834: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6834, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6839: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6839, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6841: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6841, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6847: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6847, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6849: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6849, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6854: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6854, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6856: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6856, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6861: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6861, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6863: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6863, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6869: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6869, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6871: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6871, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0xbU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
           & (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                     >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = ((3U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                         >> 1U))) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                     >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = ((3U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
              >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source)) 
           << 2U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
                ? (0xffffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
                : 0U) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_2)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_release_ack)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10362: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10362, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10364: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10364, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10368: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10368, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10370: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10370, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10374: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10374, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10376: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10376, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10380: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10380, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10382: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10382, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10386: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10386, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10388: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10388, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10392: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10392, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10394: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10394, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10398: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10398, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10400: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10400, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10404: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10404, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10406: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10406, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10410: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10410, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10412: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10412, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10416: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10416, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10418: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10418, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10422: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10422, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10424: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10424, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10428: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10428, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10430: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10430, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10434: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10434, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10436: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10436, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10440: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10440, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10442: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10442, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10446: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10446, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10448: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10448, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10452: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10452, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10454: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10454, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10458: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10458, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10460: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10460, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10464: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10464, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10466: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10466, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10470: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10470, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10472: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10472, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10476: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10476, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10478: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10478, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10482: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10482, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10484: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10484, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10488: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10488, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10490: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10490, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10494: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10494, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10496: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10496, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10500: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10500, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10502: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10502, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10506: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10506, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10508: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10508, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10512: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10512, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10514: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10514, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10518: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10518, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10520: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10520, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10524: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10524, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10526: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10526, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10530: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10530, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10532: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10532, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10536: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10536, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10538: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10538, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10542: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10542, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10544: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10544, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10548: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10548, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10550: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10550, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10554: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10554, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10556: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10556, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10560: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10560, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10562: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10562, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10566: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10566, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10568: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10568, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10572: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10572, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10574: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10574, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10578: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10578, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10580: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10580, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10584: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10584, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10586: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10586, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10590: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10590, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10592: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10592, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10596: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10596, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10598: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10598, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10602: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10602, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10604: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10604, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10608: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10608, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10610: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10610, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10614: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10614, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10616: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10616, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10620: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10620, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10622: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10622, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10626: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10626, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10628: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10628, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10632: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10632, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10634: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10634, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10638: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10638, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10640: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10640, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10644: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10644, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10646: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10646, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10650: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10650, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10652: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10652, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10656: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10656, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10658: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10658, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10662: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10662, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10664: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10664, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                        != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10668: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10668, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10670: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10670, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10674: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10674, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10676: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10676, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10680: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10680, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10682: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10682, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10686: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10686, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10688: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10688, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10692: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10692, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10694: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10694, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10698: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10698, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10700: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10700, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_denied) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10704: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10704, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10706: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10706, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_1) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10711: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10711, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10713: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10713, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10718: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10718, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10720: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10720, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10726: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10726, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10728: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10728, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10732: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10732, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10734: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10734, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10740: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10740, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10742: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10742, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight_sizes, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10747: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10747, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10749: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10749, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_1)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source))) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_release_ack))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10754: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: ready check\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10754, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10756: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10756, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready) 
                                  != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32)
                                       ? ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_2))
                                           ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_2)))
                                           : 0U) : 0U)) 
                                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10762: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10762, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10764: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10764, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___plusarg_reader_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__watchdog 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___plusarg_reader_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10770: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10770, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10772: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10772, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_2))
            ? (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_2)))
            : 0U);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10777: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10779: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10779, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight_sizes_1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30);
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size) 
                        != (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10784: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:52 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10784, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10786: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10786, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___plusarg_reader_1_out)) 
                                 | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___plusarg_reader_1_out))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10792: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at src/chiplink/ChipLink.scala:65:13)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10792, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10794: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10794, "");
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_3 = 0x951240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_4 = 0x911240U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok 
        = (1U & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                >> 4U))))) 
                       | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                       >> 4U)))) | 
                      (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                    >> 4U)))) | (3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                     >> 4U)))) 
                    | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                    >> 4U)))) | (5U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                     >> 4U)))) 
                  | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                  >> 4U)))) | (7U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                   >> 4U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1 
        = ((0x16U >= vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN)
            ? (0x7fffffU & ((IData)(0xffU) << vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5 
        = (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
                    & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size) 
                    & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
                          >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size) 
                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0xdU > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (6U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = ((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                      >> 4U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
              >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (2U < (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6) 
           & ((((((((~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                             >> 4U))))) 
                    | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                    >> 4U)))) | (2U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                     >> 4U)))) 
                  | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                  >> 4U)))) | (4U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                                   >> 4U)))) 
                | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                >> 4U)))) | (6U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                                               >> 4U)))) 
              | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
                              >> 4U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask) 
           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
            & (9U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size))) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
              >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok_1 
        = ((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                               >> 4U))) | (1U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                                                     >> 4U)))) 
                | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                                >> 4U)))) | (3U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                                               >> 4U)))) 
              | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                              >> 4U)))) | (5U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                                                     >> 4U)))) 
            | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                            >> 4U)))) | (7U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                                                   >> 4U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_size) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_denied)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
           << 3U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
           >> 0x1dU);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[4U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[5U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[6U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[7U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[8U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[9U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xaU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xbU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xcU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xdU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xeU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0xfU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x10U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x11U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x12U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x13U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x14U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x15U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x16U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x17U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x18U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x19U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x1aU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x1bU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x1cU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x1dU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x1eU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32[0x1fU] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_1));
    __Vtemp_hd2b6c582__2[0U] = 1U;
    __Vtemp_hd2b6c582__2[1U] = 0U;
    __Vtemp_hd2b6c582__2[2U] = 0U;
    __Vtemp_hd2b6c582__2[3U] = 0U;
    VL_SHIFTL_WWW(128,128,128, __Vtemp_h7e579d23__0, __Vtemp_hd2b6c582__2, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0);
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[0U] 
            = __Vtemp_h7e579d23__0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[1U] 
            = __Vtemp_h7e579d23__0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[2U] 
            = __Vtemp_h7e579d23__0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[3U] 
            = __Vtemp_h7e579d23__0[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_2)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_release_ack)) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSelf->reset)));
    __Vtemp_h731dd48c__0[0U] = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                                << 2U);
    __Vtemp_h731dd48c__0[1U] = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source) 
                                >> 0x1eU);
    __Vtemp_h731dd48c__0[2U] = 0U;
    __Vtemp_h731dd48c__0[3U] = 0U;
    __Vtemp_h731dd48c__0[4U] = 0U;
    __Vtemp_h731dd48c__0[5U] = 0U;
    __Vtemp_h731dd48c__0[6U] = 0U;
    __Vtemp_h731dd48c__0[7U] = 0U;
    __Vtemp_h731dd48c__0[8U] = 0U;
    __Vtemp_h731dd48c__0[9U] = 0U;
    __Vtemp_h731dd48c__0[0xaU] = 0U;
    __Vtemp_h731dd48c__0[0xbU] = 0U;
    __Vtemp_h731dd48c__0[0xcU] = 0U;
    __Vtemp_h731dd48c__0[0xdU] = 0U;
    __Vtemp_h731dd48c__0[0xeU] = 0U;
    __Vtemp_h731dd48c__0[0xfU] = 0U;
    VL_SHIFTR_WWW(512,512,512, __Vtemp_hf368b575__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h731dd48c__0);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hf368b575__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hf368b575__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hf368b575__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hf368b575__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hf368b575__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hf368b575__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hf368b575__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hf368b575__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hf368b575__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hf368b575__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hf368b575__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hf368b575__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hf368b575__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hf368b575__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hf368b575__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hf368b575__0[0xfU];
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41849: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41849, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41851: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41851, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41855: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41855, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41857: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41857, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41861: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41861, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41863: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41863, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41867: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41867, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41869: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41869, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41873: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41873, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41875: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41875, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41879: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41879, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41881: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41881, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41885: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41885, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41887: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41887, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41891: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41891, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41893: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41893, "");
    }
    if (VL_UNLIKELY(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41897: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41897, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41899: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41899, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41903: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41903, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41905: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41905, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41909: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41909, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41911: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41911, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41915: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41915, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41917: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41917, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41921: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41921, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41923: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41923, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41927: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41927, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41929: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41929, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41933: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41933, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41935: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41935, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41939: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41939, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41941: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41941, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41945: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41945, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41947: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41947, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41951: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41951, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41953: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41953, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
                              >> 0x1eU)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41957: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41957, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41959: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41959, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41963: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get carries invalid source ID (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41963, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41965: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41965, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41969: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41969, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41971: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41971, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41975: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get carries invalid param (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41975, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41977: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41977, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41981: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41981, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41983: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41983, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41987: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get is corrupt (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41987, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41989: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41989, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41993: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41993, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41995: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41995, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:41999: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 41999, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42001: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42001, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_5))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42005: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42005, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42007: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42007, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42011: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull carries invalid param (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42011, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42013: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42013, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42017: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42017, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42019: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42019, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42023: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at src/device/ChipLinkBridge.scala:139:22)\n    at Monitor.scala:45 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42023, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42025: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 42025, "");
    }
}
