// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___ico_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        VysyxSoCFull___024root___ico_sequent__TOP__1(vlSelf);
    }
}

void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_act\n"); );
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__ebreak__DOT__npc_trap_TOP();
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arsize = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awsize = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arlen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_2 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_3 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arlen = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arsize 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arlen = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arlen 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_4)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arlen)
                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_arlen));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_4;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awsize 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_5;
        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_index_T_2))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_1 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_23);
        }
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_index_T_2))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_2 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_23);
        }
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_index_T_2))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_3 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_23);
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_index_T_2))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_0 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_23);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_5) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_11)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex = 2U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_3) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arlen = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_4) 
                             | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_6)))))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arlen = 3U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awvalid)
                  : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_6))) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_7) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awvalid))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst)) 
                << 0x2fU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize)) 
                              << 0x2cU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr)) 
                                               << 4U) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
                   + (0xffffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize))));
            if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT___wrapMask_T_1 
                    = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len) 
                                              << 8U)) 
                                    << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT___mux_addr_T_1 
                    = (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr 
                    = ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT___wrapMask_T_1 
                                      >> 8U))) | (~ 
                                                  ((0xffff8000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT___mux_addr_T_1) 
                                                   | (0x7fffU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT___mux_addr_T_1 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT___wrapMask_T_1 
                                                            >> 8U))))));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1;
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len) 
                        - (IData)(1U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
            = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst)) 
                << 0x2fU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize)) 
                              << 0x2cU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen)) 
                                            << 0x24U) 
                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr)) 
                                               << 4U) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_10 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_11 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_15 = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state = 0U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo) 
                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___wcounter_T)));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq) 
             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy 
                = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_ready) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready_r)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise)));
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_psel) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___io_in_prdata_T)) 
              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable))) {
            if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr) 
                               - (IData)(1U)));
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_10;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_10 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_11;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_11 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14;
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_15;
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_10 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_11 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
                 & (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__unnamedblk1__DOT__ready_rise) 
             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_15 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__n_state;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT___inc_addr_T_3 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   + (0xffffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize))));
            if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT___wrapMask_T_3 
                    = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len) 
                                              << 8U)) 
                                    << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT___mux_addr_T_6 
                    = (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 
                    = ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT___inc_addr_T_3 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT___wrapMask_T_3 
                                      >> 8U))) | (~ 
                                                  ((0xffff8000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT___mux_addr_T_6) 
                                                   | (0x7fffU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT___mux_addr_T_6 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT___wrapMask_T_3 
                                                            >> 8U))))));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk5__DOT___inc_addr_T_3;
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1) 
                        - (IData)(1U)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__lfsr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__lfsr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__delay 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__delay;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__lfsr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__lfsr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__delay 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__delay;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_0_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_0_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__y_cnt 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__y_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[5U] = 0x16f6ea0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[4U] = 0x79737978U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[0U] = 0x1800U;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[2U] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v1;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v0))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v1))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v2))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v2))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v3))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory__v3))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_1_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_3_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_0_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_4_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_13_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_2_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_5_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_15_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_6_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_7_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_8_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_9_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_10_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_11_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_2_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_12_set_2_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_1_valid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_14_set_1_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__burstCnt 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__burstCnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__w_ptr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__w_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__ready 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__r_ptr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__r_ptr;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__fifo[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__fifo__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__counter 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v0))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v1))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v2))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                [vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory__v3))));
    }
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rvalid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arvalid 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__count 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_0 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_2 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_3 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_4 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_5 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_6 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_7 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__counter 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__sampling 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__ps2_clk_sync))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__delay));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__out_valid;
    vlSelf->__VdfgTmp_h954d37b3__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__in_ready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__delay));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_arready;
    vlSelf->externalPins_vga_vsync = (2U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__y_cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__v_valid 
        = ((0x23U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__y_cnt)) 
           & (0x203U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__y_cnt)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mtvec 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
        [1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mepc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
        [2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_o 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
            [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [2U] << 0x10U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_prdata 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
            [0U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [1U] << 0x10U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 8U) 
                                                 | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_paddr_T_12 
        = (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_penable_T_2 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5 
        = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rready)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_5) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_rready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___GEN 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
            << 0x1eU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                          << 0x1cU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in;
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_22 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___nodeIn_bvalid_T_2 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_21 
        = (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
            ? 0U : 3U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
            ? 0U : 3U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgTmp_hacba2637__0 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__rdata 
                                                     >> 0x18U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__n_state 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__c_state)
                  ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__out_valid)))
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__out_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__in_ready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_1 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wstrb 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__wstrb));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wdata 
        = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__wdata);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last 
            = (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                             >> 0x24U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 0x20U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wlast));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wstrb));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isclint_waddr 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awaddr 
                   >> 0x19U)) & (0x2010000U > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__awaddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isclint_raddr 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__araddr 
                   >> 0x19U)) & (0x2010000U > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__araddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rvalid;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__hit0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__ways_hit;
    }
    vlSelf->externalPins_gpio_out = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_led;
    vlSelf->externalPins_gpio_seg_0 = (0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                      << 3U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x78U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                        << 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       << 3U))))) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       << 3U)))));
    vlSelf->externalPins_gpio_seg_1 = (0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                      >> 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x78U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                        >> 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 1U))))) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 6U))] 
                                                   >> 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 1U)))));
    vlSelf->externalPins_gpio_seg_2 = (0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                      >> 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x78U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                        >> 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 5U))))) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0xaU))] 
                                                   >> 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 5U)))));
    vlSelf->externalPins_gpio_seg_3 = (0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                      >> 9U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x78U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                        >> 9U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 9U))))) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0xeU))] 
                                                   >> 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 9U)))));
    vlSelf->externalPins_gpio_seg_4 = (0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                      >> 0xdU)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x78U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                        >> 0xdU))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0xdU))))) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x12U))] 
                                                   >> 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0xdU)))));
    vlSelf->externalPins_gpio_seg_5 = (0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                      >> 0x11U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x78U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                        >> 0x11U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x11U))))) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x16U))] 
                                                   >> 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x11U)))));
    vlSelf->externalPins_gpio_seg_6 = (0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                      >> 0x15U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x78U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                        >> 0x15U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x15U))))) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x1aU))] 
                                                   >> 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x15U)))));
    vlSelf->externalPins_gpio_seg_7 = (0xffU & (((0U 
                                                  == 
                                                  (0x18U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                      >> 0x19U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x78U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                        >> 0x19U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x19U))))) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                    >> 0x1eU)] 
                                                   >> 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x19U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__c_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___out_araddr_T_1 
        = (7U & ((IData)(4U) - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext 
        = (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                                                         >> 7U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                    >> 7U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                    >> 0xfU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr 
        = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                    >> 0x14U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_87 
        = (0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_89 
        = (0x30200073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67 
        = (0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_71 
        = (0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_73 
        = (0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN 
        = ((0x380U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                      >> 5U)) | (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
            << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                         << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                      << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id;
    vlSelf->__VdfgTmp_hf132a334__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[4U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[5U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[6U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_7)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_6))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[7U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_7)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__temp_rdata_6))) 
                   >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_1[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_1) 
            << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_1[1U] 
        = (((0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_2)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_1) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_6) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_5)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_4) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_3)))))) 
                             << 0x10U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_1[2U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_6) 
                                        << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_5)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_4) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_3)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_6) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_5)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_4) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_3))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_1[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_7) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_6) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_5)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_4) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_3))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_bvalid_T 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_6 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
            << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                         << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                      << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_idle 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr 
                                                   >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11 
        = (0xfU & (0xaU ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr 
                           >> 0x1cU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awsize;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst 
            = (3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2fU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 0x24U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2cU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 4U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awburst));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awlen));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awsize));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr 
                                                   >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11 
        = (0xfU & (0xaU ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr 
                           >> 0x1cU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__n_state 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__c_state)
                  ? (~ (IData)(vlSelf->__VdfgTmp_h954d37b3__0))
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__in_ready) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__out_valid))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__n_state 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__c_state)
                  ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__out_valid) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__in_ready)))
                  : (IData)(vlSelf->__VdfgTmp_h954d37b3__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___lsu_io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_out_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_in_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_in_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_in_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___lsu_io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_arready;
    vlSelf->ysyxSoCFull__DOT__externalPins_vga_vsync 
        = vlSelf->externalPins_vga_vsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__vga_vsync 
        = vlSelf->externalPins_vga_vsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_vsync 
        = vlSelf->externalPins_vga_vsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_vsync 
        = vlSelf->externalPins_vga_vsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vsync 
        = vlSelf->externalPins_vga_vsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_v_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__v_valid)
            ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__y_cnt) 
                         - (IData)(0x24U))) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_csr_mtvec 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___csr_io_csr_mtvec 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_csr_mepc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___csr_io_csr_mepc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_prdata_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__line 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lmrom_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lmrom_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_8;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_9;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_10 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_10;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_11 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_11;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_12;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_13;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_14;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_15 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_15;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__r_ptr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___ram_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_bresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lmrom_auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_awburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rresp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rresp;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_reset_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arvalid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_arburst 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arburst;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_out 
        = vlSelf->externalPins_gpio_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_out = vlSelf->externalPins_gpio_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_out 
        = vlSelf->externalPins_gpio_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_out 
        = vlSelf->externalPins_gpio_out;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_seg_0 
        = vlSelf->externalPins_gpio_seg_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_seg_0 
        = vlSelf->externalPins_gpio_seg_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_0 
        = vlSelf->externalPins_gpio_seg_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_0 
        = vlSelf->externalPins_gpio_seg_0;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_seg_1 
        = vlSelf->externalPins_gpio_seg_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_seg_1 
        = vlSelf->externalPins_gpio_seg_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_1 
        = vlSelf->externalPins_gpio_seg_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_1 
        = vlSelf->externalPins_gpio_seg_1;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_seg_2 
        = vlSelf->externalPins_gpio_seg_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_seg_2 
        = vlSelf->externalPins_gpio_seg_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_2 
        = vlSelf->externalPins_gpio_seg_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_2 
        = vlSelf->externalPins_gpio_seg_2;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_seg_3 
        = vlSelf->externalPins_gpio_seg_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_seg_3 
        = vlSelf->externalPins_gpio_seg_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_3 
        = vlSelf->externalPins_gpio_seg_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_3 
        = vlSelf->externalPins_gpio_seg_3;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_seg_4 
        = vlSelf->externalPins_gpio_seg_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_seg_4 
        = vlSelf->externalPins_gpio_seg_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_4 
        = vlSelf->externalPins_gpio_seg_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_4 
        = vlSelf->externalPins_gpio_seg_4;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_seg_5 
        = vlSelf->externalPins_gpio_seg_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_seg_5 
        = vlSelf->externalPins_gpio_seg_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_5 
        = vlSelf->externalPins_gpio_seg_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_5 
        = vlSelf->externalPins_gpio_seg_5;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_seg_6 
        = vlSelf->externalPins_gpio_seg_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_seg_6 
        = vlSelf->externalPins_gpio_seg_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_6 
        = vlSelf->externalPins_gpio_seg_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_6 
        = vlSelf->externalPins_gpio_seg_6;
    vlSelf->ysyxSoCFull__DOT__externalPins_gpio_seg_7 
        = vlSelf->externalPins_gpio_seg_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__gpio_seg_7 
        = vlSelf->externalPins_gpio_seg_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_7 
        = vlSelf->externalPins_gpio_seg_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_7 
        = vlSelf->externalPins_gpio_seg_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lmrom_auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__counter)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_index_T_2 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___out_araddr_T_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_imm_b_sext 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_imm_b_sext 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_wb_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_wb_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_wb_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_wb_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_wb_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_wb_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_wb_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_gpr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
            = (3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2fU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 4U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2cU)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arburst));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_araddr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arsize));
    }
    if ((0x100073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata)) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__ebreak__DOT__npc_trap_TOP();
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arvalid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_arlen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arlen;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)
                     ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 0x24U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arlen)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_inst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_inst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_inst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_gpr_rs1_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs1_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_gpr_rs2_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_87) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_89) 
              | (0x100073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_71) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_73));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75 
        = (0xf3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77 
        = (0x2f3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79 
        = (0x173U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81 
        = (0x373U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83 
        = (0x1f3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85 
        = (0x3f3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69 
        = (0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29 
        = (0x393U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31 
        = (0x313U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33 
        = (0x213U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_51 
        = (0x113U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_53 
        = (0x193U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_55 
        = (0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_57 
        = (0xe3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_59 
        = (0x2e3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_61 
        = (0x3e3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_63 
        = (0x263U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_65 
        = (0x363U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19 
        = (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_15 
        = (0xa3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1 
        = (0x103U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3 
        = (0x123U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7 
        = (0x83U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9 
        = (0x203U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11 
        = (0x283U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_13 
        = (0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0 
        = ((0x1fc00U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                        >> 0xfU)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_15_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_15_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_15_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_14_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_14_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_14_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_13_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_13_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_13_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_12_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_12_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_12_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_11_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_11_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_11_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_10_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_10_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_10_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_9_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_9_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_9_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_8_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_8_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_8_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_7_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_7_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_7_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_6_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_6_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_6_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_5_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_5_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_5_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_4_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_4_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_4_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_3_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_3_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_3_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_2_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_2_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_2_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_1_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_1_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_1_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_ready) 
            << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_ready) 
                         << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_ready) 
                                      << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_ready) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_ready) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_ready) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_ready) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_ready) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_ready) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_ready) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_ready) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_ready) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_ready) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_ready))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelf->__VdfgTmp_hf132a334__0 : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_31_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_31_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_31_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_30_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_30_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_30_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_29_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_29_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_29_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_28_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_28_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_28_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_27_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_27_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_27_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_26_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_26_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_26_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_25_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_25_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_25_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_24_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_24_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_24_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_23_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_23_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_23_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_22_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_22_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_22_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_21_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_21_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_21_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_20_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_20_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_20_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_19_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_19_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_19_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_18_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_18_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_18_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_17_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_17_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_17_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_16_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_16_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_16_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_ready) 
            << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_ready) 
                         << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_ready) 
                                      << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_ready) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_ready) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_ready) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_ready) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_ready) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_ready) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_ready) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_ready) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_ready) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_ready) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_ready))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_idle) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_2 
        = (0x1ffU & ((IData)(3U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_id 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_9 
        = (0x1ffU & ((IData)(3U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__v_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_v_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_dmem_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__nextdata_n 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_ready 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rdata 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                  ? (vlSelf->__VdfgTmp_hf132a334__0 
                     >> 0x18U) : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
            << 0x18U) | ((0xff0000U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                             ? (vlSelf->__VdfgTmp_hf132a334__0 
                                                >> 0x10U)
                                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                       << 0x10U)) | 
                         ((0xff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                            ? (vlSelf->__VdfgTmp_hf132a334__0 
                                               >> 8U)
                                            : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                      << 8U)) | (0xffU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? vlSelf->__VdfgTmp_hf132a334__0
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arburst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arburst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_224 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_226 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__emptyIndex));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pready)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___nodeIn_bvalid_T_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_23 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_index_T_2))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_0
            : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_index_T_2))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_1
                : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_index_T_2))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_2
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__icache_wdata_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__ebreak__DOT__inst 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_inst;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs1_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77));
    vlSelf->__VdfgTmp_h06110412__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_51) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_53));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_55) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_57) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_59) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_61) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_63) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_65))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_9 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_15));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21 
        = (0x8033U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23 
        = (0x3b3U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25 
        = (0x333U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27 
        = (0x233U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35 
        = (0xb3U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37 
        = (0x2b3U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39 
        = (0x82b3U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41 
        = (0x93U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43 
        = (0x293U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45 
        = (0x8293U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47 
        = (0x133U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49 
        = (0x1b3U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17 
        = (0x33U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_rdata_T 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_3) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN 
        = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last) 
                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_22)) 
            << 0xfU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last) 
                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_22)) 
                         << 0xeU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_22)) 
                                      << 0xdU) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_22)) 
                                                   << 0xcU) 
                                                  | (((((0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_22)) 
                                                      << 0xbU) 
                                                     | (((((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_22)) 
                                                         << 0xaU) 
                                                        | (((((0U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_22)) 
                                                            << 9U) 
                                                           | (((((0U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_22)) 
                                                               << 8U) 
                                                              | (((((0U 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last) 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_22)) 
                                                                  << 7U) 
                                                                 | (((((0U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last) 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_22)) 
                                                                     << 6U) 
                                                                    | (((((0U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last) 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_22)) 
                                                                        << 5U) 
                                                                       | (((((0U 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_22)) 
                                                                           << 4U) 
                                                                          | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_22)) 
                                                                              << 3U) 
                                                                             | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_22)) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_22)) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_22)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T 
        = (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awsize 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awsize;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 
        = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last) 
                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_21)) 
            << 0xfU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last) 
                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_21)) 
                         << 0xeU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_21)) 
                                      << 0xdU) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_21)) 
                                                   << 0xcU) 
                                                  | (((((0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_21)) 
                                                      << 0xbU) 
                                                     | (((((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_21)) 
                                                         << 0xaU) 
                                                        | (((((0U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_21)) 
                                                            << 9U) 
                                                           | (((((0U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_21)) 
                                                               << 8U) 
                                                              | (((((0U 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_21)) 
                                                                  << 7U) 
                                                                 | (((((0U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_21)) 
                                                                     << 6U) 
                                                                    | (((((0U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_21)) 
                                                                        << 5U) 
                                                                       | (((((0U 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_21)) 
                                                                           << 4U) 
                                                                          | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_21)) 
                                                                              << 3U) 
                                                                             | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_21)) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_21)) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_21)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_7 
        = (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_ready) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___anonIn_awready_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_ready) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wstrb_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___gpr_io_gpr_rs1_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_gpr_rs2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_rs2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_rs2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___gpr_io_gpr_rs2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_rs2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_rs2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_rs2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_rs2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0)
            ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5)
                     ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7)
                              ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9)
                                       ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11)
                                                ? 5U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_13)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_15)
                                                     ? 1U
                                                     : 7U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_5) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_7) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_9) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_11) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_13) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_15) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1)
             ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)
                      ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_9)
                               ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8)
                                        ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                  ? 0U
                                                  : 
                                                 (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_7)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                          ? 4U
                                                          : 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)
                                                            ? 4U
                                                            : 
                                                           (0U 
                                                            & (~ 
                                                               (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1)
                 ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)
                          ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_9)
                                   ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8)
                                            ? 2U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17)
                                             ? 0U : 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19)
                                              ? 2U : 
                                             (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_7)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)
                                                           ? 0U
                                                           : 
                                                          (0U 
                                                           & (~ 
                                                              (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1)
                          ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)
                                   ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_9)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8)
                                             ? 1U : 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17)
                                              ? 1U : 
                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19)
                                               ? 0U
                                               : ((
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                   ? 1U
                                                   : 
                                                  ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                     ? 1U
                                                     : 
                                                    ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_7)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)
                                                            ? 1U
                                                            : 
                                                           (1U 
                                                            & (~ 
                                                               (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                         ? (0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata)
                         : (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                                         >> 0x1fU))) 
                             << 0x14U) | ((0xff000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata) 
                                          | ((0x800U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                                                   >> 0x14U)))))))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1)
                 ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)
                          ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_9)
                                   ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8)
                                            ? 2U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17)
                                             ? 0U : 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19)
                                              ? 2U : 
                                             (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_7)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)
                                                           ? 0U
                                                           : 
                                                          (0U 
                                                           & (~ 
                                                              (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1)
                     ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)
                              ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_9)
                                       ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8)
                                                ? 1U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                     ? 0U
                                                     : 
                                                    (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                      ? 1U
                                                      : 
                                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                       ? 0U
                                                       : 
                                                      ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                        ? 1U
                                                        : 
                                                       ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_7)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5)
                                                            ? 1U
                                                            : 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)
                                                               ? 1U
                                                               : 
                                                              (1U 
                                                               & (~ 
                                                                  (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                    ? (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rdata 
                          >> 0x14U))) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1)
                                           ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_9)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                        ? 0U
                                                        : 
                                                       (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                         ? 1U
                                                         : 
                                                        ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                          ? 0U
                                                          : 
                                                         ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                           ? 1U
                                                           : 
                                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                            ? 0U
                                                            : 
                                                           (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                             ? 1U
                                                             : 
                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_7)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5)
                                                               ? 1U
                                                               : 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                                 ? 0U
                                                                 : 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)
                                                                  ? 1U
                                                                  : 
                                                                 (1U 
                                                                  & (~ 
                                                                     (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data
                                          : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_51) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_53) 
                                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5)))))))))))))))))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 1U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_9) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_8)
                ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_17) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_19) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_7))))))))))))))))))
                         ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_5)
                                  ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_71) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_73) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_2)))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_6)
                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0)
                         ? 2U : ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_2)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)))
                                  ? 0U : 3U)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rdata 
        = ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_read)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_rdata_T)))
            ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_2[
           (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in))]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
        = (~ ((0xfffffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T) 
              | (3U & ((~ ((IData)(3U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize))) 
                       | vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
        = (~ ((0xfffffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_7) 
              | (3U & ((~ ((IData)(3U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize))) 
                       | vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_7))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arecho_real_last 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___anonIn_awready_T) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0) 
              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wstrb_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wstrb_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_mem_op 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_mem_op 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_mem_op 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_mem_op 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_op 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_10 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_mem_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_mem_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_mem_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_mem_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__isL 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__isS 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0)
            ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21)
                     ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23)
                              ? 3U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25)
                                       ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27)
                                                ? 5U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37)
                                                        ? 7U
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39)
                                                         ? 8U
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41)
                                                          ? 6U
                                                          : 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43)
                                                           ? 7U
                                                           : 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45)
                                                            ? 8U
                                                            : 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47)
                                                             ? 9U
                                                             : 
                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49)
                                                              ? 0xaU
                                                              : 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_51)
                                                               ? 9U
                                                               : 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_53)
                                                                ? 0xaU
                                                                : 
                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_55)
                                                                 ? 0xbU
                                                                 : 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_57)
                                                                  ? 0xcU
                                                                  : 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_59)
                                                                   ? 0xeU
                                                                   : 
                                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_61)
                                                                    ? 0x10U
                                                                    : 
                                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_63)
                                                                     ? 0xdU
                                                                     : 
                                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_65)
                                                                      ? 0xfU
                                                                      : 
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                                       ? 1U
                                                                       : 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                                        ? 0x11U
                                                                        : 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)
                                                                         ? 1U
                                                                         : 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_2)
                                                                          ? 0x12U
                                                                          : 0U))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h1340a9a0__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_23) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_25) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_27) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_51) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_53) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_55) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_57) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_59) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_61) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_63) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_65) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_67) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_69) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_3)))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___GEN 
        = (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__casez_tmp_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h3f210cd0__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_addr 
        = (0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                     >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_araddr 
        = (0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_araddr 
        = (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                                                >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                           >> 0x18U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN 
        = (0x3fU & (0x21U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                             >> 0x18U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_addr 
        = (0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                     >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awaddr 
        = (0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel0 
        = (0x7800U == (0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                  >> 0xdU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                           >> 0x18U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                                >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_0 
        = (0x3fU & (0x21U ^ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                             >> 0x18U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1a379823__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_rf_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_rf_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_rf_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_rf_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_rf_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_rf_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_rf_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_rf_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_8 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_10;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_10)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__isS));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_exe_fun 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_exe_fun 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__n_state) 
           & ((~ (IData)(vlSelf->__VdfgTmp_h1340a9a0__0)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0) 
                 | ((IData)(vlSelf->__VdfgTmp_h06110412__0) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_1) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_87) 
                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_89)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd 
        = ((IData)(vlSelf->__VdfgTmp_h1340a9a0__0) ? 0U
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0)
                ? 1U : ((IData)(vlSelf->__VdfgTmp_h06110412__0)
                         ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___GEN_1)
                                  ? 3U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_87)
                                           ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT___csignals_T_89)
                                                    ? 6U
                                                    : 0U))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__n_state) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_op2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_op2_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_wb_sel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_wb_sel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_wb_sel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_wb_sel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_wb_sel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_jmp_flg 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__raddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_araddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                          >> 0x1cU)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN) 
                             >> 3U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN)))) 
              | (3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
                              >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                          >> 0x1cU)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_0) 
                             >> 3U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_0)))) 
              | (3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                              >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_gpr_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wen)) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__csignals_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
            ? 0x342U : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__in_rdata 
                        >> 0x14U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_jmp_flg 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_jmp_flg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_jmp_flg 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_jmp_flg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_addr_process 
        = ((0xf12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
            ? 5U : ((0xf11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                     ? 4U : ((0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                              ? 3U : ((0x341U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                                       ? 2U : (0x305U 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_addr_process;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_addr_process;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata 
        = ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_addr_process))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_addr_process]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_idle)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_idle)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_csr_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___csr_io_csr_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__ren 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_araddr, vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
              >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wvalid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
        vlSelf->__VdfgTmp_h32bc8e0f__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r;
        vlSelf->__VdfgTmp_h32bc8e0f__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2 
        = (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                    >> 0x10U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
           >> 0x18U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h32bc8e0f__0) 
                     >> 2U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h32bc8e0f__0) 
                     >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb 
            = vlSelf->__VdfgTmp_h32bc8e0f__0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelf->reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0)
                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                        >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite) 
                     & (IData)(vlSelf->__VdfgTmp_h32bc8e0f__0))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata
                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0) 
                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
                            >> 8U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                       & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                                       : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite) 
                                           & (((IData)(vlSelf->__VdfgTmp_h32bc8e0f__0) 
                                               >> 3U) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size))))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3)
                                           : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0) 
                                               & (2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en)
                     ? ((IData)(7U) + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                       << 1U)) : ((IData)(0xdU) 
                                                  + 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                                   << 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
               << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                       : 0U));
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__temp;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp = 0U;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt = 8U;
    } else {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss)))) {
            if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN) {
                __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp 
                    = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__temp) 
                                 << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi));
            } else if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN_0) {
                __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp 
                    = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__temp) 
                                >> 1U));
            }
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) 
                      | (~ (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT___GEN)))))) {
            __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt 
                = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt) 
                           - (IData)(1U)));
        }
    }
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__temp = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__cnt = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt;
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ wdata, CData/*7:0*/ wstrb);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psramChiselHelper__wen))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_write_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata, 
                                                                                ((8U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))
                                                                                 ? 3U
                                                                                 : 
                                                                                (2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt)))));
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
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
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rresp = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc = 0x30000000U;
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
            = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr) 
                        << 1U)) | (1U & VL_REDXOR_4(
                                                    (0xcU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr)))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid 
                    = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
        }
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
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_pipe_out_valid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__pc_next;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bresp = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__cr_state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nr_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__cw_state 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nr_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__nw_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__w_delay_unit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__r_delay_unit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtime;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__lfsr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__axi4_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_offset 
        = (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__addr_align 
        = (0xfffffff0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__issdram_raddr 
        = ((0x9fffffffU < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc) 
           & (3U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
                     >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_tag 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
           >> 8U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
                   >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_axi4_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_csr_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_araddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_csr_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_reg_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_13 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_19 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_23 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_27 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_31 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_35 
        = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_39 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_43 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_47 
        = (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_51 
        = (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_55 
        = (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_59 
        = (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_63 
        = (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_67 
        = (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_71 
        = (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_reg_pc;
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h4032e768_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hc6114f20_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he38796ec_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__6\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen = 0;
    SData/*10:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o = 0;
    SData/*13:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    SData/*13:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)) 
                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out)))
                                                ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel)) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))
                                                ? (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos)))
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_rise)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_rise)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_rise)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_rise)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_rise)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck_qpi 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((2U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n)))
                                                ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck_qpi))
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    __Vtableidx5 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->reset)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__int_o 
        = VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0
        [__Vtableidx5];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one)) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge 
        = ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one)) 
                                          | ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go)) 
                                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n_qpi 
        = ((IData)(vlSelf->reset) | ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((6U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
                                                & (6U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r))) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                                                  >> 2U))));
    __Vtableidx8 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o) 
                     << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o) 
                                << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
                                           << 1U) | (IData)(vlSelf->reset))));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0
         [__Vtableidx8])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q 
            = VysyxSoCFull__ConstPool__TABLE_h4032e768_0
            [__Vtableidx8];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0
         [__Vtableidx8])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q 
            = VysyxSoCFull__ConstPool__TABLE_hc6114f20_0
            [__Vtableidx8];
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 4U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x2774U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
    } else {
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x185U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 1U;
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_ack_o) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_read_data_o;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr)));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip)
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len))
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len)
                             : 0x80U)));
        if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__asic__spi_miso)
                                                : (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt 
            = ((0x320U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt))
                ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ctrl_sel) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dcd) 
                                        << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ri) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dsr) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__cts)))) 
                                      ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dcd_c) 
                   << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ri_c) 
                              << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dsr_c) 
                                         << 5U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__cts_c) 
                                                   << 4U)))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__brc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count = 0U;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count)));
                __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count) 
                                - (IData)(1U)));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((0x32U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q
                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata);
                }
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_ack_o) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_ack_o) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w)) 
             & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_in_r;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr)));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ie) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                         >> 6U));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ss_sel) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata);
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
                if ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
                        } else {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? 7U : 4U);
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 5U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 3U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 2U : (((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))
                                 ? 1U : ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                          ? 0U : 7U)));
                if ((0x28U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                        if ((0xaU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                               | (0xfU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w))));
                    }
                }
            }
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr);
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr);
        }
        if (((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r;
        }
        if ((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast)));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
            }
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen) 
                            - (IData)(1U)));
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
            if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr;
            } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                        ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                 ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                          ? 0xfU : 
                                         ((7U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                           ? 0x1fU : 0x3fU))));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr 
                        & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                       | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr) 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
            } else {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr);
            }
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count = 0U;
    } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count)));
            VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
        Verilated::runFlushCallbacks();
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->externalPins_vga_hsync = (0x60U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid 
        = ((0x90U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt)) 
           & (0x310U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ie 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xcU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 8U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xaU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xbU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 9U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len 
        = (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xdU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    __Vtableidx6 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h4abec798_0
        [__Vtableidx6];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_set_en 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
            << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                  >> 1U) - (IData)(2U)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe 
            = (8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout 
            = (0xfU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__CMD_EBH) 
                           >> 4U) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__CMD_EBH)
                                      : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                             >> 0x14U)
                                          : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x10U)
                                              : ((4U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                     : 0U)))))))));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe 
            = (0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout 
            = (0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__CMD_EBH) 
                                 >> (7U & ((IData)(7U) 
                                           - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 0U))))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi) 
           == ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__FINAL_COUNT)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word8 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [8U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word9 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [9U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word10 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xaU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word11 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xbU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word12 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xcU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word13 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xdU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word14 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xeU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word15 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xfU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit 
        = (0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                  [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                          [3U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [4U] 
                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [5U] 
                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [6U] 
                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [7U] 
                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                              [8U] 
                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                 [9U] 
                                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                    [0xaU] 
                                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                       [0xbU] 
                                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                          [0xcU] 
                                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                             [0xdU] 
                                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpra 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__int_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o;
    vlSelf->__Vtableidx3 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [vlSelf->__Vtableidx3];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dtr_pad_o 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rts_pad_o 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                 >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->externalPins_uart_rx));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_read_data_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cke 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__cmd_comb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ras 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cas 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_we 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_ack_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_prio_w 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_prio_w 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__a 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpra 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab))));
    vlSelf->ysyxSoCFull__DOT__flash__DOT__mosi = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__io_mosi 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__spi_mosi = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi;
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_mosi 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__mosi_pad_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__last_clk 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U];
    vlSelf->ysyxSoCFull__DOT__externalPins_vga_hsync 
        = vlSelf->externalPins_vga_hsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__vga_hsync 
        = vlSelf->externalPins_vga_hsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_hsync 
        = vlSelf->externalPins_vga_hsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync 
        = vlSelf->externalPins_vga_hsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__hsync 
        = vlSelf->externalPins_vga_hsync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid)
            ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt) 
                         - (IData)(0x91U))) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__go 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__go 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_negedge 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__lsb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_negedge 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__len 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len)))) 
                     << 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss 
        = (0xffU & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                       & ((- (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))) 
                          | (- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_set_en) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__douten 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_error_bit 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_error_bit 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rdata_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rdata_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__data_out_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__valid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__accept_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__valid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__data_out_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_read_w 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_write_w 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
               >> 5U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__dtr_pad_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dtr_pad_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__rts_internal 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rts_pad_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__rtsn 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rts_pad_o)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_read_data_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_read_data_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_read_data_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_read_data_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_read_data_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_read_data_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__neg_edge 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__pos_edge 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_clk 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__io_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__spi_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__pop 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en)
                ? 2U : 0U);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dcd) 
                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ri) 
                           << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dsr) 
                                      << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__cts))));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din;
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_divider_sel) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__pop 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_count 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error)
                                ? 4U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 4U;
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 2U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 2U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 6U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 9U;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0xaU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 8U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 7U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error))))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 1U;
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_cke 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cke;
    vlSelf->ysyxSoCFull__DOT___asic_sdram_cke = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cke;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_cke 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cke;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_cke_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cke;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_cke_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cke;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_cke = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cke;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_out_en_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_out_en_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_output_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_output_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_ras 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ras;
    vlSelf->ysyxSoCFull__DOT___asic_sdram_ras = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ras;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_ras 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ras;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_ras_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ras;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_ras_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ras;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_ras = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ras;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_cas 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cas;
    vlSelf->ysyxSoCFull__DOT___asic_sdram_cas = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cas;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_cas 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cas;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_cas_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cas;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_cas_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cas;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_cas = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cas;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_we = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_we;
    vlSelf->ysyxSoCFull__DOT___asic_sdram_we = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_we;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_we 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_we;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_we_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_we;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_we_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_we;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_we = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_we;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_cs = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sdram_cs = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs;
    vlSelf->ysyxSoCFull__DOT___asic_sdram_cs = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_cs 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_cs_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_cs_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_ack_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_ack_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_ack_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_ack_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_ack_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_ack_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out))));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out))));
                    }
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out) 
                                    >> 1U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 4U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 4U;
                            }
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 2U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 5U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge))));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                        - (IData)(1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge)
                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                            - (IData)(1U))));
    }
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__spi_ss = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss) 
                 >> 7U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_overrun 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_id_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_read_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_write_w));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rlast_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rlast_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_last_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__data_in_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_read_data_i;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__clock 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__enable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__divider 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_in 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__di 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                    >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_1 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cke 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_cke;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cke 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_cke;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ras 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_ras;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ras 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_ras;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cas 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_cas;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cas 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_cas;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_we 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_we;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_we 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__io_we;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__push_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_ack_i;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__ss = vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__reset = vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__io_ss = vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_rise 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_rise 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_rise 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_rise 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_rise 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__douten 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rvalid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rvalid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cke 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cke;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cke 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cke;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cke 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cke;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cke 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cke;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ras 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ras;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ras 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ras;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ras 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ras;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ras 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ras;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cas 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cas;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cas 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cas;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cas 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cas;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cas 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cas;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_we 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_we;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_we 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_we;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_we 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_we;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_we 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_we;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bvalid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bvalid_o 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__we 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lcr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lcr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->__Vtableidx4 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hccb3c341_0
        [vlSelf->__Vtableidx4];
    vlSelf->__Vtableidx7 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he38796ec_0
        [vlSelf->__Vtableidx7];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__enable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__enable 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__brc_value 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                    >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o));
    vlSelf->externalPins_uart_tx = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
    vlSelf->ysyxSoCFull__DOT__externalPins_uart_tx 
        = vlSelf->externalPins_uart_tx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__uart_tx = vlSelf->externalPins_uart_tx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx 
        = vlSelf->externalPins_uart_tx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__uart_tx 
        = vlSelf->externalPins_uart_tx;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__stx_pad_o 
        = vlSelf->externalPins_uart_tx;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    // Init
    IData/*23:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata = vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata_save;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__c_state = 0U;
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1 
            = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_2 
            = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_3 
            = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_4 
            = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_5 
            = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_6 
            = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_7 
            = ((((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_0) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_2)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_3)) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_4)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_5));
        if (vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
            __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
            __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_8 = 0xc721443004ULL;
            if (vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_0) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                    = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 1U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din)));
            } else if (vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                    = ((0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din));
            }
            if ((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_0) 
                           | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)) 
                          | (~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_2)))))) {
                __Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                    = ((0xfffff0U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                     << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din));
            }
            vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___wdata_T_1 
                = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_save)) 
                                            << ((0x27U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(5U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt)))))
                                                 ? 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_8 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(5U) 
                                                                * 
                                                                (7U 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt)))))))
                                                 : 0U)));
            __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata 
                = ((((- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_7))))) 
                     & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_6)))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___wdata_T_1)) 
                   | vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata);
        }
        if ((1U & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_0)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_2))))) {
            if (vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_3) {
                __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save 
                    = vlSelf->ysyxSoCFull__DOT__psram__DOT___psramChiselHelper_rdata;
            } else if (vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_4) {
                __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save 
                    = (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata_save 
                       << 4U);
            } else if (vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_5) {
                __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save = 0U;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_7)) 
                      | (~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_6)))))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt)));
        }
        vlSelf->ysyxSoCFull__DOT__psram__DOT__c_state 
            = vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state;
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt 
        = __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata = __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__addr = __Vdly__ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata_save 
        = __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__wstrb 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))
            ? 0xfU : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))
                       ? 3U : (2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__wdata 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__di_buf__DOT__dout 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata_save 
                   >> 0x1cU));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en = 
        (((((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_0)) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))) 
          & (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) 
         | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(IData/*31:0*/ id, IData/*31:0*/ bank_addr, IData/*31:0*/ row_addr, IData/*31:0*/ col_addr, IData/*31:0*/ wdata, CData/*7:0*/ wstrb);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__9\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr)))) {
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__wdata, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__wstrb));
        }
    }
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr)))) {
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__wdata, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__wstrb));
        }
    }
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr)))) {
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__wdata, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__wstrb));
        }
    }
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active) 
               >> (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr)))) {
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__wdata, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__wstrb));
        }
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1));
    if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_3 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_3 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        } else if ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                       * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_3 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_3 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_3 
                = (0x1fffU & 0U);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_3 
                = (0x1fffU & 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_3 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_3 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        } else if ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                       * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_3 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_3 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_3 
                = (0x1fffU & 0U);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_3 
                = (0x1fffU & 0U);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
    }
    if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_2 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_2 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        } else if ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                       * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_2 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_2 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_2 
                = (0x1fffU & 0U);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_2 
                = (0x1fffU & 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_2 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_2 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        } else if ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                       * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_2 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_2 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_2 
                = (0x1fffU & 0U);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_2 
                = (0x1fffU & 0U);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
    }
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_1 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_1 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        } else if ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                       * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_1 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_1 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_1 
                = (0x1fffU & 0U);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_1 
                = (0x1fffU & 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_1 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_1 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        } else if ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                       * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_1 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_1 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_1 
                = (0x1fffU & 0U);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_1 
                = (0x1fffU & 0U);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
    }
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))) {
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_0 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_0 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        } else if ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                       * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_0 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_0 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_0 
                = (0x1fffU & 0U);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_0 
                = (0x1fffU & 0U);
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_0 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_0 
                = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        } else if ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                       * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_0 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_0 
                = (0x1fffU & (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))));
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_0 
                = (0x1fffU & 0U);
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_0 
                = (0x1fffU & 0U);
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba))))
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba)))))
                              : 0U)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_3)) 
            << 0x27U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_2)) 
                          << 0x1aU) | (QData)((IData)(
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_1) 
                                                        << 0xdU) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_3)) 
            << 0x27U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_2)) 
                          << 0x1aU) | (QData)((IData)(
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_1) 
                                                        << 0xdU) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_3)) 
            << 0x27U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_2)) 
                          << 0x1aU) | (QData)((IData)(
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_1) 
                                                        << 0xdU) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_3)) 
            << 0x27U) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_2)) 
                          << 0x1aU) | (QData)((IData)(
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_1) 
                                                        << 0xdU) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_3)) 
            << 0x1bU) | (QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_2) 
                                          << 0x12U) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_1) 
                                             << 9U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_3)) 
            << 0x1bU) | (QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_2) 
                                          << 0x12U) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_1) 
                                             << 9U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_3)) 
            << 0x1bU) | (QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_2) 
                                          << 0x12U) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_1) 
                                             << 9U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_0))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_3)) 
            << 0x1bU) | (QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_2) 
                                          << 0x12U) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_1) 
                                             << 9U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_0))))));
}
