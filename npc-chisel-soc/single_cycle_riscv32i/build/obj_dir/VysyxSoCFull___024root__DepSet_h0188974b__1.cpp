// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__14(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__dout 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o) 
            << 0x10U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__dout 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__dout;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__15(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT____Vcellinp__asic__spi_miso 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_miso) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT___flash_miso));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_miso 
        = vlSelfRef.ysyxSoCFull__DOT____Vcellinp__asic__spi_miso;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_miso 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_miso;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_miso 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_miso;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_miso;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__16(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state))
            ? (4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__AXI_R_fire)) 
                     << 2U)) : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state))
                                 ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___n_state_T_5) 
                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__flush_flg))
                                     ? 0U : 3U) : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state))
                                                    ? 
                                                   (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__flush_flg)) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__AXI_R_fire))
                                                     ? 3U
                                                     : 
                                                    (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__AXI_R_fire)) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__flush_flg))
                                                      ? 4U
                                                      : 
                                                     (2U 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__AXI_R_fire) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__flush_flg))) 
                                                         << 1U))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_ifu_ar_fire)
                                                      ? 2U
                                                      : 1U)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state)) 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu_io_pipe_in_valid_r) 
                                                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__flush_flg)) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_arready))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_1 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_2 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_3 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_1) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_2) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_3)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__17(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__17\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT___io_dq_wire = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                   ? 0U
                                                   : 0xffffffffU) 
                                                 & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                       ? 0U
                                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                         ? 0U
                                                         : 0xffffffffU)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                        ? 0U
                                                        : 0xffffffffU))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                    ? 0U
                                                    : 0xffffffffU)) 
                                               | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                                      ? 0xffffffffU
                                                      : 0U) 
                                                    & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                                         ? 0xffffffffU
                                                         : 0U) 
                                                       & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                                            ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__dout
                                                            : 0U) 
                                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                                              ? 0xffffffffU
                                                              : 0U)))) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                                        ? 0xffffffffU
                                                        : 0U) 
                                                      & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                                           ? 0xffffffffU
                                                           : 0U) 
                                                         & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                                              ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__dout
                                                              : 0U) 
                                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                                                ? 0xffffffffU
                                                                : 0U))))) 
                                                  & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT____Vcellinp__data_in_buf__out_en)
                                                       ? 0xffffffffU
                                                       : 0U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en)
                                                         ? 0xffffffffU
                                                         : 0U))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_i 
        = (0xffffU & (vlSelfRef.ysyxSoCFull__DOT___io_dq_wire 
                      >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_i 
        = (0xffffU & (vlSelfRef.ysyxSoCFull__DOT___io_dq_wire 
                      >> 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_i 
        = (0xffffU & (vlSelfRef.ysyxSoCFull__DOT___io_dq_wire 
                      >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_i 
        = (0xffffU & (vlSelfRef.ysyxSoCFull__DOT___io_dq_wire 
                      >> 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
        = vlSelfRef.ysyxSoCFull__DOT___io_dq_wire;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
        = vlSelfRef.ysyxSoCFull__DOT___io_dq_wire;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__din 
        = vlSelfRef.ysyxSoCFull__DOT___io_dq_wire;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___data_in_buf_din 
        = vlSelfRef.ysyxSoCFull__DOT___io_dq_wire;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__din 
        = vlSelfRef.ysyxSoCFull__DOT___io_dq_wire;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_dq 
        = vlSelfRef.ysyxSoCFull__DOT___io_dq_wire;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_dq = vlSelfRef.ysyxSoCFull__DOT___io_dq_wire;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dq 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_dq;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dq 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_dq;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dq 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_dq;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dq 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dq;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__dio 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dq;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__dio 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dq;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_input_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dq;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_input_i;
}

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__act(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<14> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VysyxSoCFull___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__nba(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VysyxSoCFull___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7892, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VysyxSoCFull___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VysyxSoCFull___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7892, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7892, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VysyxSoCFull___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VysyxSoCFull___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.externalPins_ps2_clk 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_clk");}
    if (VL_UNLIKELY((vlSelfRef.externalPins_ps2_data 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_data");}
    if (VL_UNLIKELY((vlSelfRef.externalPins_uart_rx 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_uart_rx");}
}
#endif  // VL_DEBUG
