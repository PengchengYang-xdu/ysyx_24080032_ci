// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VNPC__Syms.h"
#include "VNPC___024root.h"

extern "C" void npc_trap();

VL_INLINE_OPT void VNPC___024root____Vdpiimwrap_NPC__DOT__core__DOT__idu__DOT__ebreak__DOT__npc_trap_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root____Vdpiimwrap_NPC__DOT__core__DOT__idu__DOT__ebreak__DOT__npc_trap_TOP\n"); );
    // Body
    npc_trap();
}

extern "C" int paddr_read(int addr, int is_pc_read);

VL_INLINE_OPT void VNPC___024root____Vdpiimwrap_NPC__DOT__mem__DOT__paddr_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ is_pc_read, IData/*31:0*/ &paddr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root____Vdpiimwrap_NPC__DOT__mem__DOT__paddr_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int is_pc_read__Vcvt;
    for (size_t is_pc_read__Vidx = 0; is_pc_read__Vidx < 1; ++is_pc_read__Vidx) is_pc_read__Vcvt = is_pc_read;
    int paddr_read__Vfuncrtn__Vcvt;
    paddr_read__Vfuncrtn__Vcvt = paddr_read(addr__Vcvt, is_pc_read__Vcvt);
    paddr_read__Vfuncrtn = paddr_read__Vfuncrtn__Vcvt;
}

extern "C" void paddr_write(int addr, int data, char wmask);

