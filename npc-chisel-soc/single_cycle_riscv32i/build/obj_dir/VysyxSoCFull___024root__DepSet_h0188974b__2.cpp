// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__10\n"); );
    // Init
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active;
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__c_state = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__c_state = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__c_state = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__c_state = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt 
            = (7U & (((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en) 
                        & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__c_state))) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_7)) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen)))
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen) 
                         - (IData)(1U)) : (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0) 
                                               != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen)))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt) 
                                               - (IData)(1U))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt 
            = (7U & (((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en) 
                        & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__c_state))) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_7)) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen)))
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen) 
                         - (IData)(1U)) : (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0) 
                                               != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen)))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt) 
                                               - (IData)(1U))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt 
            = (7U & (((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en) 
                        & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__c_state))) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_7)) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen)))
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen) 
                         - (IData)(1U)) : (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0) 
                                               != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen)))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt) 
                                               - (IData)(1U))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt 
            = (7U & (((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en) 
                        & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__c_state))) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_7)) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen)))
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen) 
                         - (IData)(1U)) : (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0) 
                                               != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen)))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt) 
                                               - (IData)(1U))
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active 
            = (0xfU & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active) 
                           | ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5)))
                        : (((- (IData)((2U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd)))) 
                            | (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5)))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active 
            = (0xfU & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active) 
                           | ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5)))
                        : (((- (IData)((2U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd)))) 
                            | (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5)))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active 
            = (0xfU & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active) 
                           | ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5)))
                        : (((- (IData)((2U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd)))) 
                            | (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5)))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active 
            = (0xfU & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active) 
                           | ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5)))
                        : (((- (IData)((2U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd)))) 
                            | (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5)))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13)
                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode) 
                          >> 4U) - (IData)(1U)) : (
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt)) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt) 
                                                       != 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode) 
                                                           >> 4U))))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode) 
                                                    >> 4U))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13)
                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode) 
                          >> 4U) - (IData)(1U)) : (
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt)) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt) 
                                                       != 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode) 
                                                           >> 4U))))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode) 
                                                    >> 4U))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13)
                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode) 
                          >> 4U) - (IData)(1U)) : (
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt)) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt) 
                                                       != 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode) 
                                                           >> 4U))))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode) 
                                                    >> 4U))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13)
                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode) 
                          >> 4U) - (IData)(1U)) : (
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt)) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt) 
                                                       != 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode) 
                                                           >> 4U))))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode) 
                                                    >> 4U))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wdata 
            = (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
               >> 0x10U);
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wdata 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din);
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wdata 
            = (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
               >> 0x10U);
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wdata 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din);
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wstrb 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wstrb 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wstrb 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wstrb 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__c_state 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__c_state 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__c_state 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__c_state 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb;
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1)) 
             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb;
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1)) 
             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb;
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_12 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_12 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_12 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_12 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_active 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_active 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_active 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_active 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__wdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__wdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__wdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__wdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wstrb 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wstrb;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__wstrb 
        = (3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wstrb)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wstrb 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wstrb;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__wstrb 
        = (3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wstrb)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wstrb 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wstrb;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__wstrb 
        = (3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wstrb)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wstrb 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wstrb;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__wstrb 
        = (3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wstrb)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_7 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13 
        = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_bank_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_7 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13 
        = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_bank_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_7 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13 
        = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_bank_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_7 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13 
        = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_bank_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_1 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_12)
              ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13) 
                 << 1U) : 3U) << 6U) | ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt))
                                           ? 1U : 2U) 
                                         << 4U) | (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_12)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13) 
                                                       << 1U))
                                                      : 1U) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13)
                                                       ? 2U
                                                       : 
                                                      (3U 
                                                       & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_7))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_1 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_12)
              ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13) 
                 << 1U) : 3U) << 6U) | ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt))
                                           ? 1U : 2U) 
                                         << 4U) | (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_12)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13) 
                                                       << 1U))
                                                      : 1U) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13)
                                                       ? 2U
                                                       : 
                                                      (3U 
                                                       & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_7))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_1 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_12)
              ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13) 
                 << 1U) : 3U) << 6U) | ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt))
                                           ? 1U : 2U) 
                                         << 4U) | (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_12)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13) 
                                                       << 1U))
                                                      : 1U) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13)
                                                       ? 2U
                                                       : 
                                                      (3U 
                                                       & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_7))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_1 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_12)
              ? ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13) 
                 << 1U) : 3U) << 6U) | ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt))
                                           ? 1U : 2U) 
                                         << 4U) | (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_12)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13) 
                                                       << 1U))
                                                      : 1U) 
                                                    << 2U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13)
                                                       ? 2U
                                                       : 
                                                      (3U 
                                                       & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_7))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_1) 
                 >> (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__c_state) 
                           << 1U))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_1) 
                 >> (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__c_state) 
                           << 1U))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_1) 
                 >> (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__c_state) 
                           << 1U))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_1) 
                 >> (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__c_state) 
                           << 1U))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wen 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wen 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wen 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wen 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_ren 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip1_io_out_en 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en_0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_ren 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip0_io_out_en 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en_0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_ren 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip1_io_out_en 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en_0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_ren 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip0_io_out_en 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en_0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__out_en 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__out_en 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__12\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h29eb8b40__0;
    VlWide<3>/*95:0*/ __Vtemp_h537ef65e__0;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_in_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_out_valid))
            : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state))
                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_arready))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state))
                                   ? (2U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__rready)))
                                   : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_ready) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__out_valid))
                                       ? 0U : 3U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_write_data_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_write_data_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_write_data_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_write_data_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_addr 
        = (0x7ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                       >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr 
        = (((0x3fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                          >> 2U)) << 2U) | 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr 
        = (0xffffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                        >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr 
        = (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 
        = (2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                        >> 0x1cU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___io_in_prdata_T 
        = (0U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr 
        = (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0 
        = (0x1ffffU & (0x10002U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                                   >> 0xcU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
        = (0x1ffffU & (0x10011U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                                   >> 0xcU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN 
        = (0x1ffffU & (0x10001U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                                   >> 0xcU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                                                   >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr 
        = (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 
        = (0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                        >> 0x1cU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awvalid = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awvalid = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awvalid = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_len_o 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awlen;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awvalid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awvalid = 0U;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arvalid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arvalid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arvalid = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_len_o 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arlen;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arvalid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_len_o = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_0 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_2 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr)
                     ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                            >> 0x18U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                            >> 8U) : vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                            >> 0x19U)) | ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0 
                                                 >> 0xdU)) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                            >> 0x19U)) | ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
                                                 >> 0xdU)) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
                                               >> 2U)) 
                                             | (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                             >> 0x19U)) | ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN 
                                                  >> 0xdU)) 
                                           | ((4U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                                                >> 0xeU)) 
                                              | (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN))))) 
           | (3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
                           >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h2f4ad258__0 
        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr 
                 - (0x3ffffff8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_0 
        = ((0x10000fffU < vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr) 
           & (0x10002000U > vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_1 
        = (0x2fffffffU < vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_burst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_burst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_len_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_len_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_len_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_len_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_2) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__out_valid)
            : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid) 
                   & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rresp)))))
                : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid) 
                       & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rresp)))))
                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid) 
                       & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rresp))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wdata_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__W0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_psel) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_err_o)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pslverr)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pslverr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_penable) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___offset_T_5 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h2f4ad258__0)) 
           << 3U);
    __Vtemp_h29eb8b40__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_hacba2637__0;
    __Vtemp_h29eb8b40__0[1U] = 0U;
    __Vtemp_h29eb8b40__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h537ef65e__0, __Vtemp_h29eb8b40__0, 
                  (0x38U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h2f4ad258__0 
                            << 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[0U] 
        = __Vtemp_h537ef65e__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[1U] 
        = __Vtemp_h537ef65e__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[2U] 
        = (0x7fffffffU & __Vtemp_h537ef65e__0[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_1)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wlast_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awaddr_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_araddr_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wvalid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awburst_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arburst_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awlen_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arlen_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awvalid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arvalid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wdata_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wdata_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__W0_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_psel) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_psel = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata 
            = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite)) 
                & (4U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr)))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_sw)
                : 0U);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_psel = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_psel) 
            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___io_in_prdata_T)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pslverr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pslverr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pslverr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr) 
           << 1U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___luart_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9)
                ? 0x3540U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5)
                              ? 0x3440U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3))
                                            ? 1U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1)) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T)))
                                             ? 0U : 
                                            (0x7ffffffU 
                                             & ((IData)(0x3000000U) 
                                                + (0xffffffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr)))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_paddr_T_12)
                ? 0x10001000U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5))
                                  ? 0x10001010U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7)
                                                    ? 0x10001018U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3)
                                                     ? 0x10001014U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T)
                                                      ? 0x10001000U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1)
                                                       ? 0x10001004U
                                                       : 0U))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb 
            = (0xfU & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h56ad15bf__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) 
           | ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_penable_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awid_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arid_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wlast_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wlast_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awaddr_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awaddr_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_araddr_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_araddr_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wvalid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wvalid_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awburst_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awburst_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arburst_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arburst_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awlen_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awlen_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arlen_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arlen_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awvalid_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arvalid_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_dat_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__di 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_we_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_re_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_paddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                    >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h56ad15bf__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h56ad15bf__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__stb_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bresp)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rresp)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_we_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___GEN 
                    >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid) 
                                 << 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_stb_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_cyc_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_divider_sel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
           & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ctrl_sel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
           & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ss_sel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
           & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
             & (0xcU == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr))) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                        & (8U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr))) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                   & (4U == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr))) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (0U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_br_target 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext 
           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_222 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__issdram_raddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
        = ((0U == ((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_6))
                    ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                             ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                      ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_71)
                                               ? 2U
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4) 
                                                         << 1U)))))))))))))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data
            : ((1U == ((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_6))
                        ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                 ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                          ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_71)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                          ? 3U
                                                          : 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4) 
                                                          << 1U)))))))))))))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc
                : ((2U == ((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_6))
                            ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                     ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                              ? 0U : 
                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_71)
                                               ? 2U
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4) 
                                                         << 1U)))))))))))))
                    ? 0U : (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                                     >> 0xfU)))));
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_0_tag;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_0_valid;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_0_data_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_0_data_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_0_data_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_0_data_3;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_1_data_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_1_data_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_1_data_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_1_data_3;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_2_data_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_2_data_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_2_data_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_2_data_3;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_1_tag;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_2_tag;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_1_valid;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_2_valid;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_0_tag;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_0_valid;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_0_data_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_0_data_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_0_data_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_0_data_3;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_1_data_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_1_data_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_1_data_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_1_data_3;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_2_data_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_2_data_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_2_data_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_2_data_3;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_0;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_1;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_2;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_1_tag;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_2_tag;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_1_valid;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_2_valid;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_0_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_0_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_0_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_0_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_0_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_0_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_1_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_1_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_1_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_1_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_2_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_2_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_2_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_2_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_1_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_2_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_1_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_2_valid;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_0_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_0_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_0_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_0_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_0_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_0_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_1_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_1_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_1_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_1_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_2_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_2_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_2_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_2_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_1_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_2_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_1_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_2_valid;
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_0_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_0_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_0_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_0_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_0_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_0_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_1_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_1_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_1_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_1_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_2_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_2_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_2_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_2_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_1_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_2_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_1_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_2_valid;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_0_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_0_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_0_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_0_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_0_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_0_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_1_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_1_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_1_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_1_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_2_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_2_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_2_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_2_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_1_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_2_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_1_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_2_valid;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_0_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_0_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_0_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_0_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_0_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_0_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_1_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_1_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_1_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_1_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_2_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_2_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_2_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_2_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_1_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_2_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_1_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_2_valid;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_0_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_0_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_0_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_0_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_0_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_0_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_1_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_1_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_1_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_1_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_2_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_2_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_2_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_2_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_1_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_2_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_1_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_2_valid;
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_0_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_0_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_0_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_0_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_0_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_0_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_1_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_1_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_1_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_1_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_2_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_2_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_2_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_2_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_1_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_2_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_1_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_2_valid;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_0_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_0_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_0_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_0_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_0_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_0_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_1_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_1_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_1_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_1_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_2_data_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_2_data_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_2_data_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_2_data_3;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_0;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_2;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_1_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_2_tag;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_1_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_2_valid;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_0_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_0_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_0_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_0_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_0_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_0_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_1_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_1_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_1_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_1_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_2_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_2_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_2_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_2_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_1_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_2_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_1_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_2_valid;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_0_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_0_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_0_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_0_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_0_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_0_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_1_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_1_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_1_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_1_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_2_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_2_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_2_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_2_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_1_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_2_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_1_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_2_valid;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_0_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_0_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_0_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_0_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_0_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_0_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_1_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_1_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_1_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_1_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_2_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_2_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_2_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_2_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_1_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_2_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_1_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_2_valid;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_0_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_0_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_0_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_0_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_0_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_0_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_1_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_1_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_1_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_1_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_2_data_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_2_data_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_2_data_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_2_data_3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_0;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_1_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_2_tag;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_1_valid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_2_valid;
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_0_tag;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_0_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_0_data_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_0_data_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_0_data_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_0_data_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_1_data_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_1_data_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_1_data_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_1_data_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_2_data_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_2_data_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_2_data_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_2_data_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_1_tag;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_2_tag;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_1_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_2_valid;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_0_tag;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_0_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_0_data_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_0_data_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_0_data_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_0_data_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_1_data_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_1_data_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_1_data_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_1_data_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_2_data_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_2_data_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_2_data_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_2_data_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_1_tag;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_2_tag;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_1_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_2_valid;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_270 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_271 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_272 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_223 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_225 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_227 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_228 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_229 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_230 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_231 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_232 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_233 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_234 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_235 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_236 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_237 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_238 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_239 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_240 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_241 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_242 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_243 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_244 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_245 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_246 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_247 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_248 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_249 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_250 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_251 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_252 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_253 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_254 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_255 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_256 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_257 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_258 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_259 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_260 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_261 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_262 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_263 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_264 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_265 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_266 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_267 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_268 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_269 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_br_target 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_br_target;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_br_target 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_br_target;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_out_T_14 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp)) 
                                    << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___br_flg_T_3 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
           == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_out_T_31 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0 
        = VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___br_flg_T_17 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
           < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp
            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata 
                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp)
                : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                    ? ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp) 
                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata)
                    : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                        ? 0xbU : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h4687e4f2__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_17)) 
                 & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_18) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_19)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf2609dbf__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_20) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_21) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_22)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_6 
            == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_tag) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__hasEmpty 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_0 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_12 
            == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_tag) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_op1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_op1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_op1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_op1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_op1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_br_flg 
        = (1U & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___br_flg_T_3)
                  : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___br_flg_T_3))
                      : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0)
                          : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                              ? VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0)
                              : ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___br_flg_T_17)
                                  : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___br_flg_T_17)) 
                                     & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_out_T_31
            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
                   - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0)
                : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0)
                    : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
                           | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0)
                        : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0)
                            : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
                                   << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0))
                                : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp 
                                       >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0))
                                    : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                        ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp, 
                                                         (0x1fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0))
                                        : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0)
                                            : ((0xaU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___br_flg_T_17)
                                                : (
                                                   (0x11U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                    ? 
                                                   (0xfffffffeU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_out_T_31)
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp
                                                     : 0U))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_csr_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0 
        = (1U & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf2609dbf__0)) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h4687e4f2__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__lruIndex 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf2609dbf__0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h4687e4f2__0)
            : 2U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__ways_hit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN) 
              | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_0 
                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_tag) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__ways_hit_num 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_0)
            ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_br_flg) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_br_flg = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_br_flg = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__pc_next 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_br_target;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_br_flg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_br_flg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu_out 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__pc_next 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_jmp_flg)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_87)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mtvec
                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_89)
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mepc
                        : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__shift_rdata 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__dmem_rdata 
           >> (0x18U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out 
                        << 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_273 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_278 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_281 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_284 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_287 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_290 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_293 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_296 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_299 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_302 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_305 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_308 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_311 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_314 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_317 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_320 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_hf790f154__0) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__lruIndex));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__lruIndex));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_14 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_20 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_24 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_28 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_32 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_36 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_40 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_44 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_48 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_52 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_56 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_60 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_64 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_68 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_72 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_75 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0)) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__ways_hit_num))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_25 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_26 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_27 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_28 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4;
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__ways_hit_num))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_25 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_7;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_26 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_8;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_27 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_9;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_28 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_10;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__ways_hit_num))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_25 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_13;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_26 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_14;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_27 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_15;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_28 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_25 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_26 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_27 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_28 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_4;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__ways_hit_num));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__ways_hit_num));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__dmem_rdata_processed 
        = ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0) 
                  | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9) 
                           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_13)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11)))))))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_2)
                ? (((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__shift_rdata 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__shift_rdata))
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_10)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__shift_rdata
                    : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                        ? (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__shift_rdata)
                        : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                            ? (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__shift_rdata)
                            : 0U)))) : (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__shift_rdata 
                                                        >> 7U)))) 
                                         << 8U) | (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__shift_rdata)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_275 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_279 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_282 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_285 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_288 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_291 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_294 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_297 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_300 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_303 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_306 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_309 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_312 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_315 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_318 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_321 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_274));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_277 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_280 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_283 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_286 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_289 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_292 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_295 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_298 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_301 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_304 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_307 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_310 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_313 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_316 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_319 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_322 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_276));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_78 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_14)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_14)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_81 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_20)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_20)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_84 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_24)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_24)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_87 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_28)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_28)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_90 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_32)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_32)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_93 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_36)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_36)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_96 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_40)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_40)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_99 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_44)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_44)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_102 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_48)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_48)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_105 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_52)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_52)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_108 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_56)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_56)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_111 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_60)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_60)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_114 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_64)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_64)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_117 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_68)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_68)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_120 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_72)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_72)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_123 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_75)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_75)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_29 
        = ((0U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_offset) 
                         >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_25
            : ((1U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_offset) 
                             >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_26
                : ((2U == (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_offset) 
                                 >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_27
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_28)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_16 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_21 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_25 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_29 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_33 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_37 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_41 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_45 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_49 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_53 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_57 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_61 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_65 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_69 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_73 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_76 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_18 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_22 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_26 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_30 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_34 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_38 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_42 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_46 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_50 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_54 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_58 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_62 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_66 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_70 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_74 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_77 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__dmem_rdata_processed
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_jmp_flg)
                ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc)
                : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_alu_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_127 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_16)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_16)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_79 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_16)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_14)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_126 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_14)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_16)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_130 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_21)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_21)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_82 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_21)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_20)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_129 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_20)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_21)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_133 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_25)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_25)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_85 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_25)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_24)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_132 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_24)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_25)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_136 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_29)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_29)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_88 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_29)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_28)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_135 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_28)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_29)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_139 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_33)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_33)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_91 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_33)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_32)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_138 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_32)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_33)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_142 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_37)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_37)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_94 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_37)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_36)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_141 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_36)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_37)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_145 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_41)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_41)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_97 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_41)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_40)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_144 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_40)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_41)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_148 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_45)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_45)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_100 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_45)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_44)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_147 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_44)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_45)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_151 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_49)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_49)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_103 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_49)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_48)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_150 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_48)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_49)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_154 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_53)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_53)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_106 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_53)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_52)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_153 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_52)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_53)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_157 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_57)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_57)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_109 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_57)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_56)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_156 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_56)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_57)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_160 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_61)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_61)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_112 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_61)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_60)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_159 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_60)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_61)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_163 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_65)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_65)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_115 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_65)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_64)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_162 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_64)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_65)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_166 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_69)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_69)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_118 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_69)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_68)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_165 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_68)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_69)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_169 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_73)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_73)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_121 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_73)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_72)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_168 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_72)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_73)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_172 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_76)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_76)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_124 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_76)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_75)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_0_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_171 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_75)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_76)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_176 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_18)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_18)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_80 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_18)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_14)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_128 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_18)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_16)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_174 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_14)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_18)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_175 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_16)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_18)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_179 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_22)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_22)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_83 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_22)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_20)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_131 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_22)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_21)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_177 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_20)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_22)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_178 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_21)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_22)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_182 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_26)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_26)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_86 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_26)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_24)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_134 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_26)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_25)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_180 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_24)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_26)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_181 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_25)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_26)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_185 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_30)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_30)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_89 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_30)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_28)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_137 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_30)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_29)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_183 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_28)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_30)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_184 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_29)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_30)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_188 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_34)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_34)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_92 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_34)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_32)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_140 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_34)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_33)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_186 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_32)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_34)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_187 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_33)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_34)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_191 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_38)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_38)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_95 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_38)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_36)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_143 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_38)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_37)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_189 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_36)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_38)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_190 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_37)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_38)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_194 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_42)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_42)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_98 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_42)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_40)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_146 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_42)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_41)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_192 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_40)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_42)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_193 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_41)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_42)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_197 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_46)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_46)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_101 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_46)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_44)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_149 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_46)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_45)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_195 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_44)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_46)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_196 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_45)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_46)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_200 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_50)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_50)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_104 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_50)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_48)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_152 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_50)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_49)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_198 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_48)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_50)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_199 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_49)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_50)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_203 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_54)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_54)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_107 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_54)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_52)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_155 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_54)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_53)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_201 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_52)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_54)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_202 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_53)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_54)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_206 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_58)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_58)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_110 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_58)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_56)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_158 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_58)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_57)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_204 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_56)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_58)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_205 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_57)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_58)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_209 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_62)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_62)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_113 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_62)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_60)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_161 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_62)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_61)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_207 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_60)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_62)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_208 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_61)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_62)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_212 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_66)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_66)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_116 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_66)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_64)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_164 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_66)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_65)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_210 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_64)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_66)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_211 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_65)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_66)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_215 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_70)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_70)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_119 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_70)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_68)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_167 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_70)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_69)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_213 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_68)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_70)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_214 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_69)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_70)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_218 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_74)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_74)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_122 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_74)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_72)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_170 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_74)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_73)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_216 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_72)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_74)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_217 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_73)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_74)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_221 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_77)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_77)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_125 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_77)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_75)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_0_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_173 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_77)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_17)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_76)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_219 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_75)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgTmp_h72db81e2__0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_77)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_220 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_76)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_15)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_77)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_1)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__hit0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_323 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_78;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_326 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_81;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_329 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_84;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_332 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_87;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_335 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_90;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_338 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_93;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_341 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_96;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_344 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_99;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_347 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_102;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_350 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_105;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_353 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_108;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_356 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_111;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_359 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_114;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_362 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_117;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_365 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_120;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_368 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_123;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_372 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_127;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_324 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_79;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_371 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_126;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_375 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_130;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_327 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_82;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_374 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_129;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_378 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_133;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_330 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_85;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_377 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_132;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_381 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_136;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_333 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_88;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_380 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_135;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_384 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_139;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_336 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_91;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_383 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_138;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_387 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_142;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_339 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_94;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_386 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_141;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_390 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_145;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_342 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_97;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_389 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_144;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_393 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_148;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_345 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_100;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_392 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_147;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_396 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_151;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_348 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_103;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_395 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_150;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_399 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_154;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_351 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_106;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_398 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_153;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_402 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_157;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_354 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_109;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_401 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_156;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_405 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_160;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_357 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_112;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_404 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_159;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_408 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_163;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_360 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_115;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_407 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_162;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_411 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_166;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_363 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_118;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_410 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_165;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_414 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_169;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_366 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_121;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_413 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_168;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_417 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_172;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_369 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_124;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_416 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_171;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_421 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_176;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_325 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_80;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_373 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_128;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_419 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_174;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_420 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_175;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_424 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_179;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_328 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_83;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_376 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_131;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_422 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_177;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_423 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_178;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_427 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_182;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_331 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_86;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_379 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_134;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_425 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_180;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_426 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_181;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_430 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_185;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_334 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_89;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_382 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_137;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_428 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_183;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_429 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_184;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_433 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_188;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_337 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_92;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_385 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_140;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_431 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_186;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_432 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_187;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_436 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_191;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_340 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_95;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_388 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_143;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_434 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_189;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_435 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_190;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_439 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_194;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_343 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_98;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_391 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_146;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_437 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_192;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_438 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_193;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_442 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_197;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_346 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_101;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_394 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_149;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_440 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_195;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_441 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_196;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_445 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_200;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_349 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_104;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_397 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_152;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_443 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_198;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_444 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_199;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_448 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_203;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_352 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_107;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_400 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_155;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_446 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_201;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_447 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_202;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_451 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_206;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_355 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_110;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_403 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_158;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_449 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_204;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_450 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_205;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_454 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_209;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_358 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_113;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_406 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_161;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_452 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_207;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_453 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_208;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_457 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_212;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_361 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_116;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_409 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_164;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_455 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_210;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_456 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_211;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_460 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_215;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_364 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_119;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_412 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_167;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_458 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_213;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_459 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_214;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_463 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_218;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_367 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_122;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_415 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_170;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_461 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_216;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_462 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_217;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_466 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_221;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_370 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_125;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_418 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_173;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_464 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_219;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_465 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_220;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_323 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_326 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_329 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_332 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_335 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_338 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_341 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_344 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_347 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_350 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_353 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_356 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_359 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_362 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_365 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_368 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_0_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_372 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_324 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_371 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_375 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_327 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_374 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_378 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_330 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_377 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_381 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_333 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_380 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_384 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_336 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_383 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_387 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_339 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_386 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_390 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_342 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_389 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_393 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_345 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_392 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_396 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_348 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_395 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_399 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_351 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_398 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_402 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_354 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_401 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_405 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_357 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_404 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_408 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_360 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_407 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_411 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_363 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_410 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_414 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_366 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_413 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_417 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_369 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_0_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_416 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_421 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_325 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_373 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_419 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_420 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_424 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_328 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_376 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_422 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_423 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_427 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_331 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_379 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_425 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_426 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_430 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_334 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_382 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_428 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_429 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_433 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_337 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_385 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_431 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_432 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_436 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_340 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_388 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_434 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_435 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_439 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_343 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_391 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_437 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_438 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_442 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_346 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_394 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_440 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_441 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_445 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_349 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_397 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_443 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_444 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_448 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_352 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_400 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_446 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_447 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_451 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_355 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_403 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_449 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_450 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_454 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_358 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_406 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_452 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_453 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_457 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_361 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_409 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_455 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_456 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_460 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_364 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_412 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_458 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_459 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_463 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_367 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_415 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_461 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_462 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_lruMatrix_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_466 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_370 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_0_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_418 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_1_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_464 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_465 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_lruMatrix_2_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_wb_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_wb_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_gpr_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_wdata;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en)
                    ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__CMD_38H) 
                           >> 4U) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__CMD_38H)
                                      : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                             >> 0x14U)
                                          : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x10U)
                                              : ((4U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                      >> 4U)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                        >> 4U)
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                                          >> 0x14U)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                                           >> 0x10U)
                                                           : 
                                                          ((0xeU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                            ? 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                                            >> 0x1cU)
                                                            : 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                                            >> 0x18U))))))))))))))))
                    : ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__CMD_38H) 
                                 >> (7U & ((IData)(7U) 
                                           - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                     >> 4U)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                       >> 4U)
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                                          >> 0x10U)
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                                           >> 0x1cU)
                                                           : 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                                                           >> 0x18U)))))))))))))))));
    vlSelf->externalPins_vga_valid = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__v_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr 
        = (0x7ffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr) 
                       + ((IData)(0x280U) * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_v_addr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_write)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_bvalid_T) 
               & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state)))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_prio_w) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_prio_w) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready 
            = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata 
            = (((0x1fU >= (0x38U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h2f4ad258__0 
                                    << 3U))) ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_hacba2637__0 
                                                << 
                                                (0x38U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h2f4ad258__0 
                                                    << 3U)))
                 : 0U) | ((0x1fU >= (0x3fU & ((IData)(0x20U) 
                                              - (0x38U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h2f4ad258__0 
                                                    << 3U)))))
                           ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_hacba2637__0 
                              >> (0x3fU & ((IData)(0x20U) 
                                           - (0x38U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_h2f4ad258__0 
                                                 << 3U)))))
                           : 0U));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                         >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U]
            : ((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                             >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U]
                : ((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                 >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U]
                    : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                     >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U]
                        : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                         >> 2U))) ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                             >> 2U)))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
            = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done)
                ? 0U : 2U) : ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid)
                                   ? 1U : 0U) : ((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                  ? 
                                                 ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                                                   ? 0U
                                                   : 1U)
                                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
            << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
    vlSelf->ysyxSoCFull__DOT__externalPins_vga_valid 
        = vlSelf->externalPins_vga_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__vga_valid 
        = vlSelf->externalPins_vga_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_valid 
        = vlSelf->externalPins_vga_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid 
        = vlSelf->externalPins_vga_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__valid 
        = vlSelf->externalPins_vga_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
        = ((0x4afffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rlast 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_read)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_0) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_len))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__rd_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__wr_w 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__ack 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel));
    if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck_qpi;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                ? (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                         >> 7U)) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                     ? (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                              >> 6U))
                                     : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                         ? (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                  >> 5U))
                                         : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                             ? (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                   >> 4U))
                                             : ((4U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                                 ? 
                                                (1U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                    >> 3U))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                                  ? 
                                                 (1U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                     >> 2U))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                      >> 1U))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD))
                                                    : 0U))))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n_qpi;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi)))));
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe))));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o 
        = (0xffU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                     ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                             : 0U)) : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out) 
                                                   >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_data 
        = (0xffffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
                        >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___buffer_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data;
    vlSelf->externalPins_vga_r = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
                                           >> 0x10U));
    vlSelf->externalPins_vga_g = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
                                           >> 8U));
    vlSelf->externalPins_vga_b = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w 
        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                 >> 0xaU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready;
    vlSelf->__VdfgTmp_h2fdc3657__0 = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                                      | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                                         | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                                            | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                                               | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                                  | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)))))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__io_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__clock 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__psram_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT___asic_psram_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__io_ce_n = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__psram_ce_n 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n;
    vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_ce_n 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_prdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel)
            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o) 
                << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o) 
                              << 0x10U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o) 
                                            << 8U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__externalPins_vga_r = vlSelf->externalPins_vga_r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__vga_r = vlSelf->externalPins_vga_r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_r 
        = vlSelf->externalPins_vga_r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r 
        = vlSelf->externalPins_vga_r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_r 
        = vlSelf->externalPins_vga_r;
    vlSelf->ysyxSoCFull__DOT__externalPins_vga_g = vlSelf->externalPins_vga_g;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__vga_g = vlSelf->externalPins_vga_g;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_g 
        = vlSelf->externalPins_vga_g;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g 
        = vlSelf->externalPins_vga_g;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_g 
        = vlSelf->externalPins_vga_g;
    vlSelf->ysyxSoCFull__DOT__externalPins_vga_b = vlSelf->externalPins_vga_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__vga_b = vlSelf->externalPins_vga_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_b 
        = vlSelf->externalPins_vga_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b 
        = vlSelf->externalPins_vga_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_b 
        = vlSelf->externalPins_vga_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                               >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)))) 
                    & (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                               << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__reset_status 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready 
        = (1U & (~ (IData)(vlSelf->__VdfgTmp_h2fdc3657__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___luart_auto_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_prdata
                        : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_prdata
                                   : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata
                                              : 0U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata
                                                : 0U)))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__n_state 
            = (2U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pready)) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__n_state 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__c_state))
                ? ((IData)(vlSelf->__VdfgTmp_h2fdc3657__0)
                    ? 1U : 2U) : ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__c_state)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN 
        = (0x24U | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_bvalid_T)
                       ? 0U : 3U) << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid)) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index) 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_len)))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid))
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid)
                                                    ? 1U
                                                    : 2U)
                                                   : 0U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_prdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bresp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bresp_o)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__n_state 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN) 
                 >> (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state) 
                           << 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_read)
            ? ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__n_state)) 
               & (0U == (0xffffU & (((0U == (0x10U 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in) 
                                                << 4U)))
                                      ? 0U : (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_1[
                                              (((IData)(0xfU) 
                                                + (0x70U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in) 
                                                      << 4U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x10U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in) 
                                                      << 4U))))) 
                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_1[
                                       (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in) 
                                              >> 1U))] 
                                       >> (0x10U & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in) 
                                            << 4U)))))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rdata
                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_5 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_5 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_5 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_5 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_5 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_5 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_5 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_5 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_5 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_5 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_5 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_5 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_5 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_5 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_5 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_5 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_0_T_5 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_1_T_5 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_2_T_5 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_3_T_5 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_4_T_5 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_5_T_5 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_6_T_5 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_5 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_8_T_5 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_9_T_5 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_10_T_5 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_11_T_5 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_12_T_5 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_13_T_5 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_14_T_5 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_5 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bready_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bready_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bready_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAWOI_in_0_awready_T_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAWOI_in_0_awready_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___wcounter_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready)) 
              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__pop_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__pop_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rresp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rresp_o)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rdata
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rlast 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rlast)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rready_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_0_T_6 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_1_T_6 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_2_T_6 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_3_T_6 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_4_T_6 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_5_T_6 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_6_T_6 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_6 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_8_T_6 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_9_T_6 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_10_T_6 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_11_T_6 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_12_T_6 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_13_T_6 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_14_T_6 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_6 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgTmp_h19d4c667__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rready_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rready_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_6 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_6 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_6 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_6 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_6 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_6 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_6 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_6 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_6 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_6 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_6 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_6 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_6 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_6 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_6 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_6 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h2fcad087__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arecho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN = (
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss)) 
                                                   & (0U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt)));
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN_0 = 
        (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss)) 
               & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt))))));
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__io_miso 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) 
                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN)) 
                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN_0)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__temp)))));
    vlSelf->ysyxSoCFull__DOT___bitrev_io_miso = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__io_miso;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_7 
        = (0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd));
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__14\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h5e454d29__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback)
            ? ((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                        << 2U)) | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 3U))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__modem_inputs));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q 
                        = (0xfU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o))));
                } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
                }
            }
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0x3bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r)) 
                          << 0xaU));
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x3bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_col_w;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x3bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_col_w;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x3bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w)
                    : 0U);
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x400U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            } else if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 0x20U : 0U);
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_ba = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
    vlSelf->ysyxSoCFull__DOT___asic_sdram_ba = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_ba 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_ba_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_ba_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_ba = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dcd_c 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h5e454d29__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ri_c 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h5e454d29__0) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dsr_c 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h5e454d29__0) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__cts_c 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h5e454d29__0) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_ba;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_ba;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dqm 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dqm 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dqm 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dqm 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dqm 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ba;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ba;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ba;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ba;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_a 
        = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                      >> 0U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_a 
        = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                      >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT___bank0_io_cs_T_1 
        = (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
               >> 0xdU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_dqm 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dqm;
    vlSelf->ysyxSoCFull__DOT___asic_sdram_dqm = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dqm;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dqm 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dqm;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_dqm_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dqm;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_dqm_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dqm;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dqm = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dqm;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_a = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_a = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_a;
    vlSelf->ysyxSoCFull__DOT___asic_sdram_a = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_addr_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_a;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_addr_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cs 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT___bank0_io_cs_T_1;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT___bank0_io_cs_T_1) 
            << 3U) | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__bank1__io_cs 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT___bank0_io_cs_T_1) 
           ^ (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dqm 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dqm;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dqm 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dqm;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cs 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cs;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cs 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cs;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T 
        = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cs 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__bank1__io_cs;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__bank1__io_cs) 
            << 3U) | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->__Vtableidx9 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx9][0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx9][1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h142cc7a0_0
        [vlSelf->__Vtableidx9][2U];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T_1 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cs 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cs;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cs 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cs;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T 
        = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T_1 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1;
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(IData/*31:0*/ id, IData/*31:0*/ bank_addr, IData/*31:0*/ row_addr, IData/*31:0*/ col_addr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1ffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1ffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1ffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1ffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0) 
                      == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen))
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4)
                      : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen) 
                                     - (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0) 
                      == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen))
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4)
                      : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen) 
                                     - (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0) 
                      == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen))
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4)
                      : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen) 
                                     - (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0) 
                      == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen))
                      ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4)
                      : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen) 
                                     - (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr)))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__14__rdata);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__14__rdata;
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr)))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__12__rdata);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__12__rdata;
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr)))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__10__rdata);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__10__rdata;
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr)))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__8__rdata);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__8__rdata;
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o 
        = (0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o 
        = (0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o 
        = (0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o 
        = (0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata);
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip1_io_dq_o 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip0_io_dq_o 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__dout 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o) 
            << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip1_io_dq_o 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip0_io_dq_o 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__dout 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o) 
            << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__dout 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__dout;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__dout 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__dout;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__ren = ((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                                 & (0x17U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)));
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__valid 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__raddr = (
                                                   (0xfffffeU 
                                                    & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out));
    vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__raddr;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT___flash_miso = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                                   | ((((2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                                        & (0U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                                      >> 0x1fU)));
    vlSelf->ysyxSoCFull__DOT__flash__DOT__miso = vlSelf->ysyxSoCFull__DOT___flash_miso;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__6(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp 
        = (3U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state))
                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arvalid)
                      ? 1U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arvalid) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isclint_raddr))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awvalid) 
                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isclint_waddr))))
                               ? 2U : (- (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arvalid) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isclint_raddr)) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awvalid) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isclint_waddr)))))))
                  : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state))
                      ? (((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rvalid_r)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rready)) 
                          & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__burstCnt)))))
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arvalid)
                          : 1U) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state))
                                    ? (2U & ((~ (((
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rvalid_r)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rready)) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_bvalid_r) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_bready)))) 
                                             << 1U))
                                    : ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rvalid)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_rvalid_r)) 
                                        | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_bvalid)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__clint_bvalid_r)))
                                        ? 0U : 3U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_3 = 0U;
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awsize;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wstrb;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awsize;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_3 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_rready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_1)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rresp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid)
               : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid)
               : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_9 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_T_8 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_10 
        = (1U & ((~ (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp)))) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_9)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_hec63a155__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_9)) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_bvalid;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_10) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_araddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arsize = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awaddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awsize = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wstrb = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_araddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__araddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arsize 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arsize;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awaddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awaddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awsize 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awsize;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wstrb 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_hec63a155__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_hec63a155__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__rready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_bready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_hec63a155__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__bready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_hec63a155__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgTmp_hec63a155__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AXI_AR_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AXI_R_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AXI_B_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AXI_AWW_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wvalid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nr_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__cr_state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__cr_state) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AXI_R_fire)))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AXI_AR_fire));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__cw_state)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__cw_state) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AXI_B_fire)))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__AXI_AWW_fire));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__8(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__wr_w)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wstrb)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_col_w 
        = (0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                     >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w 
        = (0x3fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
                      >> 0xcU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o)))) {
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w) 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w]))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o)))) {
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w) 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w]))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 6U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o))) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w) 
                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 2U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w) 
                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o)
                            ? 4U : 6U);
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_accept_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
            | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__push_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wready_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wready_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
               >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awready_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awready_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAWOI_in_0_awready_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arready_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_in_r = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_in_r 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready))
            ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen)) 
                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid)))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready))
                ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen)) 
                    << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid))
                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
                    << 5U) | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                               << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAROI_in_0_arready_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wlast) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAWOI_in_0_awready_T_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__data_in_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_in_r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAROI_in_0_arready_T_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_4 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_3)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arready;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__9(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                         ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | (((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                            ? 0xffffffffU
                                            : 0U) & 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                             ? 0xffffffffU
                                             : 0U) 
                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                                ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__dout
                                                : 0U) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                                  ? 0xffffffffU
                                                  : 0U)))) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                              ? 0xffffffffU
                                              : 0U) 
                                            & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                                 ? 0xffffffffU
                                                 : 0U) 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                                    ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__dout
                                                    : 0U) 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                                      ? 0xffffffffU
                                                      : 0U))))) 
                                        & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                             ? 0xffffffffU
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                               ? 0xffffffffU
                                               : 0U))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_i 
        = (0xffffU & (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
                      >> 0U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_i 
        = (0xffffU & (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
                      >> 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_i 
        = (0xffffU & (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
                      >> 0U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_i 
        = (0xffffU & (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
                      >> 0x10U));
    vlSelf->ysyxSoCFull__DOT___io_dq_wire = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___data_in_buf_din 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_dq = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dq = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dq 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_dq;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dq 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dq;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dq 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dq 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dq;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__dio 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dq;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__dio 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_input_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_input_i;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__10(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT____Vcellinp__asic__spi_miso 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__io_miso) 
           & (IData)(vlSelf->ysyxSoCFull__DOT___flash_miso));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__spi_miso = vlSelf->ysyxSoCFull__DOT____Vcellinp__asic__spi_miso;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_miso 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__spi_miso;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_miso 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_miso;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_miso;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i;
}

extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h8d938bf0_0;
extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hbbf24470_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__11(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wready)
                     : ((~ (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp)))) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready)
                     : ((~ (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp)))) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_8) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready)
                     : ((~ (IData)((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp)))) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_arready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_5 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_4 = 0U;
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_5 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awaddr;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_4) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arsize;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_araddr;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_arsize;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_araddr;
        }
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_5 
            = ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6) 
                      | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7))))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awaddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_awaddr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arsize;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_4 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_4)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_araddr
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__dmem_araddr);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_5 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_4 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__c_state))
            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__in_ready) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_valid))
                ? (1U | ((IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))) 
                         << 1U)) : 0U) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__c_state))
                                           ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__arvalid) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arready)) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awvalid) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awready)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__wvalid)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wready)))
                                               ? 2U
                                               : 1U)
                                           : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__c_state))
                                               ? (2U 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rvalid) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__rready)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bvalid) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__bready))))
                                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_in_ready) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__out_valid))
                                                   ? 0U
                                                   : 3U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
            ? (4U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rvalid) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__rready))) 
                     << 2U)) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_3)
                                     ? ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__issdram_raddr)) 
                                               | (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__count))))
                                         ? 4U : (2U 
                                                 | (1U 
                                                    & (~ 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arlen)))) 
                                                        & (0U 
                                                           != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__count)))))))
                                     : 3U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_1)
                                               ? (2U 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arready) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arvalid)))
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
                                                   ? 
                                                  (2U 
                                                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__hit0)) 
                                                      << 1U))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state)) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_arready) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__arvalid)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_6 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__n_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_24 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state))
            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_araddr
                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_araddr
                    : 0U)) : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state))
                               ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state))
                                   ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__issdram_raddr)
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__addr_align 
                                               + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___out_araddr_T_1) 
                                                  << 2U))
                                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc))
                               : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state))
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_araddr
                                   : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_4 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_7 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_5 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_13 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_6) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp)));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_10) 
                             << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_2) 
                                        << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_0) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__n_state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp_0 
        = VysyxSoCFull__ConstPool__TABLE_h8d938bf0_0
        [vlSelf->__Vtableidx1];
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_10) 
                             << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op) 
                                        << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_2) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_0) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__n_state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp_1 
        = VysyxSoCFull__ConstPool__TABLE_hbbf24470_0
        [vlSelf->__Vtableidx2];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_5) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__issdram_raddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_8 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_13;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arlen))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_3)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_13) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_5)) 
               & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_9 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_7) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_13));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_5) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_9));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_11 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_10)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_12 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_11)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_3)));
}

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__7(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__7(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__8(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VysyxSoCFull___024root___nba_sequent__TOP__9(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__10(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__11(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VysyxSoCFull___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(5U))) {
        VysyxSoCFull___024root___nba_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__13(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(9U) | vlSelf->__VnbaTriggered.at(0xaU))) {
        VysyxSoCFull___024root___nba_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U))) {
        VysyxSoCFull___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        VysyxSoCFull___024root___nba_comb__TOP__5(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(6U)) | vlSelf->__VnbaTriggered.at(7U))) {
        VysyxSoCFull___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__8(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(9U)) 
         | vlSelf->__VnbaTriggered.at(0xaU))) {
        VysyxSoCFull___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U)) 
          | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(5U))) {
        VysyxSoCFull___024root___nba_comb__TOP__10(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__11(vlSelf);
    }
}

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<11> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VysyxSoCFull___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7890, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VysyxSoCFull___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VysyxSoCFull___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VysyxSoCFull___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7890, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VysyxSoCFull___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7890, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VysyxSoCFull___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->externalPins_ps2_clk & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_clk");}
    if (VL_UNLIKELY((vlSelf->externalPins_ps2_data 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_data");}
    if (VL_UNLIKELY((vlSelf->externalPins_uart_rx & 0xfeU))) {
        Verilated::overWidthError("externalPins_uart_rx");}
}
#endif  // VL_DEBUG
