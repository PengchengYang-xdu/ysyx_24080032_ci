// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__37(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__37\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___io_rxc_source_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___io_txc_source_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_txc_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_rxc_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_widx;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT___widx_incremented_T 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin) 
                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT___widx_incremented_T;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT___widx_incremented_T;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx) 
                  != (0xcU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__io_q))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__unnamedblk2__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT___widx_incremented_T 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin) 
                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT___widx_incremented_T;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT___widx_incremented_T;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx) 
                  != (0xcU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__io_q))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__unnamedblk2__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT___widx_incremented_T 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin) 
                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT___widx_incremented_T;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT___widx_incremented_T;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx) 
                  != (0xcU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__io_q))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__unnamedblk2__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT___widx_incremented_T 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin) 
                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT___widx_incremented_T;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT___widx_incremented_T;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx) 
                  != (0xcU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__io_q))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__unnamedblk2__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT___widx_incremented_T 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin) 
                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT___widx_incremented_T;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT___widx_incremented_T;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented = 0U;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx 
            = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented)) 
               | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented) 
                        ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx_incremented) 
                           >> 1U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx) 
                  != (0xcU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__io_q))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__unnamedblk2__DOT__widx;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__io_q 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                  << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__io_q 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                  << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__io_q 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                  << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__io_q 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                  << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__io_q 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                  << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__io_d 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___io_e_source_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___io_d_source_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___io_c_source_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bwidx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bwidx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___io_bsource_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_widx 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___io_a_source_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_widx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_ready;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT)));
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
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwdata 
                                                          >> 0x14U)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwdata 
                                                           >> 0x10U)
                                                           : 
                                                          ((0xeU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                            ? 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwdata 
                                                            >> 0x1cU)
                                                            : 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwdata 
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
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwdata 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwdata 
                                                          >> 0x10U)
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwdata 
                                                           >> 0x1cU)
                                                           : 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwdata 
                                                           >> 0x18U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__ack 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__38(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__38\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_7 
        = (0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(IData/*31:0*/ id, IData/*31:0*/ bank_addr, IData/*31:0*/ row_addr, IData/*31:0*/ col_addr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
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
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__11__rdata);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__11__rdata;
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr)))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__9__rdata);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__9__rdata;
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr)))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__7__rdata);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__7__rdata;
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr)))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__5__rdata);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelf->__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__5__rdata;
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__39(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__39\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->externalPins_vga_valid = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__v_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT____Vcellinp__extract__io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__io_q_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT____Vcellinp__extract__io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__io_q_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_valid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_q_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE__DOT__io_e_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE__DOT__io_e_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_e_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE__DOT__io_e_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_ready) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_q_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_ready) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_valid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr 
        = (0x7ffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr) 
                       + ((IData)(0x280U) * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_v_addr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    } else {
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready 
            = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                         >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[0U]
            : ((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                             >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[1U]
                : ((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                 >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[2U]
                    : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                     >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[3U]
                        : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                         >> 2U))) ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                             >> 2U)))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q;
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q) 
                          >> 1U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i)))) {
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w) 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w]))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i)))) {
                    if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w) 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w]))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 6U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 2U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w))) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w) 
                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 2U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                    = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r = 9U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w) {
                if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_row_w) 
                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w]))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q) 
                                  >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_w)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 8U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r = 2U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo) 
            << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__io_i_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT____Vcellinp__extract__io_i_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T)
                   : 0U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T) 
                                >> 1U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__io_i_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT____Vcellinp__extract__io_i_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T)
                   : 0U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T) 
                                >> 1U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_e_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___chiplink_auto_mbypass_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_e_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_e_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_7)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_alloc_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_alloc_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T)
                   : 0U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T) 
                                >> 1U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_alloc_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_alloc_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T)
                   : 0U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T) 
                                >> 1U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
        = ((0x4afffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_accept_o 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
           | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out;
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
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out) 
                                                   >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_7 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T)
                   : 0U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T) 
                                >> 1U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_1_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T)
                   : 0U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T) 
                                >> 1U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT____Vcellinp__cam__io_alloc_bits)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_1_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___chiplink_auto_mbypass_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeOut_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_valid;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__req_accept 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_accept_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_accept_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__inport_accept_o;
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
              != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__io_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__io_q)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_e_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_e_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_c_clSource 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_d_clSource 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_d_clSource 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
              != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__io_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_c_clSource 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_d_clSource 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_d_clSource 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_c_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T_1) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__io_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_valid;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__reset_status 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask;
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
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata
                                                 : 0U) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q
                                                   : 0U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
              != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__io_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__io_q)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_penable)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__4\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__40(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__40\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h5e454d29__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback)
            ? ((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                        << 2U)) | ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 3U))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__modem_inputs));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_0;
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
    vlSelf->ysyxSoCFull__DOT___fpga_fpga_io_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fpga_io_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_io_out_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__fpga_io_b2c_rst 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__fpga_io_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT___asic_fpga_io_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fpga_io_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_io_out_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fpga_io_b2c_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fpga_io_b2c_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__fpga_io_b2c_rst;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_io_out_b2c_rst 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fpga_io_b2c_rst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_io_out_b2c_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fpga_io_b2c_rst;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_rst 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_io_out_b2c_rst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_rst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_io_out_b2c_rst;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__41(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__41\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__raddr = (
                                                   (0xfffffeU 
                                                    & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out));
    vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__raddr;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__6(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__6\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__42(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__42\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_e_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_d_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_c_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsafe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_bsafe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_a_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_txc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_io_rxc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_txc_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_rxc_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__43(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__43\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___rx_reset_reg_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__44(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__44\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_e_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_d_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_c_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsafe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_bsafe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_a_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_txc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_io_rxc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_txc_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_safe_widx_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_rxc_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_in 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_safe_widx_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_in;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__io_d;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__45(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__45\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT____Vcellinp__sink_extend__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___rx_reset_reg_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__reset;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__io_bypass 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__io_bypass 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__io_bypass;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__8(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__io_bypass 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__io_bypass 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__io_bypass 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__io_bypass;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__9(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__10(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT___io_deq_q_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty))) 
                 | (0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___atLeastTwo_T) 
                                   >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__io_enq_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__io_deq_valid)
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) 
                         & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT____Vcellinp__ram_ext__R0_addr;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__11(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__11\n"); );
    // Body
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready 
        = (1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                          | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)) 
                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6))))))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_penable)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___nodeIn_bvalid_T_2));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwrite) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)))) 
                        | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                  >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask))))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                       | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                          | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                   >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)))) 
                        | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                  >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1))))) 
                    & (((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                               << 2U)) | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                                 << 1U)) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                       | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rdata
                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rresp)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bresp)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                       : 0U));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_recho_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_0) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___GEN 
                    >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid) 
                                 << 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_6) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_recho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_recho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_recho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_recho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rlast 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_recho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_becho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__12(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__12\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___data_in_buf_din 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_dq = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dq = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__sdram_bundle_dq 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_dq;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dq 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dq;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dq 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_dq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__sdram_dq 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__sdram_bundle_dq;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__dio 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dq;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__dio 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_input_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__sdram_dq;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__13(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__13\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d 
        = (((0U == (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                              << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                        << 7U)))) ? 0U
             : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[
                (((IData)(0x1fU) + (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                              << 5U) 
                                             ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                << 7U)))) 
                 >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                   << 7U)))))) 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[
              (7U & ((0x7ffffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T)) 
                     ^ (0x7fffffcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                      << 2U))))] >> 
              (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                         << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                   << 7U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d 
        = (((0U == (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                              << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                        << 7U)))) ? 0U
             : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[
                (((IData)(0x1fU) + (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                              << 5U) 
                                             ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                << 7U)))) 
                 >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                   << 7U)))))) 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___GEN[
              (7U & ((0x7ffffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T)) 
                     ^ (0x7fffffcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                      << 2U))))] >> 
              (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___index_T) 
                         << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                   << 7U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d 
        = (((0U == (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                              << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                        << 7U)))) ? 0U
             : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[
                (((IData)(0x1fU) + (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                              << 5U) 
                                             ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                << 7U)))) 
                 >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                   << 7U)))))) 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[
              (7U & ((0x7ffffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T)) 
                     ^ (0x7fffffcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                      << 2U))))] >> 
              (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                         << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                   << 7U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d 
        = (((0U == (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                              << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                        << 7U)))) ? 0U
             : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[
                (((IData)(0x1fU) + (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                              << 5U) 
                                             ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                << 7U)))) 
                 >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                   << 7U)))))) 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___GEN[
              (7U & ((0x7ffffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T)) 
                     ^ (0x7fffffcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                      << 2U))))] >> 
              (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___index_T) 
                         << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                   << 7U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d 
        = (((0U == (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                              << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                        << 7U)))) ? 0U
             : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[
                (((IData)(0x1fU) + (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                              << 5U) 
                                             ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                << 7U)))) 
                 >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                   << 7U)))))) 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[
              (7U & ((0x7ffffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T)) 
                     ^ (0x7fffffcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                      << 2U))))] >> 
              (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                         << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                   << 7U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d 
        = (((0U == (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                              << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                        << 7U)))) ? 0U
             : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[
                (((IData)(0x1fU) + (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                              << 5U) 
                                             ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                << 7U)))) 
                 >> 5U)] << ((IData)(0x20U) - (0x1fU 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                                                   << 5U) 
                                                  ^ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                                   << 7U)))))) 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___GEN[
              (7U & ((0x7ffffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T)) 
                     ^ (0x7fffffcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                      << 2U))))] >> 
              (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___index_T) 
                         << 5U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
                                   << 7U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_d 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT____Vcellinp__io_deq_bits_deq_bits_reg__io_d;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__14(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__14\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__15(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__15\n"); );
    // Init
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_valid;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid;
    ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid;
    ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid = 0;
    VlWide<3>/*95:0*/ __Vtemp_h9efc9a6d__0;
    VlWide<3>/*95:0*/ __Vtemp_h95786579__0;
    VlWide<3>/*95:0*/ __Vtemp_h0a5da6a5__0;
    VlWide<3>/*95:0*/ __Vtemp_h058d9f8f__0;
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__in_reset)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass_reg));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_first));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) 
            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall_first));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
            ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgTmp_h84f1d1ee__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeOut_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgTmp_h84f1d1ee__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT____VdfgTmp_h84f1d1ee__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___a_repeater_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_first_T_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkA_io_q_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sa_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_denied 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__state_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT____VdfgTmp_hc0029b36__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__winner_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___nodeOut_a_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_0)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sa_valid;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_denied) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___error_auto_in_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__muxState_1 = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_corrupt 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___error_auto_in_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__muxState_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_source = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_opcode = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_corrupt = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_denied) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied = 1U;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size = 0U;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_valid;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_opcode;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_denied;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_valid;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___error_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__nodeIn_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_valid;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__idle) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___nodeOut_a_valid_T;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___error_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___nodeIn_d_bits_T_17 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___error_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___nodeIn_d_bits_T_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___error_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___nodeIn_d_bits_T_14 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___error_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___nodeIn_d_bits_T_22 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeOut_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode)
                : 4U) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_param)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
             ? ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1) 
                        << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                                                  << 2U) 
                                                 & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                                                    << 3U))))) 
                | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_1_1) 
                     | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))) 
                    << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1) 
                                | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))) 
                               << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_sub_0_1) 
                                         | (0U == (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
             ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_62) 
                     << 0x1fU) | ((0x40000000U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_60) 
                                                  << 0x1eU)) 
                                  | ((0x20000000U & 
                                      ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_58) 
                                       << 0x1dU)) | 
                                     ((0x10000000U 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_56) 
                                          << 0x1cU)) 
                                      | ((0x8000000U 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_54) 
                                             << 0x1bU)) 
                                         | ((0x4000000U 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_52) 
                                                << 0x1aU)) 
                                            | ((0x2000000U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_50) 
                                                   << 0x19U)) 
                                               | ((0x1000000U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_48) 
                                                      << 0x18U)) 
                                                  | ((0x800000U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_46) 
                                                         << 0x17U)) 
                                                     | ((0x400000U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_44) 
                                                            << 0x16U)) 
                                                        | ((0x200000U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_42) 
                                                               << 0x15U)) 
                                                           | ((0x100000U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_40) 
                                                                  << 0x14U)) 
                                                              | ((0x80000U 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_38) 
                                                                     << 0x13U)) 
                                                                 | ((0x40000U 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_36) 
                                                                        << 0x12U)) 
                                                                    | ((0x20000U 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_34) 
                                                                           << 0x11U)) 
                                                                       | ((0x10000U 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_32) 
                                                                              << 0x10U)) 
                                                                          | ((0x8000U 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_30) 
                                                                                << 0xfU)) 
                                                                             | ((0x4000U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_28) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_26) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_24) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_22) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_20) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_18) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_16) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_14) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_12) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_10) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_8) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_6) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_4) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T_2) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___logic_out_T)))))))))))))))))))))))))))))))))
                 : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___adder_out_T
                     : (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
                                     >> 0x1fU) == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext 
                                                   >> 0x1fU))
                                    ? (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___adder_out_T 
                                          >> 0x1fU))
                                    : ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
                                           >> 0x1fU)))))
                         ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data)))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                       ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                       ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxState_1) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported)) 
              | (IData)(vlSelf->__VdfgTmp_h1971fe3f__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_arw_bits_len_T_1 
        = (0x1ffffffU & ((IData)(0x3ffU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___rbeats1_decode_T_1 
        = (0x7fffffU & ((IData)(0xffU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_address 
        = (0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address 
        = (0x7fffffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid) 
           & (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                     >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_2 
        = (0U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                  >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_1 
        = (0U == ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                         >> 0x1eU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                                                >> 0x1eU)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id 
        = ((0x27fU >= (0x3ffU & ((IData)(5U) * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source))))
                          ? 0U : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN[
                                  (((IData)(4U) + (0x3ffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source)))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source)))))) 
                        | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN[
                           (0x1fU & (((IData)(5U) * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source))))))
            : 0U);
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__ram 
                               >> 0x31U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source 
            = (0x7fU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__ram 
                                >> 0x35U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen 
            = (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__ram 
                             >> 0x3cU)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id 
            = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__ram));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source 
            = (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id 
            = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id 
        = ((0x27fU >= (0x3ffU & ((IData)(5U) * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source))))
                          ? 0U : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN[
                                  (((IData)(4U) + (0x3ffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source)))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source)))))) 
                        | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN[
                           (0x1fU & (((IData)(5U) * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source))))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_wen 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_bits_wen 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_6) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_5) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_4) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_3) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_2) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_1) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_6 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_6)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_6) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_5 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_5)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_5) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_4)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_4) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_3 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_3)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_3) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_2)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_2) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_1 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_1)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_1) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__idle)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_valid_T)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__state_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__state_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__in_0_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___readys_filter_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                    ? (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                               >> 0x20U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram 
                               >> 0x20U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data 
            = (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram);
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_mask));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wstrb 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram)
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_data);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb)) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_bits_len 
        = (0xffU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_arw_bits_len_T_1 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_bits_echo_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_echo_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_echo_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size 
        = ((0U != (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size) 
                         >> 1U))) ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___rbeats1_decode_T_1 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_beats1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__r_beats1 = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_beats1 
            = (0x3fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___rbeats1_decode_T_1 
                           >> 2U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__r_beats1 
            = (7U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___rbeats1_decode_T_1) 
                        >> 2U)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size 
        = ((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_size) 
                         >> 1U))) ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___out_arw_bits_len_T_1 
        = (0x1ffffU & ((IData)(0x3ffU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                       >> 5U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source 
            = (0x7fU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                >> 0x36U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen 
            = (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                             >> 0x3dU)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                               >> 0x32U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id 
            = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                             >> 0x2dU)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram 
                                >> 0x25U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source 
            = (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_size));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id 
            = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen 
            = (0xffU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___out_arw_bits_len_T_1 
                           >> 2U)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_echo_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_bits_echo_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_1[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_1[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_1[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_1[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_0[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_0[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_0[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_0[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_1[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_1[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_1[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_1[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_echo_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_echo_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_wen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_wen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen;
    __Vtemp_h9efc9a6d__0[0U] = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h9efc9a6d__0[1U] = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h95786579__0[2U] = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                 << 0x1eU) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_0[0U] 
        = __Vtemp_h9efc9a6d__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_0[1U] 
        = __Vtemp_h9efc9a6d__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_0[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4) 
            << 0x1fU) | __Vtemp_h95786579__0[2U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_0[3U] 
        = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6))) 
            << 0x10U) | (0xffffU & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)))));
    __Vtemp_h0a5da6a5__0[0U] = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_1)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_22) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_21) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_20) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_19) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_18) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_17) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_16) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_15) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_14) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_13) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_12) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_11) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_10) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_9) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_7))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h0a5da6a5__0[1U] = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_1)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_22) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_21) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_20) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_19) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_18) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_17) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_16) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_15) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_14) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_13) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_12) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_11) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_10) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_9) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_7))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h058d9f8f__0[2U] = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                 << 0x1eU) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_3)))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_0[0U] 
        = __Vtemp_h0a5da6a5__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_0[1U] 
        = __Vtemp_h0a5da6a5__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_0[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4) 
            << 0x1fU) | __Vtemp_h058d9f8f__0[2U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_0[3U] 
        = (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_6))) 
            << 0x10U) | (0xffffU & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_5)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__winner_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__winner_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_valid));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__idle) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__winner_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__winner_0;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__state_0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wstrb;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wstrb;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wstrb;
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 0x20U)));
        vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wstrb 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wdata;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_wdata 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wdata;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wdata;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data 
            = (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram);
    } else {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_strb));
        vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wstrb 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wstrb 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wdata;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_wdata 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wdata;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wdata;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb)) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_beats1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full)
                  ? (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__ram 
                             >> 0x24U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_echo_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_echo_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_bits_len 
        = (0xffU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___out_arw_bits_len_T_1 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_araddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_araddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 4U)) : vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 4U)) : vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awaddr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_tl_state_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_tl_state_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id) 
                 >> 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_extra_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id) 
                 >> 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_id));
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2cU)));
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 0x24U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize));
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy_1) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_addr_1;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_id 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__ram)
                    : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2cU)));
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 0x24U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize));
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen));
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_addr;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len;
    } else {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_id 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__ram)
                    : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_0[
            ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
             >> 5U)] >> (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_first));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__stall 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_0[
            ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source) 
             >> 5U)] >> (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_a_bits_source))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__a_first));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wstrb;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wdata;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__r_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__r_beats1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full)
                  ? (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__ram 
                             >> 0x24U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__a_last)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                  ? (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                             >> 0x24U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_tl_state_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_tl_state_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_arlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___out_bits_addr_T 
        = (~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___out_bits_addr_T_7 
        = (~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_awecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_awecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_awecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_awecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id) 
            << 0xbU) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_source) 
                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_tl_state_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h3deb4dd1__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_5) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h6bd82316__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_awecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_extra_id) 
            << 0xbU) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_source) 
                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_tl_state_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h6bd82316__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h3deb4dd1__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_5) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_h002a1e6f__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_ready)
               : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_wvalid_T_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hbcc272f1__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__stall)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_ready)
               : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___out_wvalid_T_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_sink)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1) 
                      << 5U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_param)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_param)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_data
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_denied)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_denied)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_corrupt)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_bits_opcode)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__a_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_arsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_arsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___out_bits_addr_T_2 
        = (0x1ffU & ((IData)(3U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___out_bits_addr_T_9 
        = (0x1ffU & ((IData)(3U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_arlen 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_arlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_arlen;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_araddr 
        = (~ ((0xfffffffcU & vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___out_bits_addr_T) 
              | (3U & ((~ ((IData)(3U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size))) 
                       | vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___out_bits_addr_T))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awaddr 
        = (~ ((0xfffffffcU & vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___out_bits_addr_T_7) 
              | (3U & ((~ ((IData)(3U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size))) 
                       | vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___out_bits_addr_T_7))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h3deb4dd1__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h6bd82316__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arecho_extra_id;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_awid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_arid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_arid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_arid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h6bd82316__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h3deb4dd1__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_h002a1e6f__0) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_wvalid_T_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_h002a1e6f__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0) 
              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__doneAW)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_ready))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeIn_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hbcc272f1__0) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___out_wvalid_T_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__out_arw_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hbcc272f1__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0) 
              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__doneAW)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_ready))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeIn_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_ready 
        = (((3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_a_bits_address 
                    >> 0x1eU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_a_ready)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_a_ready)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_enq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__requestAIO_0_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_bits_T_11 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_bits_T_20 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_bits_T_17 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___d_last_beats1_decode_T_1 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_bits_T_8 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_bits_T_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_corrupt) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_denied)) 
           << 1U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_bits_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_bits_T_14 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__ram) 
                     >> 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source) 
                     >> 3U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___in_0_d_bits_T_23 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode));
    ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode));
    ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_valid));
    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_ready;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1 
            = (7U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___d_last_beats1_decode_T_1) 
                        >> 2U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_ready;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_arsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awsize;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_arecho_real_last 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len)))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awecho_real_last 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1)))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_araddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_araddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awready)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_arid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awready)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__nodeOut_wdeq_q__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__out_arw_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__out_arw_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__out_arw_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___portsAOI_in_0_a_ready_T_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_a_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__idle)
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_0))
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_bits_data;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data 
            = (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                       >> 1U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_denied;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_bits_resp 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___GEN_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_rdata 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_denied;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_resp 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_bits_resp 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___GEN_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_bits_source) 
                     >> 3U));
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_extra_id 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_deq_bits_extra_id;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_real_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_deq_bits_real_last;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_extra_id 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_deq_bits_extra_id;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_real_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_deq_bits_real_last;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_bid = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_extra_id 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_bits_extra_id;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_bits_real_last;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_bits_id = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_bid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_extra_id 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_bits_extra_id;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_bits_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_release_ack 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_release_ack;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_valid 
        = ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) 
           | (IData)(ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_valid 
        = ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__full) 
           | (IData)(ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_out_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__idle)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__idle)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wlast;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wlast;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___in_wdeq_q_io_deq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_arecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_arecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_arecho_real_last)) 
            << 0x24U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_araddr)) 
                          << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_id))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_arecho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_ready));
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_awecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT____Vcellinp__ram_ext__W0_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awecho_real_last)) 
            << 0x24U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awaddr)) 
                          << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_id))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awecho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_awready));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_araddr;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awaddr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_wdeq_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_7 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_8 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_9 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_10 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_11 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_12 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_13 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_14 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_15 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_16 
        = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_17 
        = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_18 
        = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_19 
        = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_20 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_21 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_22 
        = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___queue_arw_deq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_1 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_3 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_4 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_5 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_6 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_7 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_8 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_9 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_10 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_11 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_12 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_13 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_14 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_15 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_16 
        = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_17 
        = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_18 
        = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_19 
        = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_20 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_21 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_22 
        = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___inc_T_22));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_bits_wen) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_beats1)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp 
            = (3U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                             >> 0x21U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last 
            = (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__ram 
                             >> 0x23U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_resp));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_resp) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_1)
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__error_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_recho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_recho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_recho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_recho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_recho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_rid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_extra_id) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_recho_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_recho_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_becho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_becho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_becho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_becho_extra_id 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_extra_id;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_bid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_extra_id) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_becho_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_becho_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___q_bdeq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_1_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__da_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT____VdfgTmp_hec6944b2__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_0_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_bits_echo_real_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_bits_echo_real_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_wvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h3deb4dd1__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____VdfgTmp_h6bd82316__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_wvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_wvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h6bd82316__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h3deb4dd1__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__nodeIn_rdeq_q__io_enq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__nodeOut_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q_io_deq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_last)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__da_ready) 
                    & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__r_counter)) 
                        | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__r_beats1))) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__idle)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sbypass_auto_node_out_out_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_valid)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)) 
                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_ready))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT____VdfgTmp_hc0029b36__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_7__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_8__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_9__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_10__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_11__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_12__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_13__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_1__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_2__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_3__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_4__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_5__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_6__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_4) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_1__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_2__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_3__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_4__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_5__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_6__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_4) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_7__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_8__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_9__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_10__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_11__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_12__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_13__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_12) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__anonIn_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rlast 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_recho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_enq_ready) 
              & (IData)(ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____Vcellinp__q_bdeq_q__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_bvalid;
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_3));
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_3) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_q__DOT__io_deq_bits_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q_io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_q_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_q_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_valid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_ready) 
                    & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_counter)) 
                        | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_beats1))) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_awvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_9__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_7__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_7__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_8__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_8__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_9__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_9__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_10__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_10__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_11__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_11__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_12__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_12__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_13__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_13__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_arvalid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_1__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_2__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_3__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_4__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_5__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_6__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_7__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_1__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_1__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_2__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_2__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_3__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_3__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_4__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_4__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_5__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_5__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_6__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_6__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_arvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_arvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_1__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_1__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_2__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_2__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_3__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_3__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_4__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_4__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_5__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_5__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_6__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_6__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___deq_q_1_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_7__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_7__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_8__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_8__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_9__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_9__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_10__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_10__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_11__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_11__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_12__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_12__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_13__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_13__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___a_repeater_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_out_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_2__DOT__auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_ready 
        = ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_ready 
        = ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___clr_T) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT____Vcellinp__cam__io_alloc_bits)
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__Memory
           [0U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T)
                   : 0U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T) 
                                >> 1U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT____VdfgTmp_h4436d783__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___error_auto_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__nodeIn_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_ready)
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_arvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__nodeOut_awvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_todo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_idle)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_idle)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkE__DOT__io_d_clSink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_e_clSink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_e_clSink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkE__DOT__io_q_bits_data 
        = (4U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_data) 
                 << 0x10U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___index_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_sbypass_node_in_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__nodeIn_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_ready 
        = (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
             >> 0x1eU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_ready)) 
           | ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                  >> 0x1eU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_awvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wlast 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_todo));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkE_io_q_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkE__DOT__io_q_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_se_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkE__DOT__io_q_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
              != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__io_q)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT___portsAOI_in_0_a_ready_T_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_wdeq_q__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__nodeOut_wvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_q_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_q_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_valid))));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_alloc_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_alloc_valid 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_alloc_valid 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_alloc_valid 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_alloc_valid 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_alloc_valid 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_alloc_valid 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_alloc_valid 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____VdfgTmp_h7298eac2__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_se_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_in_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__anonIn_a_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__idle)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__idle)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wlast;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_wvalid;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wcounter_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T)
                   : 0U) ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T) 
                                >> 1U) : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT____VdfgTmp_h4436d783__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_alloc_valid 
        = ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_alloc_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_alloc_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_q__DOT__full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wlast) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wvalid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT____VdfgTmp_h4436d783__0) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___index_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___clr_T) 
            & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source)) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_key)))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_arecho_real_last));
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1));
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_wready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wcounter_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeIn_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_awready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
              != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__io_q)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___cams_0_io_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___cams_1_io_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___cams_2_io_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___cams_3_io_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___cams_4_io_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___cams_5_io_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___cams_6_io_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___cams_7_io_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_data) 
            << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[1U] 
        = (((0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_data)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_data) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_data) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_data)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_data) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_data)))))) 
                             << 0x10U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[2U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_data) 
                                        << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_data)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_data) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_data)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_data) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_data)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_data) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_data))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_data) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_data) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_data)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_data) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_data))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_valid 
        = ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__empty)) 
                 | (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_valid 
        = ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_ready) 
           & (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__empty)) 
                 | (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_1__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_awready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___in_awready_T));
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_4));
    ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__io_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_d_clSource 
        = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                        << 1U))) ? 0U
                        : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                           (((IData)(0xfU) + (0x70U 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                 << 1U))) 
                            >> 5U)] << ((IData)(0x20U) 
                                        - (0x10U & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                            << 1U))))) 
                      | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1[
                         (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                >> 4U))] >> (0x10U 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                                << 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___Queue4_BundleMap_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___Queue4_BundleMap_1_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awecho_real_last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_valid 
        = ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty) 
               & (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_ready) 
              & (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
                 | (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_valid 
        = ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty) 
               & (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_ready) 
              & (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
                 | (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_clSource 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_d_clSource;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_d_clSource 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_d_clSource;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header 
        = (3U | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__relack)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_data)
                    : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_d_clSource)) 
                  << 0x10U) | ((0xe000U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                                           << 0xaU)) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size) 
                                   << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_denied) 
                                              << 8U) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param) 
                                                 << 6U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode) 
                                                   << 3U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___Queue4_BundleMap_2_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)) 
           & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_2__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___Queue4_BundleMap_3_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)) 
           & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT____Vcellinp__Queue4_BundleMap_3__io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___GEN[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___GEN[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___GEN[2U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_data))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___GEN[3U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__header)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_data))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_data 
        = (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
                             << 5U))) ? 0U : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___GEN[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
                                                      << 5U))))) 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___GEN[
              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))] 
              >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
                           << 5U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkD_io_q_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sd_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sd_bits_data;
}
