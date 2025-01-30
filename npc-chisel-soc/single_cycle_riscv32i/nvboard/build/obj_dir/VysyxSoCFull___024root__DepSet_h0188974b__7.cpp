// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h8d938bf0_0;
extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hbbf24470_0;
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__12\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hca4289cc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf7770877__0;
    VlWide<4>/*127:0*/ __Vtemp_h92bf4ede__0;
    VlWide<4>/*127:0*/ __Vtemp_ha6b67d45__0;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awaddr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awaddr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                          >> 0x1cU)) | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                               >> 0x1bU)) 
                                        | ((2U & ((~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                                    >> 0x1cU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                               >> 0x18U)))))) 
           | ((0U == ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                             >> 0x1cU)) | ((6U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_0) 
                                                  >> 3U)) 
                                           | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_0))))) 
              | ((0U == ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                >> 0x1dU)) | (3U & 
                                              (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                                  >> 0x1cU))))) 
                 | ((0U == ((8U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                       >> 0x1fU)) << 3U)) 
                            | ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
                                      >> 0x18U))))) 
                    | (0U == ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___requestAWIO_T_20) 
                                     >> 1U)) | (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___requestAWIO_T_20))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____VdfgTmp_he0f7b9dd__0)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____VdfgTmp_h47dc48fb__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_4 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_1) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_30 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_2) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_2)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_43 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_3) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_3)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_56 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_4) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56 
        = (0x7fU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                     >> 8U) | ((0x70U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4) 
                               | (0xfU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                           >> 0x10U) 
                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_46 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_3) 
           & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_hdf2854ce__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_3) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeIn_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeIn_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___nodeOut_a_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain) 
            << 3U) | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)
                             ? ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain))))
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN 
                                    >> (0x1fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_domain))))
                                 : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__source_r))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain) 
            << 3U) | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)
                             ? ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain))))
                                 ? (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN 
                                    >> (0x1fU & ((IData)(3U) 
                                                 * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_domain))))
                                 : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__source_r))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4index__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__slave_0_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_in_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4index__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__slave_0_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_in_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr 
              >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awaddr 
               >> 0x1eU)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_21 
        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                    | ((0x40U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                                 << 1U)) | ((0x20U 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                                                >> 4U)) 
                                            | (0x1fU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                                                  >> 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_21 
        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                    | ((0x40U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                                 << 1U)) | ((0x20U 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                                                >> 4U)) 
                                            | (0x1fU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                                                  >> 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_1_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_enq_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_enq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5 
        = (QData)((IData)(vlSelf->__VdfgTmp_hb98e19c1__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source 
        = vlSelf->__VdfgTmp_hb98e19c1__0;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_ready))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_c_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_enq_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_c_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_c_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_enq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_5 
        = (QData)((IData)(vlSelf->__VdfgTmp_hd5b15e4d__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source 
        = vlSelf->__VdfgTmp_hd5b15e4d__0;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_q_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
                 | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_ready))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_denied) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___ferr_auto_in_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__muxState_1 = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_deq_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_deq_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_corrupt 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__da_bits_opcode));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT___ferr_auto_in_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__muxState_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_corrupt = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__muxState_0)
             ? 6U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_denied)
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__da_bits_opcode)
                            : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___ferr_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__nodeIn_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__io_gpr_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_gpr_wen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_gpr_wen)) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_3) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_6) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp)));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_10) 
                             << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_2) 
                                        << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_op) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_0) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__n_state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp_0 
        = VysyxSoCFull__ConstPool__TABLE_h8d938bf0_0
        [vlSelf->__Vtableidx1];
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_10) 
                             << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_op) 
                                        << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___awsize_T_2) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT___GEN_0) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__n_state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__casez_tmp_1 
        = VysyxSoCFull__ConstPool__TABLE_hbbf24470_0
        [vlSelf->__Vtableidx2];
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__n_state)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
            ? 0x342U : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__imem_rdata 
                        >> 0x14U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_jmp_flg 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_jmp_flg;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_jmp_flg 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_jmp_flg;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_out_wready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_out_awready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN) 
           & (0xc00000000ULL == (0xc00000000ULL & vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxState_0)
            ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___GEN) 
                     >> (6U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__ram 
                                        >> 3U)) << 1U))))
            : 0U);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__winner_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___nodeIn_d_valid_T;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__winner_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid)));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_denied) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___ferr_auto_in_d_bits_denied = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__muxState_1 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_corrupt 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_bits_opcode));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_deq_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_deq_bits_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___ferr_auto_in_d_bits_denied = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__muxState_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_corrupt = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_source = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__muxState_0)
             ? 6U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_denied)
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_bits_opcode)
                            : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___ferr_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__nodeIn_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxState_0)
            ? (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___GEN) 
                     >> (6U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__ram 
                                        >> 3U)) << 1U))))
            : 0U);
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__winner_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___nodeIn_d_valid_T;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__winner_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__enable)
            ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                      >> 0x18U)) | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_mask));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT___a_repeater_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT___a_repeater_io_repeat_beats1_decode_T_1 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_data;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_opcode;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
    }
    vlSelf->__VdfgTmp_h64cdd94d__0 = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP)) 
                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass))) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__enable)
            ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                      >> 0x18U)) | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___a_repeater_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___a_repeater_io_repeat_beats1_decode_T_1 
        = (0x7fffffU & ((IData)(0xffU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_data;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_opcode;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
    }
    vlSelf->__VdfgTmp_h1971fe3f__0 = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)) 
                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass))) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_opcode) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats1_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats 
        = ((1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen) 
                  << 1U)) & (0x100U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____VdfgTmp_he0f7b9dd__0)
                                        ? 0xffU : (0xffU 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT____VdfgTmp_h47dc48fb__0))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awecho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awlen) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awsize)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_arecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__ar_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_arecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_arecho_real_last) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_echo_extra_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_deq_bits_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__empty)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_arecho_real_last)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__R0_data) 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_deq_bits_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__empty)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_arecho_real_last)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__R0_data) 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN 
        = (0x3fffU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                         >> 9U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_arecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__ar_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_arecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_arecho_real_last) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_echo_extra_id));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_deq_bits_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__empty)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_arecho_real_last)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__R0_data) 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_deq_bits_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__empty)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_arecho_real_last)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__R0_data) 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN 
        = (0x3fffU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                         >> 9U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awlen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats1_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats 
        = ((1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen) 
                  << 1U)) & (0x100U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____VdfgTmp_he0f7b9dd__0)
                                        ? 0xffU : (0xffU 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____VdfgTmp_h47dc48fb__0))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awecho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awlen) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awsize)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_4) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_19 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_32 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_30) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_30)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_45 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_43) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_43)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_58 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_56) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_56)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_19 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_32 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_45 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_58 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_inc_15 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_hdf2854ce__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_1 
        = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_i_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_1 
        = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__extract__io_i_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_in_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_arvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arvalid;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__soc_awid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4index__DOT__auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__slave_0_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2 
        = (((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask)) 
            | ((0x10U & ((0x7ffffff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                                         >> 1U)) | 
                         (0xfffffff0U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask)))) 
               | ((8U & ((0x3fffff8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                                        >> 6U)) | (0xfffffff8U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask)))) 
                  | ((6U & ((0x3fffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                                           >> 6U)) 
                            | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask)))) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_21) 
                               >> 6U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask))))))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_21));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2 
        = (((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask)) 
            | ((0x10U & ((0x7ffffff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_filter_T_1) 
                                         >> 1U)) | 
                         (0xfffffff0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask)))) 
               | ((8U & ((0x3fffff8U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_19) 
                                        >> 6U)) | (0xfffffff8U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask)))) 
                  | ((6U & ((0x3fffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_20) 
                                           >> 6U)) 
                            | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask)))) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_21) 
                               >> 6U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask))))))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_21));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___chiplink_auto_mbypass_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceC_io_q_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceC_io_q_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_q_ready_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_q_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___ferr_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT___nodeIn_d_bits_T_16 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___ferr_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT___nodeIn_d_bits_T_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___ferr_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT___nodeIn_d_bits_T_13 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___ferr_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT___nodeIn_d_bits_T_23 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__wbu__DOT__io_csr_cmd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___wbu_io_csr_cmd)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr];
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_ext__DOT__W0_en 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT____Vcellinp__mem_ext__W0_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___err_auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___nodeIn_d_bits_T_20 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___err_auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxState_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_deq_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_q__DOT__io_deq_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxState_0)
             ? 6U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied)
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode)
                            : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_deq_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_q__DOT__io_deq_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___err_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__nodeIn_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___ferr_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT___nodeIn_d_bits_T_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___ferr_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT___nodeIn_d_bits_T_16 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___ferr_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT___nodeIn_d_bits_T_13 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___ferr_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT___nodeIn_d_bits_T_23 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___err_auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___nodeIn_d_bits_T_20 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___err_auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxState_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_deq_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_deq_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxState_0)
             ? 6U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied)
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode)
                            : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_deq_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_deq_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___err_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__nodeIn_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceA_io_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___chiplink_auto_mbypass_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_beats1 
        = ((IData)(vlSelf->__VdfgTmp_h64cdd94d__0) ? 0U
            : (7U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT___a_repeater_io_repeat_beats1_decode_T_1) 
                        >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__nodeOut_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported 
        = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode)) 
           & (2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___chiplink_auto_mbypass_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_address;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceA_io_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__io_o_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_beats1 
        = ((IData)(vlSelf->__VdfgTmp_h1971fe3f__0) ? 0U
            : (0x3fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___a_repeater_io_repeat_beats1_decode_T_1 
                           >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__nodeOut_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported 
        = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode)) 
           & (2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_idle)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_awecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__aw_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_awecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awecho_real_last) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_echo_extra_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_bits_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__empty)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awecho_real_last)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__R0_data) 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_bits_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__empty)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_awecho_real_last)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__R0_data) 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN_1 
        = (0x3fffU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                         >> 9U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___Queue4_BundleMap_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___Queue4_BundleMap_1_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_1__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size_hi 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
            >> 0xfU) & (0x80U | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN) 
                                          >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___Queue4_BundleMap_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___Queue4_BundleMap_1_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_1__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size_hi 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
            >> 0xfU) & (0x80U | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN) 
                                          >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__aw_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_awecho_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT____Vcellinp__ram_ext__W0_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awecho_real_last) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_echo_extra_id));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_deq_bits_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__empty)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awecho_real_last)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__R0_data) 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_deq_bits_real_last 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__empty)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awecho_real_last)
                  : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__R0_data) 
                     >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN_1 
        = (0x3fffU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                         >> 9U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT____Vcellinp__rxQ__io_enq_bits_data 
        = (5U | (((IData)((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                           >> 0xfU)))) 
                  << 0x1fU) | (((IData)((0U != (0xffU 
                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                                   >> 7U)))) 
                                << 0x1eU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_56) 
                                                           >> 3U)))) 
                                              << 0x1dU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_58) 
                                                              >> 1U)))) 
                                                 << 0x1cU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (5U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_58)))) 
                                                    << 0x1bU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                                                    >> 0xfU)))) 
                                                       << 0x1aU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xffU 
                                                                    & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                                                       >> 7U)))) 
                                                          << 0x19U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_43) 
                                                                          >> 3U)))) 
                                                             << 0x18U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (3U 
                                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_45) 
                                                                             >> 1U)))) 
                                                                << 0x17U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (5U 
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_45)))) 
                                                                   << 0x16U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                                                                >> 0xfU)))) 
                                                                      << 0x15U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                                                                >> 7U)))) 
                                                                         << 0x14U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_30) 
                                                                                >> 3U)))) 
                                                                            << 0x13U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_32) 
                                                                                >> 1U)))) 
                                                                               << 0x12U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (5U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_32)))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                                                                >> 0xfU)))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                                                                >> 7U)))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                                                                                >> 3U)))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_19) 
                                                                                >> 1U)))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (5U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_19)))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH 
                                                                                >> 0xfU)))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__msbOH 
                                                                                >> 7U)))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_4) 
                                                                                >> 3U)))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6) 
                                                                                >> 1U)))) 
                                                                                << 8U) 
                                                                                | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (5U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6)))) 
                                                                                << 7U))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT____Vcellinp__rxQ__io_enq_bits_data 
        = (5U | (((IData)((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                           >> 0xfU)))) 
                  << 0x1fU) | (((IData)((0U != (0xffU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_4 
                                                   >> 7U)))) 
                                << 0x1eU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_56) 
                                                           >> 3U)))) 
                                              << 0x1dU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_58) 
                                                              >> 1U)))) 
                                                 << 0x1cU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (5U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_58)))) 
                                                    << 0x1bU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                                                    >> 0xfU)))) 
                                                       << 0x1aU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xffU 
                                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_3 
                                                                       >> 7U)))) 
                                                          << 0x19U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_43) 
                                                                          >> 3U)))) 
                                                             << 0x18U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (3U 
                                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_45) 
                                                                             >> 1U)))) 
                                                                << 0x17U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (5U 
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_45)))) 
                                                                   << 0x16U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                                                                >> 0xfU)))) 
                                                                      << 0x15U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_2 
                                                                                >> 7U)))) 
                                                                         << 0x14U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_30) 
                                                                                >> 3U)))) 
                                                                            << 0x13U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_32) 
                                                                                >> 1U)))) 
                                                                               << 0x12U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (5U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_32)))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                                                                >> 0xfU)))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH_1 
                                                                                >> 7U)))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                                                                                >> 3U)))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_19) 
                                                                                >> 1U)))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (5U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_19)))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH 
                                                                                >> 0xfU)))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__msbOH 
                                                                                >> 7U)))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_4) 
                                                                                >> 3U)))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6) 
                                                                                >> 1U)))) 
                                                                                << 8U) 
                                                                                | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (5U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6)))) 
                                                                                << 7U))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key 
        = (((IData)((0U != (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___GEN 
                            >> 0x10U))) << 4U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                                                                >> 7U)))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3) 
                                                                   >> 3U)))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5) 
                                                                      >> 1U)))) 
                                                         << 1U) 
                                                        | (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (5U 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key 
        = (((IData)((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___GEN 
                            >> 0x10U))) << 4U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                                                                >> 7U)))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_3) 
                                                                   >> 3U)))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5) 
                                                                      >> 1U)))) 
                                                         << 1U) 
                                                        | (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (5U 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_5))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__idle)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___nodeOut_a_valid_T)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_filter_T_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___chiplink_auto_mbypass_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_1 
        = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_1 
        = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_source;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4index__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__slave_0_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_in_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___deq_q_1_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__winner 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__winner 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___chiplink_auto_mbypass_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_5 
        = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
           << 1U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_c_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_5 
        = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_c_bits_source) 
           << 1U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_en 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_addr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__lsu__DOT__io_csr_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___csr_io_csr_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___err_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___nodeIn_d_bits_T_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___err_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___nodeIn_d_bits_T_17 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___err_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___nodeIn_d_bits_T_23 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___err_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___nodeIn_d_bits_T_14 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_3[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_3[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_3[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_3[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___err_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___nodeIn_d_bits_T_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___err_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___nodeIn_d_bits_T_17 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___err_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___nodeIn_d_bits_T_23 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___err_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___nodeIn_d_bits_T_14 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_3[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_3[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_3[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_3[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__idle)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___in_0_d_valid_T) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_1)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_2)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__in_0_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___chiplink_auto_mbypass_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT____Vcellinp__a_repeater__io_repeat 
        = ((~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter)) 
               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_beats1)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow 
        = ((~ (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__winner_0)) 
               & ((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
                            >> 0x1fU))) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_fifoId)))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_free_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id 
        = ((2U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
                      >> 0x1fU)) << 1U)) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
                                            >> 0x1fU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___chiplink_auto_mbypass_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT____Vcellinp__a_repeater__io_repeat 
        = ((~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_counter)) 
               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_beats1)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address;
    vlSelf->__VdfgTmp_h2f99f01f__0 = (0U == ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
                                               >> 0x1eU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
                                                    >> 0x1eU)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wlast 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___Queue4_BundleMap_2_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_2__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___Queue4_BundleMap_3_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__Queue4_BundleMap_3__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_size_hi 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
            >> 0xfU) & (0x80U | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN_1) 
                                          >> 7U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size_hi) 
                     >> 1U) | ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                                >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size_hi) 
                     >> 1U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_enq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__ram_ext__DOT__W0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT____Vcellinp__ram_ext__W0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___Queue4_BundleMap_2_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_2__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___Queue4_BundleMap_3_io_deq_bits_real_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__Queue4_BundleMap_3__DOT__io_deq_bits_real_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
            >> 0xfU) & (0x80U | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN_1) 
                                          >> 7U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT____Vcellinp__rxQ__io_enq_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT____Vcellinp__rxQ__io_enq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___cam_io_key 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__sink_r))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_ext__DOT__W0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___cam_io_key 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__io_key)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__sink_r))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__winner_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__winner_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT___a_repeater_io_deq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel 
        = (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_1 
        = (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_2 
        = (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_3 
        = (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_4 
        = (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_5 
        = (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___a_repeater_io_deq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel 
        = (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_1 
        = (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_2 
        = (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_3 
        = (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_4 
        = (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_5 
        = (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source) 
                        >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__ren 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first)
                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first)
                     ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2))
                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__idle)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_valid_T)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_valid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_1))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_araddr, vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__idle) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__winner_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__winner_0;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__winner)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__grant 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__winner)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_arready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_idle)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_idle)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__f_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__io_deq_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__f_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
                 >> 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_1_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__in_0_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_filter_T_1)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___GEN 
        = (((0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_repeat 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT____Vcellinp__a_repeater__io_repeat;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_noDomain 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_repeat 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT____Vcellinp__a_repeater__io_repeat;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_fifoId 
        = (((0U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
                    >> 0x1eU)) << 1U) | (IData)(vlSelf->__VdfgTmp_h2f99f01f__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___a_id_T_18 
        = (3U & ((- (IData)((0U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
                                    >> 0x1eU)))) | 
                 ((IData)(vlSelf->__VdfgTmp_h2f99f01f__0) 
                  << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_2_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4frag_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_size_hi) 
                     >> 1U) | ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                                >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_8 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_8 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi) 
                     >> 1U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__io_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_1[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_1[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_1[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_1[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_1[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_1[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_1[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_1[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_in_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_awvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wlast 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT____Vcellinp__rxQ__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__f_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowReturn));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT____Vcellinp__rxQ__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__f_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowReturn));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_5[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_5[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_5[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_5[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_5[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_5[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_5[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_5[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_5[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_5[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_5[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_5[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_5[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_c_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_c_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_5[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_5[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_5[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_5[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_5[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_5[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_5[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_5[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_5[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_5[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_5[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_5[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_5[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__winner_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__winner_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__idle) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__winner_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__winner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_readys 
        = (7U & (~ (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_mask)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_filter_T_1) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_mask)))) 
                        | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___GEN) 
                                  >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_mask))))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___GEN) 
                       | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_filter_T_1)) 
                          | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___GEN) 
                                   >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first) 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_16) 
                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_17) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_18) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_19) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_20) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_21) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_22) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_23) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_24) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_25) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_26) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_27) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_28) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_29) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_30) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_31)))))))))))))))) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_noDomain) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_1) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first) 
                  & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_32) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_33) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_34) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_35) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_36) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_37) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_38) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_39) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_40) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_41) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_42) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_43) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_44) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_45) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_46) 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_47)))))))))))))))) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_noDomain) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_1) 
                           != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_2) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first) 
                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_48) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_49) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_50) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_51) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_52) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_53) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_54) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_55) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_56) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_57) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_58) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_59) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_60) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_61) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_62) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_63)))))))))))))))) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_noDomain) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_2) 
                              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_3) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first) 
                        & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_64) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_65) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_66) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_67) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_68) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_69) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_70) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_71) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_72) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_73) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_74) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_75) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_76) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_77) 
                                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_78) 
                                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_79)))))))))))))))) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_noDomain) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_3) 
                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_4) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first) 
                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_80) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_81) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_82) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_83) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_84) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_85) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_86) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_87) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_88) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_89) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_90) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_91) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_92) 
                                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_93) 
                                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_94) 
                                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_95)))))))))))))))) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_noDomain) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_4) 
                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_a_sel_5) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first) 
                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_96) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_97) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_98) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_99) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_100) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_101) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_102) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_103) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_104) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_105) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_106) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_107) 
                                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_108) 
                                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_109) 
                                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_110) 
                                                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_111)))))))))))))))) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_noDomain) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_5) 
                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                          | (IData)((((0x38U == (0x38U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first)) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_112) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_113) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_114) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_115) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_116) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_117) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_118) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_119) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_120) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_121) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_122) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_123) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_124) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_125) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_126) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_127)))))))))))))))) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_noDomain) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_6) 
                                              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow 
        = ((~ (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__winner_0)) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_fifoId) 
                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_fifoId)))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_free_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id 
        = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___a_id_T_18)) 
           | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___a_id_T_18) 
                    | (3U == (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_a_bits_address 
                              >> 0x1eU)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_8 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN_0 
        = (((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size_hi))) 
            << 2U) | (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6) 
                                               >> 3U)))) 
                       << 1U) | (0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_8) 
                                              >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_10 
        = (IData)((0U != (5U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_8))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN_0 
        = (((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size_hi))) 
            << 2U) | (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                               >> 3U)))) 
                       << 1U) | (0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_8) 
                                              >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_10 
        = (IData)((0U != (5U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_8))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_8 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                  >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_d_bits_sink 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_d_bits_sink;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wdata
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
             ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arid) 
                 << 3U) | (6U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_arid)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_1)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_0)) 
                                 << 1U))) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                                                    ? 
                                                   (1U 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awid) 
                                                        << 3U) 
                                                       | (6U 
                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awid)
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)) 
                                                             << 1U))))
                                                    : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_1[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_1[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_1[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_1[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_1[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_1[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_1[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_1[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_1[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_1[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_1[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_1[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_1[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_1[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_1[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_1[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_wlast 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_in_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4yank_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4frag_auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__auto_out_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__nodeOut_wvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wvalid));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT____Vcellinp__rxQ__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT____Vcellinp__rxQ__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__winner_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__winner_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__winner_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__idle) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__winner_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__winner_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__winner_2;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_2;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_noDomain 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_10 
        = (IData)((0U != (5U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_8))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgTmp_he3860646__0 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6) 
                                    >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_8) 
                                     >> 1U)))) << 1U) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_10)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgTmp_he3860646__0 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                    >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_8) 
                                     >> 1U)))) << 1U) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_10)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_10 
        = (IData)((0U != (5U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_8))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_1_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_0_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_1_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
            ? (7U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___GEN 
                     >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_1_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___nodeOut_a_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arvalid));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_bits_corrupt)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_param)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_denied 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_bits_denied)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_denied)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_bits_opcode)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_opcode)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first) 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_16) 
                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_17) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_18) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_19) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_20) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_21) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_22) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_23) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_24) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_25) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_26) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_27) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_28) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_29) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_30) 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_31)))))))))))))))) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_noDomain) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id) 
                        != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_1) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first) 
                  & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_32) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_33) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_34) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_35) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_36) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_37) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_38) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_39) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_40) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_41) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_42) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_43) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_44) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_45) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_46) 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_47)))))))))))))))) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_noDomain) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_1) 
                           != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_2) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first) 
                     & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_48) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_49) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_50) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_51) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_52) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_53) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_54) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_55) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_56) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_57) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_58) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_59) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_60) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_61) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_62) 
                                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_63)))))))))))))))) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_noDomain) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_2) 
                              != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_3) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first) 
                        & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_64) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_65) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_66) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_67) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_68) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_69) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_70) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_71) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_72) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_73) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_74) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_75) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_76) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_77) 
                                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_78) 
                                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_79)))))))))))))))) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_noDomain) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_3) 
                                 != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_4) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first) 
                           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_80) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_81) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_82) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_83) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_84) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_85) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_86) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_87) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_88) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_89) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_90) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_91) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_92) 
                                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_93) 
                                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_94) 
                                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_95)))))))))))))))) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_noDomain) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_4) 
                                    != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
                       | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_a_sel_5) 
                           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first) 
                              & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_96) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_97) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_98) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_99) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_100) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_101) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_102) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_103) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_104) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_105) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_106) 
                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_107) 
                                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_108) 
                                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_109) 
                                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_110) 
                                                                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_111)))))))))))))))) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_noDomain) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_5) 
                                       != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
                          | (IData)((((0x38U == (0x38U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__io_deq_bits_source))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first)) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_112) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_113) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_114) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_115) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_116) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_117) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_118) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_119) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_120) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_121) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_122) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_123) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_124) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_125) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_126) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_127)))))))))))))))) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_noDomain) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_6) 
                                              != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgTmp_h7f2273b0__0 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6) 
                                    >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_8) 
                                     >> 1U)))) << 1U) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_10)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
        = (((6U > (((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size_hi))) 
                    << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgTmp_he3860646__0))) 
            & ((0U == ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_araddr 
                                    >> 0xcU)) | (1U 
                                                 & (~ 
                                                    (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_araddr 
                                                     >> 0xcU))))) 
               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_araddr 
                  >> 0x1eU))) ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_araddr
            : (0x1000U | (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_araddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
        = (((6U > (((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size_hi))) 
                    << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgTmp_he3860646__0))) 
            & ((0U == ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_araddr 
                                    >> 0xcU)) | (1U 
                                                 & (~ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_araddr 
                                                     >> 0xcU))))) 
               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_araddr 
                  >> 0x1eU))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_araddr
            : (0x1000U | (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_araddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgTmp_h7f2273b0__0 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                    >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_8) 
                                     >> 1U)))) << 1U) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_10)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_data;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
            = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                << 0xfU) | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                            >> 0x11U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode 
            = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U]);
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state) 
           == (2U | (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode) 
                              >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__partial 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)
                    ? ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                        << 0x17U) | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                                     >> 9U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_valid));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_bits_T_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_bits_T_19 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_bits_T_17 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_bits_T_8 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_bits_T_23 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_ackd 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_source 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___in_0_d_bits_T_14 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source) 
                    >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_cam_sel_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_source)) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_0)
             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rdata
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_1)
                       ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rdata
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_corrupt)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_corrupt)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_corrupt))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_param)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_size)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_size)
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_2)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_size)
                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_denied 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_denied)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_denied)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_denied))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_opcode)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_opcode)
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_2)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_opcode)
                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_bits_source)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_bits_source)
                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxState_2)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_source)
                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgTmp_he3860646__0)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgTmp_h7f2273b0__0)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN_0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_10) 
              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                 >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___GEN_0)) 
           | ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                  >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_10)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                       ? (((6U > (((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_size_hi))) 
                                   << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT____VdfgTmp_h7f2273b0__0))) 
                           & ((0U == ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awaddr 
                                                   >> 0xcU)) 
                                      | (1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awaddr 
                                                  >> 0xcU))))) 
                              | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awaddr 
                                 >> 0x1eU))) ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awaddr
                           : (0x1000U | (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_awaddr)))
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN_0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_10) 
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                 >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___GEN_0)) 
           | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                  >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_10)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_o_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__idle)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___nodeOut_a_valid_T)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_filter_T_1)))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_param;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param 
            = (3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                             >> 3U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                             >> 5U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_param));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_size));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_1 
        = (0xffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_last_beats1_decode_T_1 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_3[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_3[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_3[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_3[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_3[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_3[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_3[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_3[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_3[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3 
        = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_cam_sel_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_drop 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_ackd) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_cam_sel_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___in_0_d_bits_T_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___in_0_d_bits_T_32 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___in_0_d_bits_T_29 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___in_0_d_bits_T_14 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___in_0_d_bits_T_39 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_ackd 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_source 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source) 
                 >> 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___in_0_d_bits_T_24 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source) 
                    >> 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_cam_sel_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_source)) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_1_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___a_last_beats1_decode_T_1 
        = (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
             ? ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                        << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                                                  << 2U) 
                                                 & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                                                    << 3U))))) 
                | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                     | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr))) 
                    << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr))) 
                               << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                         | (0U == (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__auto_out_wstrb)
                       : 0U));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size 
            = (7U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                      << 0x1aU) | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                                   >> 6U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address 
            = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                << 0x13U) | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                             >> 0xdU));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask 
            = (0xfU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                        << 0x13U) | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                     >> 0xdU)));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_0_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_address 
        = (0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id 
        = ((2U & ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                      >> 0x1eU)) << 1U)) | (1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                                  >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_o_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__idle) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__winner_0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write = 1U;
        vlSelf->__VdfgTmp_h57763bb7__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write = 0U;
        vlSelf->__VdfgTmp_h57763bb7__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_penable)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwrite 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                     ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                >> 8U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_d_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_d_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkD_io_a_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_c_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkD_io_c_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->__VdfgTmp_he4bb004b__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode) 
                                         >> 2U));
    vlSelf->__VdfgTmp_he4e5b150__0 = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode) 
                                               >> 1U)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_denied) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_denied)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_denied));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_drop)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_drop));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_param;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param 
            = (3U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                             >> 3U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size 
            = (0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                               >> 5U)));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_param));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_size));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_1 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_last_beats1_decode_T_1 
        = (0x7fffffU & ((IData)(0xffU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_3[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_3[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_3[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_3[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_3[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_3[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_3[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_3[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_3[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3 
        = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_cam_sel_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_drop 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_ackd) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_cam_sel_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_1 
        = (0xffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_last_beats1_decode_T_1 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___rbeats1_decode_T_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___a_last_beats1_decode_T_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_beats1 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode))
            ? (0x3ffU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___a_last_beats1_decode_T_1 
                            >> 2U))) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_beats1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxState_0)
            ? 0U : (0x3ffU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT___a_last_beats1_decode_T_1 
                                 >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_1_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_address[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_address[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_address[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_address[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_1_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_noDomain 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pwrite) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_6_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite = 1U;
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h57763bb7__0) 
                     >> 2U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h57763bb7__0) 
                     >> 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb 
            = vlSelf->__VdfgTmp_h57763bb7__0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_6_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite = 0U;
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelf->reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__R0_data;
    vlSelf->__VdfgTmp_h1a472d7b__0 = ((~ (IData)(vlSelf->__VdfgTmp_he4e5b150__0)) 
                                      & (IData)(vlSelf->__VdfgTmp_he4bb004b__0));
    vlSelf->__VdfgTmp_h83ce4d1b__0 = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source) 
                                          | (IData)(vlSelf->__VdfgTmp_he4e5b150__0))) 
                                      & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source)) 
                                         & (IData)(vlSelf->__VdfgTmp_he4bb004b__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_source))
            ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_bits_opcode));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_data 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                       >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_denied 
            = (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                             >> 0xfU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_denied 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeIn_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_1_auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___atomics_auto_out_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__nodeOut_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__idle)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__auto_out_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__idle)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_param 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_param;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full)
                     ? (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                                >> 9U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_source)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_d_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_d_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkD_io_a_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_c_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkD_io_c_tlSource_bits 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_free_bits 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source) 
                 >> 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__Memory
        [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))];
    vlSelf->__VdfgTmp_hdec54a07__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode) 
                                         >> 2U));
    vlSelf->__VdfgTmp_hda385b32__0 = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode) 
                                               >> 1U)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_denied) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_denied)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_denied));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_drop)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_drop));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats 
        = (0x1fU & ((IData)(3U) + (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode))
                                     ? 0U : ((0x1eU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_1) 
                                                 >> 2U)) 
                                             | (3U 
                                                > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size)))) 
                                   + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__partial)
                                       ? (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size)) 
                                           << 1U) | 
                                          (3U != (3U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size) 
                                                     >> 1U))))
                                       : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_beats1 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode))
            ? 0U : (7U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_last_beats1_decode_T_1) 
                             >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_beats1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask;
    vlSelf->__VdfgTmp_he2f51969__0 = (((QData)((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
                                                        >> 0x18U))) 
                                       << 0x1cU) | (QData)((IData)(
                                                                   ((0x8000000U 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask) 
                                                                        << 0x18U)) 
                                                                    | ((0x7f80000U 
                                                                        & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
                                                                           << 3U)) 
                                                                       | ((0x40000U 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask) 
                                                                              << 0x10U)) 
                                                                          | ((0x3fc00U 
                                                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
                                                                                << 2U)) 
                                                                             | ((0x200U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask) 
                                                                                << 8U)) 
                                                                                | ((0x1feU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask)))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_address[0U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_address[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_address[2U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_address[3U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stall 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                >> 3U)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_first) 
                           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_0) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_1) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_2) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_3) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_4) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_5) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_6) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_7)))))))) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_noDomain) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stalls_id) 
                                    != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id)))))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
               >> 3U) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_first) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_8) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_9) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_10) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_11) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_12) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_13) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_14) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_15)))))))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_noDomain) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stalls_id_1) 
                                  != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wdata
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
             ? ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                        << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                                  << 2U) 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                                    << 3U))))) 
                | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_1_1) 
                     | (2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                    << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                | (1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                               << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_out_bits_a_mask_sub_0_1) 
                                         | (0U == (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_wstrb)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgTmp_he3860646__0)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgTmp_h7f2273b0__0)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arid) 
                 << 3U) | (6U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_arid)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)) 
                                 << 1U))) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                                                    ? 
                                                   (1U 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awid) 
                                                        << 3U) 
                                                       | (6U 
                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awid)
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)) 
                                                             << 1U))))
                                                    : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_1)
                       ? (((6U > (((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size_hi))) 
                                   << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT____VdfgTmp_h7f2273b0__0))) 
                           & ((0U == ((0xffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awaddr 
                                                   >> 0xcU)) 
                                      | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awaddr 
                                                  >> 0xcU))))) 
                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awaddr 
                                 >> 0x1eU))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awaddr
                           : (0x1000U | (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__auto_out_awaddr)))
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwrite 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_6_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__out_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_release_ack 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_release_ack;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___hints_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__nodeIn_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__auto_anon_out_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__auto_out_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_h83ce4d1b__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_h1a472d7b__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_h1a472d7b__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_h83ce4d1b__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___mbypass_auto_in_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_3) 
              & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_in_d_bits_opcode))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_1_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle_1) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle_1)
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__winner_0))
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_auto_anon_out_0_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___dec_T_45 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_wins)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__auto_anon_out_0_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_wins));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_source 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_source;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__R0_addr 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_free_bits;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_ext__DOT__R0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___data_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_ext__DOT__R0_data;
    vlSelf->__VdfgTmp_hc22052a0__0 = ((~ (IData)(vlSelf->__VdfgTmp_hda385b32__0)) 
                                      & (IData)(vlSelf->__VdfgTmp_hdec54a07__0));
    vlSelf->__VdfgTmp_h1e650c0c__0 = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source) 
                                          | (IData)(vlSelf->__VdfgTmp_hda385b32__0))) 
                                      & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source)) 
                                         & (IData)(vlSelf->__VdfgTmp_hdec54a07__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_source))
            ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_bits_opcode));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_data 
            = (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                       >> 0x11U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_denied 
            = (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram 
                             >> 0x10U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__ram));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_denied 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_denied));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeIn_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_1_auto_anon_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___atomics_auto_out_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__nodeOut_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__idle)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__idle)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__auto_out_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__idle)
               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_readys)
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkA_io_q_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sa_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_beats1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_mask;
    __Vtemp_hca4289cc__0[0U] = (IData)(vlSelf->__VdfgTmp_he2f51969__0);
    __Vtemp_hca4289cc__0[1U] = (IData)((vlSelf->__VdfgTmp_he2f51969__0 
                                        >> 0x20U));
    __Vtemp_hca4289cc__0[2U] = 0U;
    __Vtemp_hca4289cc__0[3U] = 0U;
    VL_SHIFTL_WWI(99,99,6, __Vtemp_hf7770877__0, __Vtemp_hca4289cc__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___wide_T_1[0U] 
        = __Vtemp_hf7770877__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___wide_T_1[1U] 
        = __Vtemp_hf7770877__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___wide_T_1[2U] 
        = __Vtemp_hf7770877__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___wide_T_1[3U] 
        = (7U & __Vtemp_hf7770877__0[3U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift)) 
           | (vlSelf->__VdfgTmp_he2f51969__0 << ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                                                 << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_auto_anon_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_1_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_0_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
            = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[2U] 
                << 0xfU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                            >> 0x11U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask 
            = (0xfU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                        << 0x13U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                                     >> 0xdU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode 
            = (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size 
            = (7U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                      << 0x1aU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                                   >> 6U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source 
            = (0xfU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                        << 0x17U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                                     >> 9U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address 
            = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[1U] 
                << 0x13U) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram[0U] 
                             >> 0xdU));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_auto_anon_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_1_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_auto_anon_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_1_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode))))
            ? (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___GEN 
                     >> (0x1fU & ((IData)(3U) * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_opcode)))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_auto_anon_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_1_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___a_last_beats1_decode_T_1 
        = (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_auto_anon_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_1_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_auto_anon_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_0_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_out_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sbypass_auto_node_out_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_1_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[1U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[2U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[3U] = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_address 
        = (0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id 
        = ((2U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                      >> 0x1eU)) << 1U)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
                                                  >> 0x1eU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwrite;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__auto_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pstrb 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en)
                     ? ((IData)(7U) + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                       << 1U)) : ((IData)(0xdU) 
                                                  + 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                                   << 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_mbypass_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_release_ack 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_release_ack 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_beats1 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
            ? (7U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_last_beats1_decode_T_1) 
                        >> 2U))) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode)) 
           | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__relack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_d_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_h83ce4d1b__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkD_io_q_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sd_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_c_tlSource_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_3) 
              & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__auto_in_d_bits_opcode))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q_io_deq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_q_io_deq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_ready) 
                    & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__r_counter)) 
                        | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__r_beats1))) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___dec_T_45));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4index_1__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___chipMaster_master_mem_0_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__master_mem_0_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_1_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___tl2axi4_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4index_1__DOT__auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__nodeOut_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__slave_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4index_1__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___chipMaster_master_mem_0_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__master_mem_0_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi4index_1_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___tl2axi4_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4index_1__DOT__auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__nodeOut_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__slave_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__auto_out_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_release_ack 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_release_ack;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___hints_auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__nodeIn_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__auto_anon_out_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__auto_out_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_h1e650c0c__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T_3;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_hc22052a0__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_hc22052a0__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_h1e650c0c__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___mbypass_auto_in_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__nodeIn_1_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_in_1_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_3) 
              & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_in_d_bits_opcode))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_2_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle_1) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_2_d_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle_1)
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__winner_0))
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_1_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_45 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_d_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_1_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_auto_anon_out_0_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___dec_T_45 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__r_wins)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_d_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__auto_anon_out_0_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__r_wins));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sa_bits_beats;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__partial) 
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                        >> 3U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_o_ready));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__partial) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data 
            = (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide);
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___fixer_auto_anon_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_valid 
        = ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
               >> 0x1eU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__auto_anon_out_a_valid) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
              >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_enq_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask;
    vlSelf->__VdfgTmp_hc3984e35__0 = (((QData)((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
                                                        >> 0x18U))) 
                                       << 0x1cU) | (QData)((IData)(
                                                                   ((0x8000000U 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask) 
                                                                        << 0x18U)) 
                                                                    | ((0x7f80000U 
                                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
                                                                           << 3U)) 
                                                                       | ((0x40000U 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask) 
                                                                              << 0x10U)) 
                                                                          | ((0x3fc00U 
                                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
                                                                                << 2U)) 
                                                                             | ((0x200U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask) 
                                                                                << 8U)) 
                                                                                | ((0x1feU 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_mask)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_enq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
           == (2U | (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode) 
                              >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__partial 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_enq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_1 
        = (0xffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_last_beats1_decode_T_1 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___rbeats1_decode_T_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___a_last_beats1_decode_T_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__r_beats1 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode))
            ? (0x3ffU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___a_last_beats1_decode_T_1 
                            >> 2U))) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_beats1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxState_0)
            ? 0U : (0x3ffU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___a_last_beats1_decode_T_1 
                                 >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_enq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_address[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_address[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_address[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT___bar_auto_out_0_a_bits_address[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_out_0_a_bits_address[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_1_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_q_io_deq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_noDomain 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pstrb;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_beats1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats 
        = (0x1fU & ((IData)(1U) + (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                                     ? ((0x1eU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_1) 
                                                  >> 2U)) 
                                        | (3U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)))
                                     : 0U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state) 
           == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sd_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT____VdfgTmp_hb0ffb7a2__0 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_c_tlSource_valid_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_q_io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_q_io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_1 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_3 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_4 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_5 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_6 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_7 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_8 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_9 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_10 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_11 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_12 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_13 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_14 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_15 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_16 
        = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_17 
        = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_18 
        = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_19 
        = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_20 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_21 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__dec_22 
        = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__slave_bready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_7__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__slave_rready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_2__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_3__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_4__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_5__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_6__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT___GEN_3) 
           & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_corrupt 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_corrupt;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_denied 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_denied;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_mbypass_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_release_ack 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_release_ack 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT____Vcellinp__monitor__io_in_d_valid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_release_ack)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_beats1 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
            ? (0x3fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_last_beats1_decode_T_1 
                           >> 2U))) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_grant 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode)) 
           | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__relack 
        = (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_d_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3) 
              & (IData)(vlSelf->__VdfgTmp_h1e650c0c__0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkD_io_q_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___d_q_io_deq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sd_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_c_tlSource_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_set 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T_3) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_3) 
              & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__auto_in_d_bits_opcode))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q_io_deq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q_io_deq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_ready) 
                    & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__r_counter)) 
                        | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__r_beats1))) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_45));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4yank_1_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4deint_auto_anon_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__auto_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_1_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_1_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__nodeOut_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index_1__DOT__auto_out_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__io_in_d_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_in_d_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___dec_T_45));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_bready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_bready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_echo_real_last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__master_mem_0_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT___fpga_master_mem_0_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___axi4index_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___tl2axi4_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4index__DOT__auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__nodeOut_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4xbar_auto_anon_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_rready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_out_rready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_1[0U] 
        = ((((0x2fU >= (0x3fU & ((IData)(3U) * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source))))
              ? (7U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_0 
                               >> (0x3fU & ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source))))))
              : 0U) << 0x10U) | ((0x6000U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source) 
                                                     << 1U))) 
                                             << 0xdU)) 
                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size) 
                                     << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_param) 
                                                << 6U) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode) 
                                                  << 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_1[1U] 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_1[2U] 
        = (IData)(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data)) 
                   << 0x20U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_1[3U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data)) 
                    << 0x20U) >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_1_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT___xbar_1_auto_anon_out_0_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__auto_anon_out_0_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_mask;
    __Vtemp_h92bf4ede__0[0U] = (IData)(vlSelf->__VdfgTmp_hc3984e35__0);
    __Vtemp_h92bf4ede__0[1U] = (IData)((vlSelf->__VdfgTmp_hc3984e35__0 
                                        >> 0x20U));
    __Vtemp_h92bf4ede__0[2U] = 0U;
    __Vtemp_h92bf4ede__0[3U] = 0U;
    VL_SHIFTL_WWI(99,99,6, __Vtemp_ha6b67d45__0, __Vtemp_h92bf4ede__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___wide_T_1[0U] 
        = __Vtemp_ha6b67d45__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___wide_T_1[1U] 
        = __Vtemp_ha6b67d45__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___wide_T_1[2U] 
        = __Vtemp_ha6b67d45__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___wide_T_1[3U] 
        = (7U & __Vtemp_ha6b67d45__0[3U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide 
        = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift)) 
           | (vlSelf->__VdfgTmp_hc3984e35__0 << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                                                 << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_o_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats 
        = (0x1fU & ((IData)(3U) + (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode))
                                     ? 0U : ((0x1eU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_1) 
                                                 >> 2U)) 
                                             | (3U 
                                                > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size)))) 
                                   + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__partial)
                                       ? (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size)) 
                                           << 1U) | 
                                          (3U != (3U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size) 
                                                     >> 1U))))
                                       : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_beats1 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode))
            ? 0U : (7U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_last_beats1_decode_T_1) 
                             >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_beats1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_address[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_address[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_address[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__io_in_a_bits_address[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__auto_in_a_bits_address[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_enq_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stall 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
                >> 3U)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_first) 
                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_0) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_1) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_2) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_3) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_4) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_5) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_6) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_7)))))))) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_noDomain) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stalls_id) 
                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)))))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_bits_source) 
               >> 3U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_first) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_8) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_9) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_10) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_11) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_12) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_13) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_14) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_15)))))))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_noDomain) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stalls_id_1) 
                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkD_io_q_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sd_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_c_tlSource_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT____VdfgTmp_hb0ffb7a2__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__relack));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__relack)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT____VdfgTmp_hb0ffb7a2__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_7__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_8__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_9__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_10__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_11__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_12__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_13__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_9__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_2__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_2__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_3__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_3__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_4__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_4__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_5__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_5__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue17_BundleMap_6__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_6__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_2__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_3__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_4__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_5__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_6__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_7__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__Queue1_BundleMap_8__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__io_in_d_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__auto_out_d_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_beats1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats 
        = (0x1fU & ((IData)(1U) + (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                                     ? ((0x1eU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_1) 
                                                  >> 2U)) 
                                        | (3U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_size)))
                                     : 0U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_grant))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
           == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_opcode))
                ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_grant)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sd_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT____VdfgTmp_hb0ffb7a2__0 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_c_tlSource_valid_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_q_io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_q_io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_1 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_3 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_4 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_5 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_6 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_7 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_8 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_9 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_10 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_11 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_12 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_13 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_14 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_15 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_16 
        = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_17 
        = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_18 
        = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_19 
        = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_20 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_21 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__dec_22 
        = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__auto_in_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_7__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_11) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_0__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_2__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_3__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_3) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_4__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_5__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_5) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_6__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_6) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_7__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_7) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_8__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_8) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_9__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_9) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_10__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_10) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_11__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_11) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_12__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_12) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_13__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_13) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_14__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_OH_bools_14) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_15__io_deq_ready 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___queue_15_qs_15_deq_ready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_1 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_3 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_4 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_5 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_6 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_7 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_8 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_9 
        = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_10 
        = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_11 
        = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_12 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_13 
        = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_14 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_15 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_16 
        = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_17 
        = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_18 
        = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_19 
        = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_20 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_21 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__dec_22 
        = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_bready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_bready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT___axi4frag_auto_out_bready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__nodeOut_bready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_bready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__auto_out_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_7__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_11) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_bid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT__auto_anon_in_rready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__io_axi4_0_rready;
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_rready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_2__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_3__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_4__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_5__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_6__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_3) 
           & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__auto_in_rlast)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkA_io_q_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sa_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data 
        = (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state) 
                             << 5U))) ? 0U : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_1[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state) 
                                                      << 5U))))) 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_1[
              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state))] 
              >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state) 
                           << 5U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_mask 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_mask;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_opcode 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_opcode;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_o_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_size 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_size;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkA_io_q_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sa_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_beats;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_beats1)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__partial) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_bits_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_source 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_source;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_bits_address 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sd_bits_beats;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q_io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q_io_deq_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkD_io_q_bits_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sd_bits_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkD_io_c_tlSource_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_c_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_d_tlSource_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_c_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__io_d_tlSource_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkD_io_a_tlSource_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (8U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x10U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x18U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x20U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x28U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x30U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x38U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkD_io_q_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sd_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_beats;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_c_tlSource_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT____VdfgTmp_hb0ffb7a2__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__relack));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__relack)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT____VdfgTmp_hb0ffb7a2__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_7__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_7__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_8__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_8__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_9__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_9__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_10__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_10__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_11__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_11__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_12__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_12__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue17_BundleMap_13__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue17_BundleMap_13__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_9__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_10__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_11__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_12__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_13__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_14__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_15__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_16__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__Queue1_BundleMap_17__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_0__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_0__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_1__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_2__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_2__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_3__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_3__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_4__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_4__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_5__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_5__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_6__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_6__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_7__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_7__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_8__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_8__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_9__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_9 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_9__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_10__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_10__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_11__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_11 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_11__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_12__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_12__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_13__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_13__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_14__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_14 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_14__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_15__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_dec_15 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____Vcellinp__qs_queue_15__io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__auto_anon_in_rlast));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__auto_in_bready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_7__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_7__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_8__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_8__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_9__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_9__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_10__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_10__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_11__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_11__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_12__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_12__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_13__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_13__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_2__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_2__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_3__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_3__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_4__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_4__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_5__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_5__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue17_BundleMap_6__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue17_BundleMap_6__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sa_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkA_io_q_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sa_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_1[0U] 
        = ((((0x2fU >= (0x3fU & ((IData)(3U) * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source))))
              ? (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_0 
                               >> (0x3fU & ((IData)(3U) 
                                            * (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source))))))
              : 0U) << 0x10U) | ((0x6000U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_source) 
                                                     << 1U))) 
                                             << 0xdU)) 
                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_size) 
                                     << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_param) 
                                                << 6U) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_opcode) 
                                                  << 3U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_1[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_address;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_1[2U] 
        = (IData)(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data)) 
                   << 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_1[3U] 
        = (IData)((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_bits_data)) 
                    << 0x20U) >> 0x20U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sa_bits_beats;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__partial) 
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_i_last) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                        >> 3U))))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT____Vcellinp__inject__io_o_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___fixer_auto_anon_out_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_valid 
        = ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
               >> 0x1eU)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__auto_anon_out_a_valid) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_bits_address 
              >> 0x1eU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sd_bits_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__io_d_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_beats 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sd_bits_beats;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q_io_deq_ready;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_enq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q_io_deq_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkD_io_q_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sd_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_q_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkD_io_c_tlSource_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_c_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_d_tlSource_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_c_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__io_d_tlSource_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sinkD_io_a_tlSource_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (8U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x10U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x18U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x20U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x28U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x30U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_free_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__io_a_tlSource_valid) 
           & (0x38U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_q__DOT__io_deq_bits_source))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sa_bits_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data 
        = (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
                             << 5U))) ? 0U : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_1[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
                                                      << 5U))))) 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_1[
              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))] 
              >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
                           << 5U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__io_deq_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_i_ready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_i_ready;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___inject_io_o_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__io_o_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_1_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_1_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___xbar_1_auto_anon_out_0_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__auto_anon_out_0_a_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_sd_bits_last;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__io_d_tlSource_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_0__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_1__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_2__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_3__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_4__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_5__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_6__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__io_free_valid 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT____Vcellinp__cams_7__io_free_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkA_io_q_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sa_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sinkA_io_q_bits_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sa_bits_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__io_q_bits_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_first_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_q__DOT__io_enq_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__auto_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__auto_sbypass_node_in_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_bits_data 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sa_bits_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__io_enq_bits_last 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_sa_bits_last;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__auto_node_in_in_a_valid;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__io_in_a_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__auto_in_a_valid;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__15\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__16\n"); );
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__17(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__17\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx) 
                  != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx) 
                  != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_ridx));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_ridx));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__18(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__18\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q) {
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray = 0U;
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__io_enq_ready)));
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx) 
                  != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q)))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__io_enq_ready)));
        __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx) 
                  != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q)))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__unnamedblk1__DOT__widx;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT___ridx_ridx_gray_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT___sink_valid_io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT___output_chain_3_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT___output_chain_2_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT___output_chain_1_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT___output_chain_io_q 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__io_q;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_async_ridx));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_async_ridx));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__io_q));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__io_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__20(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__20\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_sink_reset_n) {
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
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_paddr);
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_6_paddr);
        }
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_sink_reset_n)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_sink_reset_n)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__douten 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_sink_reset_n) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_async_safe_sink_reset_n) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__douten 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe;
}
