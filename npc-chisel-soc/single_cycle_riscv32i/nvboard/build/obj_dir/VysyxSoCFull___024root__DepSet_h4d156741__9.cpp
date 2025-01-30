// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__13\n"); );
    // Init
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__state;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__counter = 0;
    IData/*23:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->ysyxSoCFull__DOT__flash__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__counter = vlSelf->ysyxSoCFull__DOT__flash__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__state = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__data = vlSelf->ysyxSoCFull__DOT__flash__DOT__data;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0U;
        __Vdly__ysyxSoCFull__DOT__flash__DOT__counter = 0U;
    } else {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
                = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd) 
                             << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi));
            __Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
                = (0xffU & ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                             : 0U));
        } else {
            __Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
                = (0xffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))
                             ? ((0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                                 ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                                 : 0U) : ((IData)(1U) 
                                          + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))));
        }
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
            __Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)))) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",
                   8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
        VL_WRITEF("[%0t] %%Error: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "");
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0U;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__data 
            = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                 ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                 : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
               << 1U);
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = __Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = __Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = __Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = __Vdly__ysyxSoCFull__DOT__flash__DOT__state;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__14\n"); );
    // Init
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__cw_state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__cr_state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nr_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nr_state))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rresp = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
            = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr) 
                        << 1U)) | (1U & VL_REDXOR_4(
                                                    (0xcU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr)))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nr_state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nr_state) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit) 
                               - (IData)(1U)));
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit))) {
                    if ((0x2000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_araddr)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata 
                            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime);
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rresp = 0U;
                    } else if ((0x2000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_araddr)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata 
                            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
                                       >> 0x20U));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rresp = 0U;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rresp = 1U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rresp = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rresp = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bresp = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
                = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit) 
                           - (IData)(1U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bresp = 0U;
            if (VL_UNLIKELY((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit)))) {
                VL_WRITEF("[%0t] %%Error: Clint.sv:255: Assertion failed in %NysyxSoCFull.asic.cpu.cpu.clint: Ilegal write in CLINT\n\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/vsrc/Clint.sv", 255, "");
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid = 1U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid = 0U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bresp = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bresp = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc = 0x30000000U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_out_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__pc_next;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_csr_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_csr_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_reg_pc;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__19(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__19\n"); );
    // Init
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e = 0;
    IData/*19:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13320: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13320, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13322: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13322, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13326: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13326, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13328: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13328, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13332: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13332, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13334: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13334, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13338: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13338, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13340: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13340, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13344: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13344, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13346: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13346, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13320: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13320, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13322: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13322, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13326: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13326, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13328: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13328, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13332: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13332, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13334: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13334, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13338: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13338, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13340: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13340, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13344: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx: Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13344, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13346: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 13346, "");
    }
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq) {
        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ren;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q) {
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a = 0x20U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b = 0x20U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d = 0x20U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c = 0x20U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e = 0x20U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_a_T 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_bT 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_d_T 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_c_T 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_e_T 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid));
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_a_T;
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_bT;
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_d_T;
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_c_T;
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_e_T;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_a_T)));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_1 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_bT)));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_1)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_1));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_3 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_d_T)));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_3)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_3));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_2 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_c_T)));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_2)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_2));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_4 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_e_T)));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_4)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_4));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) {
            if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first) {
                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_beats_T_1 
                    = (0xffU & ((IData)(1U) << (7U 
                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 9U))));
                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats 
                    = ((0x1eU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_beats_T_1) 
                                 >> 2U)) | (3U > (0xfU 
                                                  & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                     >> 9U))));
                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
                    = ((1U == (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                     >> 3U))) ? (((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                       >> 9U))) 
                                                  << 1U) 
                                                 | (6U 
                                                    > 
                                                    (0xfU 
                                                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                        >> 9U))))
                        : 0U);
                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5 
                    = (0x1fU & ((IData)(2U) + (((0x20U 
                                                 & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)) 
                                               + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))));
                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                    = (((QData)((IData)((0x3ffU & (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5) 
                                                    << 5U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5))))) 
                        << 0x1eU) | (QData)((IData)(
                                                    ((0xf8000U 
                                                      & ((((8U 
                                                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)
                                                            : 0U) 
                                                          + 
                                                          ((4U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                                >> 3U))) 
                                                           | (5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                                  >> 3U))))) 
                                                         << 0xfU)) 
                                                     | ((0x7c00U 
                                                         & (((IData)(2U) 
                                                             + 
                                                             ((8U 
                                                               & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)
                                                               : 0U)) 
                                                            << 0xaU)) 
                                                        | ((0x3e0U 
                                                            & (((IData)(2U) 
                                                                + 
                                                                (((0x20U 
                                                                   & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                                   ? 0U
                                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)) 
                                                                 + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))) 
                                                               << 5U)) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5)))))));
                __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count 
                    = ((0x27U >= (0x3fU & ((IData)(5U) 
                                           * (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data))))
                        ? (0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                                            >> (0x3fU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (7U 
                                                    & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data))))))
                        : 0U);
            } else {
                __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count) 
                                - (IData)(1U)));
            }
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_T_1 
                = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format));
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_T_1 = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_a_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                        >> 7U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_bT_3 
            = ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                        >> 0xcU)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_c_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                        >> 0x11U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_d_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                        >> 0x16U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_e_T_3 
            = ((IData)(1U) << (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                               >> 0x1bU));
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_T_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_a 
                = ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                      >> 7U))) ? 0xfffffU
                    : (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_a_T_3 
                                   >> 1U)));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_b 
                = ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                      >> 0xcU))) ? 0xfffffU
                    : (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_bT_3 
                                   >> 1U)));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_c 
                = ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                      >> 0x11U))) ? 0xfffffU
                    : (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_c_T_3 
                                   >> 1U)));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_d 
                = ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                      >> 0x16U))) ? 0xfffffU
                    : (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_d_T_3 
                                   >> 1U)));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_e 
                = ((0x14U < (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                             >> 0x1bU)) ? 0xfffffU : 
                   (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_e_T_3 
                                >> 1U)));
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_a = 0U;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_b = 0U;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_c = 0U;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_d = 0U;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_e = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready) {
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_a;
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_b;
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_c;
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_d;
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_e;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a 
                                + vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_a));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_1 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b 
                                + vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_b));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_2 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c 
                                + vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_c));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_3 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d 
                                + vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_d));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_4 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e 
                                + vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_e));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_1)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_1));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_2)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_2));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_3)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_3));
            __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_4)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_4));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a = 0x20U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b = 0x20U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d = 0x20U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c = 0x20U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e = 0x20U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_a_T 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_bT 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_d_T 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_c_T 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_e_T 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_a_T;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_bT;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_d_T;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_c_T;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_e_T;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_a_T)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_1 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_bT)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_1)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_1));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_3 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_d_T)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_3)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_3));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_2 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_c_T)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_2)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_2));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_4 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___rxInc_e_T)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_4)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk4__DOT__rx_z_4));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_beats_T_1 
                    = (0xffU & ((IData)(1U) << (7U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 9U))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats 
                    = ((0x1eU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_beats_T_1) 
                                 >> 2U)) | (3U > (0xfU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                     >> 9U))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
                    = ((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                     >> 3U))) ? (((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                       >> 9U))) 
                                                  << 1U) 
                                                 | (6U 
                                                    > 
                                                    (0xfU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                        >> 9U))))
                        : 0U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5 
                    = (0x1fU & ((IData)(2U) + (((0x20U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)) 
                                               + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                    = (((QData)((IData)((0x3ffU & (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5) 
                                                    << 5U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5))))) 
                        << 0x1eU) | (QData)((IData)(
                                                    ((0xf8000U 
                                                      & ((((8U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)
                                                            : 0U) 
                                                          + 
                                                          ((4U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                                >> 3U))) 
                                                           | (5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                                  >> 3U))))) 
                                                         << 0xfU)) 
                                                     | ((0x7c00U 
                                                         & (((IData)(2U) 
                                                             + 
                                                             ((8U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)
                                                               : 0U)) 
                                                            << 0xaU)) 
                                                        | ((0x3e0U 
                                                            & (((IData)(2U) 
                                                                + 
                                                                (((0x20U 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                                   ? 0U
                                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT__first_beats_beats)) 
                                                                 + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN))) 
                                                               << 5U)) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___first_beats_a_T_5)))))));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count 
                    = ((0x27U >= (0x3fU & ((IData)(5U) 
                                           * (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data))))
                        ? (0x1fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
                                            >> (0x3fU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (7U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data))))))
                        : 0U);
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count) 
                                - (IData)(1U)));
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_T_1 
                = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format));
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_T_1 = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_a_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                        >> 7U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_bT_3 
            = ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                        >> 0xcU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_c_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                        >> 0x11U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_d_T_3 
            = ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                        >> 0x16U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_e_T_3 
            = ((IData)(1U) << (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                               >> 0x1bU));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_T_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_a 
                = ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                      >> 7U))) ? 0xfffffU
                    : (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_a_T_3 
                                   >> 1U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_b 
                = ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                      >> 0xcU))) ? 0xfffffU
                    : (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_bT_3 
                                   >> 1U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_c 
                = ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                      >> 0x11U))) ? 0xfffffU
                    : (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_c_T_3 
                                   >> 1U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_d 
                = ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                      >> 0x16U))) ? 0xfffffU
                    : (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_d_T_3 
                                   >> 1U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_e 
                = ((0x14U < (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                             >> 0x1bU)) ? 0xfffffU : 
                   (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT___txInc_out_e_T_3 
                                >> 1U)));
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_a = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_b = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_c = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_d = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_e = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_a;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_b;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_c;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_d;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_e;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_a));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_1 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_b));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_2 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_c));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_3 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_d));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_4 
                = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e 
                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__txInc_e));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_1)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_1));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_2)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_2));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_3)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_3));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e 
                = ((0x100000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_4)
                    ? 0xfffffU : (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__unnamedblk1__DOT__unnamedblk3__DOT__tx_z_4));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                          >> 1U))));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) 
         & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk1__DOT__index)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___atLeastTwo_T 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_en_d0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                    << 0x28U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                  << 0x14U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                                   << 0x28U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                                 << 0x14U) 
                                                | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))) 
                                 >> 0x20U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
            << 0x10U) | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
                         >> 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[3U] 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
           >> 0x10U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                    << 0x28U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                  << 0x14U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_c)) 
                                   << 0x28U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_d)) 
                                                 << 0x14U) 
                                                | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_e)))) 
                                 >> 0x20U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
            << 0x10U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_b 
                         >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[3U] 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a 
           >> 0x10U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                    << 0x28U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                  << 0x14U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                                   << 0x28U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                                 << 0x14U) 
                                                | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))) 
                                 >> 0x20U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
            << 0x10U) | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
                         >> 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[3U] 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
           >> 0x10U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_bits_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                    << 0x28U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                  << 0x14U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_c)) 
                                   << 0x28U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_d)) 
                                                 << 0x14U) 
                                                | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_e)))) 
                                 >> 0x20U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
            << 0x10U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_b 
                         >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[3U] 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a 
           >> 0x10U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__formatValid) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format_r 
            = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data);
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data_REG;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send_REG));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_bits_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__formatValid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format_r 
            = (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data_REG;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send_REG));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_txc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_txc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_txc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_txc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_txc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_txc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_txc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_txc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_txc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_txc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_rxc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_rxc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_rxc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_rxc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_rxc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_rxc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_rxc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_rxc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_rxc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_rxc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqe_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqe_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqd_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqd_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqc_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqc_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqb_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqb_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqa_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqa_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqe_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqe_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqd_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqd_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqc_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqc_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqb_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqb_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqa_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqa_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bmem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bmem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bmem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bmem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bmem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bmem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bmem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bmem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bmem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bmem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bmem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bmem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bmem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bmem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bmem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bmem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_mem_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_mem_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_mem_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_mem_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_mem_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_mem_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_mem_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_mem_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bmem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bmem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bmem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bmem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bmem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bmem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bmem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bmem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bmem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bmem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bmem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bmem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bmem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bmem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bmem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bmem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_mem_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_mem_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_mem_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_mem_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_mem_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_mem_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_mem_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_mem_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_mem_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_e 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_e;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_c 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_c;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_mem_0_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_mem_0_a;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data_REG 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send_REG 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_send;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__formatValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__formatValid)
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data
                  : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data_REG 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send_REG 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_send;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__formatValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__formatValid)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format_r)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqe_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqd_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqc_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqb_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___hqa_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqe_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqd_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqc_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqb_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___hqa_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT___fq_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT___fq_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid;
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__26(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__26\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__2__data;
    __Vtask_flash_read__2__data = 0;
    // Body
    if (vlSelf->ysyxSoCFull__DOT__flash__DOT__ren) {
        if (VL_LIKELY((3U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd)))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(vlSelf->ysyxSoCFull__DOT__flash__DOT__raddr, __Vtask_flash_read__2__data);
            vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
                = __Vtask_flash_read__2__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",
                       8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "");
        }
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata = vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
                                                     >> 0x18U))));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__17(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_7) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n))
            ? 1U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en))
                     ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__c_state)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state = 
        (((9U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5)) 
          | ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5)) 
             | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))))
          ? ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en) 
             << 1U) : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                        ? (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                            == ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                                 ? 0x10U : 0x16U)) ? 8U
                            : 6U) : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                      ? (5U | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                                                == 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                                                  ? 0x16U
                                                  : 0x1cU)) 
                                               << 1U))
                                      : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                          ? (4U | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                                                   == 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                                                     ? 0xfU
                                                     : 0x15U)))
                                          : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                                                  == 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                                                    ? 8U
                                                    : 0xeU))
                                                  ? 
                                                 ((0xebU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                                                   ? 4U
                                                   : 
                                                  ((0x38U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                                                    ? 6U
                                                    : 9U))
                                                  : 3U)
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                                  ? 
                                                 (2U 
                                                  | (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                                   ? 
                                                  ((8U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_7)
                                                     ? 0U
                                                     : 3U)
                                                    : 1U)
                                                   : 
                                                  (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5)))))))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__ren 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_0 = 
        (1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN = (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psramChiselHelper__wen 
        = (1U & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                     ? ((8U < (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)) 
                        & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)))
                     : ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                        >> 4U))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)) 
           | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__wen 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psramChiselHelper__wen;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__rdata = 0U;
    if (((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_read_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, vlSelf->__Vtask_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_read__3__rdata);
        vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_read__3__rdata;
    } else if (VL_UNLIKELY(((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psramChiselHelper__wen)) 
                             & (0xebU != (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) 
                            & (0x38U != (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `EBh`, `38h`, `35h` commands\n",
                   8,vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:55794: Assertion failed in %NysyxSoCFull.psram.psramChiselHelper\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/ypc/Desktop/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 55794, "");
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__di_buf__DOT__out_en 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en;
    vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din 
        = ((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
               | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en)
                 ? 0xfU : 0U) & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en)
                                   ? (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata_save 
                                      >> 0x1cU) : 0U) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en)
                                     ? 0xfU : 0U))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en)
                  ? 0xfU : 0U)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___psramChiselHelper_rdata 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT___io_dio_wire = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_save 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__di_buf__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__io_dio = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__psram_dio 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__di_buf__DOT__dio 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__io_dio;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_dio 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__psram_dio;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_dio;
}