VL_INLINE_OPT void VNPC___024root____Vdpiimwrap_NPC__DOT__mem__DOT__paddr_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root____Vdpiimwrap_NPC__DOT__mem__DOT__paddr_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    paddr_write(addr__Vcvt, data__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__ico(VNPC___024root* vlSelf);
#endif  // VL_DEBUG

void VNPC___024root___eval_triggers__ico(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNPC___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__act(VNPC___024root* vlSelf);
#endif  // VL_DEBUG

void VNPC___024root___eval_triggers__act(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNPC___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VNPC___024root___nba_sequent__TOP__0(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_NPC__DOT__mem__DOT__paddr_read__1__Vfuncout;
    __Vfunc_NPC__DOT__mem__DOT__paddr_read__1__Vfuncout = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__mem__DOT__lfsr;
    __Vdly__NPC__DOT__mem__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__mem__DOT__r_delay_unit;
    __Vdly__NPC__DOT__mem__DOT__r_delay_unit = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__mem__DOT__w_delay_unit;
    __Vdly__NPC__DOT__mem__DOT__w_delay_unit = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__uart__DOT__lfsr;
    __Vdly__NPC__DOT__uart__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__uart__DOT__r_delay_unit;
    __Vdly__NPC__DOT__uart__DOT__r_delay_unit = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__uart__DOT__w_delay_unit;
    __Vdly__NPC__DOT__uart__DOT__w_delay_unit = 0;
    QData/*63:0*/ __Vdly__NPC__DOT__clint__DOT__mtime;
    __Vdly__NPC__DOT__clint__DOT__mtime = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__clint__DOT__lfsr;
    __Vdly__NPC__DOT__clint__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__clint__DOT__r_delay_unit;
    __Vdly__NPC__DOT__clint__DOT__r_delay_unit = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__clint__DOT__w_delay_unit;
    __Vdly__NPC__DOT__clint__DOT__w_delay_unit = 0;
    // Body
    __Vdly__NPC__DOT__clint__DOT__mtime = vlSelf->NPC__DOT__clint__DOT__mtime;
    __Vdly__NPC__DOT__clint__DOT__lfsr = vlSelf->NPC__DOT__clint__DOT__lfsr;
    __Vdly__NPC__DOT__uart__DOT__lfsr = vlSelf->NPC__DOT__uart__DOT__lfsr;
    __Vdly__NPC__DOT__mem__DOT__lfsr = vlSelf->NPC__DOT__mem__DOT__lfsr;
    __Vdly__NPC__DOT__clint__DOT__r_delay_unit = vlSelf->NPC__DOT__clint__DOT__r_delay_unit;
    __Vdly__NPC__DOT__clint__DOT__w_delay_unit = vlSelf->NPC__DOT__clint__DOT__w_delay_unit;
    __Vdly__NPC__DOT__uart__DOT__r_delay_unit = vlSelf->NPC__DOT__uart__DOT__r_delay_unit;
    __Vdly__NPC__DOT__uart__DOT__w_delay_unit = vlSelf->NPC__DOT__uart__DOT__w_delay_unit;
    __Vdly__NPC__DOT__mem__DOT__r_delay_unit = vlSelf->NPC__DOT__mem__DOT__r_delay_unit;
    __Vdly__NPC__DOT__mem__DOT__w_delay_unit = vlSelf->NPC__DOT__mem__DOT__w_delay_unit;
    vlSelf->NPC__DOT__clint__DOT__cw_state = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->NPC__DOT__clint__DOT__nw_state));
    vlSelf->NPC__DOT__uart__DOT__cw_state = ((~ (IData)(vlSelf->reset)) 
                                             & (IData)(vlSelf->NPC__DOT__uart__DOT__nw_state));
    vlSelf->NPC__DOT__uart__DOT__cr_state = ((~ (IData)(vlSelf->reset)) 
                                             & (IData)(vlSelf->NPC__DOT__uart__DOT__nr_state));
    vlSelf->NPC__DOT__mem__DOT__cw_state = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->NPC__DOT__mem__DOT__nw_state));
    vlSelf->NPC__DOT__mem__DOT__cr_state = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->NPC__DOT__mem__DOT__nr_state));
    vlSelf->NPC__DOT__clint__DOT__cr_state = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->NPC__DOT__clint__DOT__nr_state));
    vlSelf->NPC__DOT__clint__DOT__arready = (1U & (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (~ (IData)(vlSelf->NPC__DOT__clint__DOT__nr_state))));
    if (vlSelf->reset) {
        __Vdly__NPC__DOT__clint__DOT__mtime = 0ULL;
        __Vdly__NPC__DOT__clint__DOT__lfsr = 0U;
        __Vdly__NPC__DOT__uart__DOT__lfsr = 0U;
        __Vdly__NPC__DOT__mem__DOT__lfsr = 0U;
        vlSelf->NPC__DOT__clint__DOT__rdata = 0U;
        vlSelf->NPC__DOT__clint__DOT__rresp = 0U;
        vlSelf->NPC__DOT__clint__DOT__rvalid = 0U;
        __Vdly__NPC__DOT__clint__DOT__r_delay_unit 
            = vlSelf->NPC__DOT__clint__DOT__lfsr;
    } else {
        __Vdly__NPC__DOT__clint__DOT__mtime = (1ULL 
                                               + vlSelf->NPC__DOT__clint__DOT__mtime);
        __Vdly__NPC__DOT__clint__DOT__lfsr = ((0xeU 
                                               & ((IData)(vlSelf->NPC__DOT__clint__DOT__lfsr) 
                                                  << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_4(
                                                               (0xcU 
                                                                & (IData)(vlSelf->NPC__DOT__clint__DOT__lfsr)))));
        __Vdly__NPC__DOT__uart__DOT__lfsr = ((0xeU 
                                              & ((IData)(vlSelf->NPC__DOT__uart__DOT__lfsr) 
                                                 << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_4(
                                                              (0xcU 
                                                               & (IData)(vlSelf->NPC__DOT__uart__DOT__lfsr)))));
        __Vdly__NPC__DOT__mem__DOT__lfsr = ((0xeU & 
                                             ((IData)(vlSelf->NPC__DOT__mem__DOT__lfsr) 
                                              << 1U)) 
                                            | (1U & 
                                               VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSelf->NPC__DOT__mem__DOT__lfsr)))));
        if (vlSelf->NPC__DOT__clint__DOT__nr_state) {
            if (vlSelf->NPC__DOT__clint__DOT__nr_state) {
                __Vdly__NPC__DOT__clint__DOT__r_delay_unit 
                    = (0xfU & ((IData)(vlSelf->NPC__DOT__clint__DOT__r_delay_unit) 
                               - (IData)(1U)));
                if ((0U == (IData)(vlSelf->NPC__DOT__clint__DOT__r_delay_unit))) {
                    if ((0xa0000048U == vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr)) {
                        vlSelf->NPC__DOT__clint__DOT__rdata 
                            = (IData)(vlSelf->NPC__DOT__clint__DOT__mtime);
                        vlSelf->NPC__DOT__clint__DOT__rvalid = 1U;
                        vlSelf->NPC__DOT__clint__DOT__rresp = 0U;
                    } else if ((0xa000004cU == vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr)) {
                        vlSelf->NPC__DOT__clint__DOT__rdata 
                            = (IData)((vlSelf->NPC__DOT__clint__DOT__mtime 
                                       >> 0x20U));
                        vlSelf->NPC__DOT__clint__DOT__rvalid = 1U;
                        vlSelf->NPC__DOT__clint__DOT__rresp = 0U;
                    } else {
                        vlSelf->NPC__DOT__clint__DOT__rdata = 0U;
                        vlSelf->NPC__DOT__clint__DOT__rvalid = 0U;
                        vlSelf->NPC__DOT__clint__DOT__rresp = 1U;
                    }
                } else {
                    vlSelf->NPC__DOT__clint__DOT__rdata = 0U;
                    vlSelf->NPC__DOT__clint__DOT__rvalid = 0U;
                }
            } else {
                vlSelf->NPC__DOT__clint__DOT__rdata = 0U;
                vlSelf->NPC__DOT__clint__DOT__rresp = 0U;
                vlSelf->NPC__DOT__clint__DOT__rvalid = 0U;
                __Vdly__NPC__DOT__clint__DOT__r_delay_unit 
                    = vlSelf->NPC__DOT__clint__DOT__lfsr;
            }
        } else {
            vlSelf->NPC__DOT__clint__DOT__rresp = 0U;
            vlSelf->NPC__DOT__clint__DOT__rvalid = 0U;
            __Vdly__NPC__DOT__clint__DOT__r_delay_unit 
                = vlSelf->NPC__DOT__clint__DOT__lfsr;
        }
    }
    if (vlSelf->reset) {
        vlSelf->NPC__DOT__clint__DOT__awready = 0U;
        vlSelf->NPC__DOT__clint__DOT__wready = 0U;
        vlSelf->NPC__DOT__clint__DOT__bresp = 0U;
        vlSelf->NPC__DOT__clint__DOT__bvalid = 0U;
        __Vdly__NPC__DOT__clint__DOT__w_delay_unit 
            = vlSelf->NPC__DOT__clint__DOT__lfsr;
    } else if (vlSelf->NPC__DOT__clint__DOT__nw_state) {
        if (vlSelf->NPC__DOT__clint__DOT__nw_state) {
            __Vdly__NPC__DOT__clint__DOT__w_delay_unit 
                = (0xfU & ((IData)(vlSelf->NPC__DOT__clint__DOT__w_delay_unit) 
                           - (IData)(1U)));
            vlSelf->NPC__DOT__clint__DOT__awready = 0U;
            vlSelf->NPC__DOT__clint__DOT__wready = 0U;
            vlSelf->NPC__DOT__clint__DOT__bresp = 0U;
            if (VL_UNLIKELY((0U == (IData)(vlSelf->NPC__DOT__clint__DOT__w_delay_unit)))) {
                VL_WRITEF("[%0t] %%Error: Clint.sv:237: Assertion failed in %NNPC.clint: Ilegal write in CLINT\n\n",
                          64,VL_TIME_UNITED_Q(1),-9,
                          vlSymsp->name());
                VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel/single_cycle_riscv32i/vsrc/Clint.sv", 237, "");
                vlSelf->NPC__DOT__clint__DOT__bvalid = 1U;
            } else {
                vlSelf->NPC__DOT__clint__DOT__bvalid = 0U;
            }
        } else {
            vlSelf->NPC__DOT__clint__DOT__awready = 1U;
            vlSelf->NPC__DOT__clint__DOT__wready = 1U;
            vlSelf->NPC__DOT__clint__DOT__bresp = 0U;
            vlSelf->NPC__DOT__clint__DOT__bvalid = 0U;
            __Vdly__NPC__DOT__clint__DOT__w_delay_unit 
                = vlSelf->NPC__DOT__clint__DOT__lfsr;
        }
    } else {
        vlSelf->NPC__DOT__clint__DOT__awready = 1U;
        vlSelf->NPC__DOT__clint__DOT__wready = 1U;
        vlSelf->NPC__DOT__clint__DOT__bresp = 0U;
        vlSelf->NPC__DOT__clint__DOT__bvalid = 0U;
        __Vdly__NPC__DOT__clint__DOT__w_delay_unit 
            = vlSelf->NPC__DOT__clint__DOT__lfsr;
    }
    if (vlSelf->reset) {
        vlSelf->NPC__DOT__uart__DOT__arready = 0U;
        vlSelf->NPC__DOT__uart__DOT__rdata = 0U;
        vlSelf->NPC__DOT__uart__DOT__rresp = 0U;
        vlSelf->NPC__DOT__uart__DOT__rvalid = 0U;
        __Vdly__NPC__DOT__uart__DOT__r_delay_unit = vlSelf->NPC__DOT__uart__DOT__lfsr;
    } else if (vlSelf->NPC__DOT__uart__DOT__nr_state) {
        if (vlSelf->NPC__DOT__uart__DOT__nr_state) {
            __Vdly__NPC__DOT__uart__DOT__r_delay_unit 
                = (0xfU & ((IData)(vlSelf->NPC__DOT__uart__DOT__r_delay_unit) 
                           - (IData)(1U)));
            vlSelf->NPC__DOT__uart__DOT__arready = 0U;
            vlSelf->NPC__DOT__uart__DOT__rresp = 0U;
            if (VL_UNLIKELY((0U == (IData)(vlSelf->NPC__DOT__uart__DOT__r_delay_unit)))) {
                VL_WRITEF("[%0t] %%Error: Uart.sv:103: Assertion failed in %NNPC.uart: Ilegal read in UART\n\n",
                          64,VL_TIME_UNITED_Q(1),-9,
                          vlSymsp->name());
                vlSelf->NPC__DOT__uart__DOT__rdata = 0U;
                vlSelf->NPC__DOT__uart__DOT__rvalid = 1U;
                VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel/single_cycle_riscv32i/vsrc/Uart.sv", 103, "");
            } else {
                vlSelf->NPC__DOT__uart__DOT__rdata = 0U;
                vlSelf->NPC__DOT__uart__DOT__rvalid = 0U;
            }
        } else {
            vlSelf->NPC__DOT__uart__DOT__arready = 1U;
            vlSelf->NPC__DOT__uart__DOT__rdata = 0U;
            vlSelf->NPC__DOT__uart__DOT__rresp = 0U;
            vlSelf->NPC__DOT__uart__DOT__rvalid = 0U;
            __Vdly__NPC__DOT__uart__DOT__r_delay_unit 
                = vlSelf->NPC__DOT__uart__DOT__lfsr;
        }
    } else {
        vlSelf->NPC__DOT__uart__DOT__arready = 1U;
        vlSelf->NPC__DOT__uart__DOT__rresp = 0U;
        vlSelf->NPC__DOT__uart__DOT__rvalid = 0U;
        __Vdly__NPC__DOT__uart__DOT__r_delay_unit = vlSelf->NPC__DOT__uart__DOT__lfsr;
    }
    if (vlSelf->reset) {
        vlSelf->NPC__DOT__uart__DOT__awready = 0U;
        vlSelf->NPC__DOT__uart__DOT__wready = 0U;
        vlSelf->NPC__DOT__uart__DOT__bresp = 0U;
        vlSelf->NPC__DOT__uart__DOT__bvalid = 0U;
        __Vdly__NPC__DOT__uart__DOT__w_delay_unit = vlSelf->NPC__DOT__uart__DOT__lfsr;
    } else if (vlSelf->NPC__DOT__uart__DOT__nw_state) {
        if (vlSelf->NPC__DOT__uart__DOT__nw_state) {
            __Vdly__NPC__DOT__uart__DOT__w_delay_unit 
                = (0xfU & ((IData)(vlSelf->NPC__DOT__uart__DOT__w_delay_unit) 
                           - (IData)(1U)));
            vlSelf->NPC__DOT__uart__DOT__awready = 0U;
            vlSelf->NPC__DOT__uart__DOT__wready = 0U;
            vlSelf->NPC__DOT__uart__DOT__bresp = 0U;
            if (VL_UNLIKELY((0U == (IData)(vlSelf->NPC__DOT__uart__DOT__w_delay_unit)))) {
                VL_WRITEF("%c",8,(0xffU & vlSelf->NPC__DOT__xbar__DOT__io_uart_wdata));
                vlSelf->NPC__DOT__uart__DOT__bvalid = 1U;
            } else {
                vlSelf->NPC__DOT__uart__DOT__bvalid = 0U;
            }
        } else {
            vlSelf->NPC__DOT__uart__DOT__awready = 1U;
            vlSelf->NPC__DOT__uart__DOT__wready = 1U;
            vlSelf->NPC__DOT__uart__DOT__bresp = 0U;
            vlSelf->NPC__DOT__uart__DOT__bvalid = 0U;
            __Vdly__NPC__DOT__uart__DOT__w_delay_unit 
                = vlSelf->NPC__DOT__uart__DOT__lfsr;
        }
    } else {
        vlSelf->NPC__DOT__uart__DOT__awready = 1U;
        vlSelf->NPC__DOT__uart__DOT__wready = 1U;
        vlSelf->NPC__DOT__uart__DOT__bresp = 0U;
        vlSelf->NPC__DOT__uart__DOT__bvalid = 0U;
        __Vdly__NPC__DOT__uart__DOT__w_delay_unit = vlSelf->NPC__DOT__uart__DOT__lfsr;
    }
    if (vlSelf->reset) {
        vlSelf->NPC__DOT__mem__DOT__arready = 0U;
        vlSelf->NPC__DOT__mem__DOT__rdata = 0U;
        vlSelf->NPC__DOT__mem__DOT__rresp = 0U;
        vlSelf->NPC__DOT__mem__DOT__rvalid = 0U;
        __Vdly__NPC__DOT__mem__DOT__r_delay_unit = vlSelf->NPC__DOT__mem__DOT__lfsr;
    } else if (vlSelf->NPC__DOT__mem__DOT__nr_state) {
        if (vlSelf->NPC__DOT__mem__DOT__nr_state) {
            __Vdly__NPC__DOT__mem__DOT__r_delay_unit 
                = (0xfU & ((IData)(vlSelf->NPC__DOT__mem__DOT__r_delay_unit) 
                           - (IData)(1U)));
            vlSelf->NPC__DOT__mem__DOT__arready = 0U;
            vlSelf->NPC__DOT__mem__DOT__rresp = 0U;
            if ((0U == (IData)(vlSelf->NPC__DOT__mem__DOT__r_delay_unit))) {
                VNPC___024root____Vdpiimwrap_NPC__DOT__mem__DOT__paddr_read_TOP(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr), 0U, __Vfunc_NPC__DOT__mem__DOT__paddr_read__1__Vfuncout);
                vlSelf->NPC__DOT__mem__DOT__rdata = __Vfunc_NPC__DOT__mem__DOT__paddr_read__1__Vfuncout;
                vlSelf->NPC__DOT__mem__DOT__rvalid = 1U;
            } else {
                vlSelf->NPC__DOT__mem__DOT__rdata = 0U;
                vlSelf->NPC__DOT__mem__DOT__rvalid = 0U;
            }
        } else {
            vlSelf->NPC__DOT__mem__DOT__arready = 1U;
            vlSelf->NPC__DOT__mem__DOT__rdata = 0U;
            vlSelf->NPC__DOT__mem__DOT__rresp = 0U;
            vlSelf->NPC__DOT__mem__DOT__rvalid = 0U;
            __Vdly__NPC__DOT__mem__DOT__r_delay_unit 
                = vlSelf->NPC__DOT__mem__DOT__lfsr;
        }
    } else {
        vlSelf->NPC__DOT__mem__DOT__arready = 1U;
        vlSelf->NPC__DOT__mem__DOT__rresp = 0U;
        vlSelf->NPC__DOT__mem__DOT__rvalid = 0U;
        __Vdly__NPC__DOT__mem__DOT__r_delay_unit = vlSelf->NPC__DOT__mem__DOT__lfsr;
    }
    if (vlSelf->reset) {
        vlSelf->NPC__DOT__mem__DOT__awready = 0U;
        vlSelf->NPC__DOT__mem__DOT__wready = 0U;
        vlSelf->NPC__DOT__mem__DOT__bresp = 0U;
        vlSelf->NPC__DOT__mem__DOT__bvalid = 0U;
        __Vdly__NPC__DOT__mem__DOT__w_delay_unit = vlSelf->NPC__DOT__mem__DOT__lfsr;
    } else if (vlSelf->NPC__DOT__mem__DOT__nw_state) {
        if (vlSelf->NPC__DOT__mem__DOT__nw_state) {
            __Vdly__NPC__DOT__mem__DOT__w_delay_unit 
                = (0xfU & ((IData)(vlSelf->NPC__DOT__mem__DOT__w_delay_unit) 
                           - (IData)(1U)));
            vlSelf->NPC__DOT__mem__DOT__awready = 0U;
            vlSelf->NPC__DOT__mem__DOT__wready = 0U;
            vlSelf->NPC__DOT__mem__DOT__bresp = 0U;
            if ((0U == (IData)(vlSelf->NPC__DOT__mem__DOT__w_delay_unit))) {
                VNPC___024root____Vdpiimwrap_NPC__DOT__mem__DOT__paddr_write_TOP(
                                                                                (0xfffffffcU 
                                                                                & vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr), vlSelf->NPC__DOT__xbar__DOT__io_sram_wdata, (IData)(vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb));
                vlSelf->NPC__DOT__mem__DOT__bvalid = 1U;
            } else {
                vlSelf->NPC__DOT__mem__DOT__bvalid = 0U;
            }
        } else {
            vlSelf->NPC__DOT__mem__DOT__awready = 1U;
            vlSelf->NPC__DOT__mem__DOT__wready = 1U;
            vlSelf->NPC__DOT__mem__DOT__bresp = 0U;
            vlSelf->NPC__DOT__mem__DOT__bvalid = 0U;
            __Vdly__NPC__DOT__mem__DOT__w_delay_unit 
                = vlSelf->NPC__DOT__mem__DOT__lfsr;
        }
    } else {
        vlSelf->NPC__DOT__mem__DOT__awready = 1U;
        vlSelf->NPC__DOT__mem__DOT__wready = 1U;
        vlSelf->NPC__DOT__mem__DOT__bresp = 0U;
        vlSelf->NPC__DOT__mem__DOT__bvalid = 0U;
        __Vdly__NPC__DOT__mem__DOT__w_delay_unit = vlSelf->NPC__DOT__mem__DOT__lfsr;
    }
    if (vlSelf->reset) {
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc = 0x80000000U;
    } else if (vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid) {
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc 
            = vlSelf->NPC__DOT__core__DOT__ifu__DOT__pc_next;
    }
    vlSelf->NPC__DOT__clint__DOT__r_delay_unit = __Vdly__NPC__DOT__clint__DOT__r_delay_unit;
    vlSelf->NPC__DOT__clint__DOT__mtime = __Vdly__NPC__DOT__clint__DOT__mtime;
    vlSelf->NPC__DOT__clint__DOT__w_delay_unit = __Vdly__NPC__DOT__clint__DOT__w_delay_unit;
    vlSelf->NPC__DOT__clint__DOT__lfsr = __Vdly__NPC__DOT__clint__DOT__lfsr;
    vlSelf->NPC__DOT__uart__DOT__r_delay_unit = __Vdly__NPC__DOT__uart__DOT__r_delay_unit;
    vlSelf->NPC__DOT__uart__DOT__w_delay_unit = __Vdly__NPC__DOT__uart__DOT__w_delay_unit;
    vlSelf->NPC__DOT__uart__DOT__lfsr = __Vdly__NPC__DOT__uart__DOT__lfsr;
    vlSelf->NPC__DOT__mem__DOT__r_delay_unit = __Vdly__NPC__DOT__mem__DOT__r_delay_unit;
    vlSelf->NPC__DOT__mem__DOT__w_delay_unit = __Vdly__NPC__DOT__mem__DOT__w_delay_unit;
    vlSelf->NPC__DOT__mem__DOT__lfsr = __Vdly__NPC__DOT__mem__DOT__lfsr;
    vlSelf->NPC__DOT___clint_rresp = vlSelf->NPC__DOT__clint__DOT__rresp;
    vlSelf->NPC__DOT___uart_rresp = vlSelf->NPC__DOT__uart__DOT__rresp;
    vlSelf->NPC__DOT___mem_rresp = vlSelf->NPC__DOT__mem__DOT__rresp;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rresp = vlSelf->NPC__DOT___clint_rresp;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rresp = vlSelf->NPC__DOT___uart_rresp;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rresp = vlSelf->NPC__DOT___mem_rresp;
}
