// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

void VysyxSoCFull___024root___nba_sequent__TOP__95(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__95\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w;
}

void VysyxSoCFull___024root___nba_sequent__TOP__96(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__96\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__rst_i) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o = 1U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__stage1_rst_i) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o = 1U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__stage1_clk_en_i) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__rst_i) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__async_dat_i));
}

void VysyxSoCFull___024root___nba_sequent__TOP__97(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__97\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_addr;
}

void VysyxSoCFull___024root___nba_sequent__TOP__98(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__98\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__io_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__io_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__io_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_reset_chain_io_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__io_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__reset 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_reset_chain_io_q) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__reset));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__io_d;
}

void VysyxSoCFull___024root___nba_sequent__TOP__99(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__99\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_sw = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_led = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_sw 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_in;
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_psel) 
              & (0U == (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_paddr))) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwrite))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_led 
                = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwdata);
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_psel) 
              & (8U == (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_paddr))) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwrite))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_led;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_0 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (0xfU 
                                                    & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg), 3U)))
                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, 
                                                               (0xfU 
                                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (0xfU 
                                                               & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg), 3U))))) 
                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                       (3U & (VL_SHIFTL_III(7,7,32, 
                                            (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (0xfU 
                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg), 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_1 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (0xfU 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 4U)), 3U)))
                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, 
                                                               (0xfU 
                                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                   >> 4U)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (0xfU 
                                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                  >> 4U)), 3U))))) 
                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                       (3U & (VL_SHIFTL_III(7,7,32, 
                                            (0xfU & 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                              >> 4U)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (0xfU 
                                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                             >> 4U)), 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_2 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (0xfU 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 8U)), 3U)))
                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, 
                                                               (0xfU 
                                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                   >> 8U)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (0xfU 
                                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                  >> 8U)), 3U))))) 
                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                       (3U & (VL_SHIFTL_III(7,7,32, 
                                            (0xfU & 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                              >> 8U)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (0xfU 
                                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                             >> 8U)), 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_3 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (0xfU 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0xcU)), 3U)))
                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, 
                                                               (0xfU 
                                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                   >> 0xcU)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (0xfU 
                                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                  >> 0xcU)), 3U))))) 
                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                       (3U & (VL_SHIFTL_III(7,7,32, 
                                            (0xfU & 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                              >> 0xcU)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (0xfU 
                                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                             >> 0xcU)), 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_4 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (0xfU 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x10U)), 3U)))
                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, 
                                                               (0xfU 
                                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                   >> 0x10U)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (0xfU 
                                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                  >> 0x10U)), 3U))))) 
                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                       (3U & (VL_SHIFTL_III(7,7,32, 
                                            (0xfU & 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                              >> 0x10U)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (0xfU 
                                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                             >> 0x10U)), 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_5 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (0xfU 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x14U)), 3U)))
                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, 
                                                               (0xfU 
                                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                   >> 0x14U)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (0xfU 
                                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                  >> 0x14U)), 3U))))) 
                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                       (3U & (VL_SHIFTL_III(7,7,32, 
                                            (0xfU & 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                              >> 0x14U)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (0xfU 
                                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                             >> 0x14U)), 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_6 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (0xfU 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                       >> 0x18U)), 3U)))
                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, 
                                                               (0xfU 
                                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                   >> 0x18U)), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (0xfU 
                                                               & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                  >> 0x18U)), 3U))))) 
                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                       (3U & (VL_SHIFTL_III(7,7,32, 
                                            (0xfU & 
                                             (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                              >> 0x18U)), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (0xfU 
                                                          & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                             >> 0x18U)), 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_7 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                    >> 0x1cU), 3U)))
                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, 
                                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                                >> 0x1cU), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, 
                                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                               >> 0x1cU), 3U))))) 
                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT___GEN[
                       (3U & (VL_SHIFTL_III(7,7,32, 
                                            (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                             >> 0x1cU), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_seg 
                                                          >> 0x1cU), 3U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_gpio_seg_7;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_6;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__gpio_bundle_seg_7;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_out;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_0;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_1;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_2;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_3;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_4;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_5;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_6;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__gpio_seg_7;
    vlSelfRef.externalPins_gpio_out = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_out;
    vlSelfRef.externalPins_gpio_seg_0 = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_0;
    vlSelfRef.externalPins_gpio_seg_1 = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_1;
    vlSelfRef.externalPins_gpio_seg_2 = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_2;
    vlSelfRef.externalPins_gpio_seg_3 = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_3;
    vlSelfRef.externalPins_gpio_seg_4 = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_4;
    vlSelfRef.externalPins_gpio_seg_5 = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_5;
    vlSelfRef.externalPins_gpio_seg_6 = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_6;
    vlSelfRef.externalPins_gpio_seg_7 = vlSelfRef.ysyxSoCFull__DOT__externalPins_gpio_seg_7;
}

void VysyxSoCFull___024root___nba_sequent__TOP__100(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__100\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1));
    if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_3 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba)))))
                              : 0U)));
    }
    if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_2 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba)))))
                              : 0U)));
    }
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_1 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba)))))
                              : 0U)));
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_0 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba)))))
                              : 0U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
        = (((QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_3) 
                              << 0xdU) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_2)))) 
            << 0x1aU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_1) 
                                          << 0xdU) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_0)))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
        = (((QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_3) 
                              << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_2)))) 
            << 0x12U) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_1) 
                                          << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_0)))));
}

void VysyxSoCFull___024root___nba_sequent__TOP__101(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__101\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T_1));
    if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_3 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba)))))
                              : 0U)));
    }
    if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_2 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba)))))
                              : 0U)));
    }
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_1 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba)))))
                              : 0U)));
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_0 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba)))))
                              : 0U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
        = (((QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_3) 
                              << 0xdU) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_2)))) 
            << 0x1aU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_1) 
                                          << 0xdU) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_0)))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
        = (((QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_3) 
                              << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_2)))) 
            << 0x12U) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_1) 
                                          << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_0)))));
}

void VysyxSoCFull___024root___nba_sequent__TOP__102(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__102\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1));
    if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_3 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba)))))
                              : 0U)));
    }
    if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_2 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba)))))
                              : 0U)));
    }
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_1 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba)))))
                              : 0U)));
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_0 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba)))))
                              : 0U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
        = (((QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_3) 
                              << 0xdU) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_2)))) 
            << 0x1aU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_1) 
                                          << 0xdU) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_0)))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
        = (((QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_3) 
                              << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_2)))) 
            << 0x12U) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_1) 
                                          << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_0)))));
}

void VysyxSoCFull___024root___nba_sequent__TOP__103(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__103\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T_1));
    if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_3 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba)))))
                              : 0U)));
    }
    if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_2 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba)))))
                              : 0U)));
    }
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_1 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba)))))
                              : 0U)));
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_0 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba)))))
                              : 0U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
        = (((QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_3) 
                              << 0xdU) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_2)))) 
            << 0x1aU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_1) 
                                          << 0xdU) 
                                         | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_0)))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
        = (((QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_3) 
                              << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_2)))) 
            << 0x12U) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_1) 
                                          << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_0)))));
}

void VysyxSoCFull___024root___nba_sequent__TOP__104(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__104\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mstatus = 0x1800U;
    } else if ((1U & (~ (((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_3)) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_0)) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_1)) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_2)) 
                         | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN)))))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mstatus 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__wdata;
    }
    if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_3) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_0))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mtvec 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__wdata;
    }
    if (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_processtpe)) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_valid))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mcause = 0xbU;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mepc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op1;
    } else {
        if ((1U & (~ ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_3)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_1)) 
                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_2)))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mcause 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__wdata;
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_3)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_0)) 
                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_1)))))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mepc 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__wdata;
        }
    }
}

void VysyxSoCFull___024root___nba_sequent__TOP__106(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__106\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__reset)
            ? 0U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_4 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_6 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_4)) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state)));
}

void VysyxSoCFull___024root___nba_sequent__TOP__107(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__107\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__di 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_in) 
                    >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push;
}

void VysyxSoCFull___024root___nba_sequent__TOP__108(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__108\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__data_in_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_read_data_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__push_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_ack_i;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dqm 
        = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dqm));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cke)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cs) 
             << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ras) 
                       << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cas) 
                                   << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_we)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dqm 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dqm) 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cke)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cs) 
             << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ras) 
                       << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cas) 
                                   << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_we)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dqm 
        = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dqm));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cke)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cs) 
             << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ras) 
                       << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cas) 
                                   << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_we)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dqm 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dqm) 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cke)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cs) 
             << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ras) 
                       << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cas) 
                                   << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_we)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T_1 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T_1 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb));
}

void VysyxSoCFull___024root___nba_sequent__TOP__109(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__109\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__enable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lcr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__pop 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__we 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push;
}

void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpra];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out;
}

void VysyxSoCFull___024root___nba_sequent__TOP__110(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__110\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count;
}

void VysyxSoCFull___024root___nba_sequent__TOP__111(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__111\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_reg_pc 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_reg_pc;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_in_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_in_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_rready;
}

void VysyxSoCFull___024root___nba_sequent__TOP__112(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__112\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___isu_io_pipe_in_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___isu_io_pipe_in_ready;
}

void VysyxSoCFull___024root___nba_sequent__TOP__113(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__113\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_in_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_in_ready;
}

void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2Ready_T 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__busy) 
                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs2_addr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch3Ready_T_3 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__busy) 
                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs1_addr)));
}

void VysyxSoCFull___024root___nba_sequent__TOP__114(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__114\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__pos_edge 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge;
}

void VysyxSoCFull___024root___nba_sequent__TOP__115(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__115\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__len 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__go 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 
        = ((0x80U & ((~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__len))) 
                     << 7U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__len));
}

void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o 
        = (0xffU & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                       & ((- (IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) 
                          | (- (IData)((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))))))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__lsb) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                        - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                        - ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_negedge))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                        - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_negedge)
                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                         : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                            - (IData)(1U))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_ss = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_ss;
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__ss = (1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss));
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_ss 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss) 
                 >> 7U));
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__ss;
}

void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__raddr = 
        ((0xfffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                       << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__mosi));
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__addr 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__raddr;
}

void VysyxSoCFull___024root___nba_sequent__TOP__116(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__116\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_op2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_is2exe_ch2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_processtpe 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_is2exe_processtpe;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_op1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_is2exe_ch3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__W0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_gpr_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__W0_addr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_gpr_waddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_gpr_we)) 
           & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_gpr_waddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN 
        = (0x300U == (0xfffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_2 
        = (0x342U == (0xfffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_is2exe_ch1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_1 
        = (0x341U == (0xfffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_0 
        = (0x305U == (0xfffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_processtpe 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_is2exe_processtpe;
}

void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__R0_en)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__R0_addr]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__R1_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__R1_en)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__R1_addr]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___gpr_ext_R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__R0_data;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___gpr_ext_R1_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__gpr_ext__DOT__R1_data;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2_data 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs2_addr))
            ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___gpr_ext_R0_data);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1_data 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs1_addr))
            ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___gpr_ext_R1_data);
}

void VysyxSoCFull___024root___nba_sequent__TOP__117(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__117\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___lsu_io_in_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_ready;
}

void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___n_state_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__in_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__n_state 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__c_state)
                  ? (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_ready) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__out_valid)))
                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___n_state_T_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___gpr_wdata_T_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___n_state_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_fencei_is_fencei 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___io_fencei_is_fencei_T_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___n_state_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___n_state_T_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_is2exe_processunit)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___io_fencei_is_fencei_T_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___gpr_wdata_T) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___n_state_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_fencei_is_fencei 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_fencei_is_fencei;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_bj_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_valid) 
           & (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_bits_bjtpe)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__eq)) 
              | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__eq)) 
                  & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_bits_bjtpe))) 
                 | (((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_bits_bjtpe)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__cmp)) 
                    | (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_bits_bjtpe)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__cmp)) 
                       | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__cmp)) 
                           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_bits_bjtpe))) 
                          | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__cmp)) 
                              & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_bits_bjtpe))) 
                             | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_in_bits_bjtpe) 
                                >> 3U))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_3 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_processtpe) 
               >> 1U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_bj_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_processtpe) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_fencei_is_fencei 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_fencei_is_fencei;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_io_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_out_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_io_bj_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__alu__DOT__io_bj_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_out_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_bj_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_bj_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_bj_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_io_bj_valid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_bj_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_bj_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_bj_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_bj_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_bj_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__6(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_ifu_ar_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_arready_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rready_0 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_1) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___n_state_T_10))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___n_state_T_16) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgRegularize_h520b9443_0_1)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_hit_handshake 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__hit) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rready_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_rready;
}

void VysyxSoCFull___024root___nba_sequent__TOP__118(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__118\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__hsync 
        = (0x60U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid 
        = ((0x90U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt)) 
           & (0x310U >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__hsync;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid)
            ? (0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt) 
                         - (IData)(0x91U))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_hsync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_addr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_hsync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_hsync;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_hsync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_hsync;
    vlSelfRef.externalPins_vga_hsync = vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_hsync;
}

void VysyxSoCFull___024root___nba_sequent__TOP__119(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__119\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__data;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___ps2ChiselHelper_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2ChiselHelper__DOT__ready;
}

void VysyxSoCFull___024root___nba_comb__TOP__7(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__out_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip0_io_out_en) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip1_io_out_en));
}

void VysyxSoCFull___024root___nba_comb__TOP__8(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__8\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__out_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip0_io_out_en) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip1_io_out_en));
}

void VysyxSoCFull___024root___nba_sequent__TOP__120(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__120\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cnt = vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd = vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__cmd 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT___n_state_T_7 
        = (0x35U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd));
}

void VysyxSoCFull___024root___nba_sequent__TOP__121(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__121\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index 
        = (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                  >> 1U) - (IData)(2U)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__qpi_en) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__douten 
            = (8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout 
            = (0xfU & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__CMD_EBH) 
                           >> 4U) : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__CMD_EBH)
                                      : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                          ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                             >> 0x14U)
                                          : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x10U)
                                              : ((4U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                     : 0U)))))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__douten 
            = (0xeU > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout 
            = (0xfU & ((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                        ? (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__CMD_EBH) 
                                 >> (7U & ((IData)(7U) 
                                           - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                        : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 0U))))))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__douten;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout;
}

void VysyxSoCFull___024root___nba_sequent__TOP__122(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__122\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n;
}

void VysyxSoCFull___024root___nba_comb__TOP__9(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__9\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpra];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
            << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                 >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                 >> 2U));
}

void VysyxSoCFull___024root___nba_comb__TOP__10(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__10\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_rise 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
}

void VysyxSoCFull___024root___nba_comb__TOP__11(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__11\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_rise 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
}

void VysyxSoCFull___024root___nba_sequent__TOP__123(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__123\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__12(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__12\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_write_w) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rvalid_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_read_w) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bvalid_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_last_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rvalid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rvalid_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bvalid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bvalid_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rvalid_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bvalid_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__13(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__13\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rlast 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_read)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_0) 
               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_len))
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rlast;
}

void VysyxSoCFull___024root___nba_sequent__TOP__124(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__124\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pready;
}

void VysyxSoCFull___024root___nba_comb__TOP__14(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__14\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_0 
        = (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_15_io_deq_bits_real_last) 
                << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_14_io_deq_bits_real_last) 
                          << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_13_io_deq_bits_real_last) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_12_io_deq_bits_real_last))) 
             << 0xcU) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_11_io_deq_bits_real_last) 
                            << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_10_io_deq_bits_real_last) 
                                      << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_9_io_deq_bits_real_last) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_8_io_deq_bits_real_last))) 
                         << 8U)) | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_7_io_deq_bits_real_last) 
                                        << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_6_io_deq_bits_real_last) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_5_io_deq_bits_real_last) 
                                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_4_io_deq_bits_real_last))) 
                                     << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_3_io_deq_bits_real_last) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_2_io_deq_bits_real_last) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_1_io_deq_bits_real_last) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_io_deq_bits_real_last)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN 
        = (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_15_io_enq_ready) 
                << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_14_io_enq_ready) 
                          << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_13_io_enq_ready) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_12_io_enq_ready))) 
             << 0xcU) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_11_io_enq_ready) 
                            << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_10_io_enq_ready) 
                                      << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_9_io_enq_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_8_io_enq_ready))) 
                         << 8U)) | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_7_io_enq_ready) 
                                        << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_6_io_enq_ready) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_5_io_enq_ready) 
                                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_4_io_enq_ready))) 
                                     << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_3_io_enq_ready) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_2_io_enq_ready) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_1_io_enq_ready) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_io_enq_ready)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__15(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__15\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_6 
        = (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_31_io_deq_bits_real_last) 
                << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_30_io_deq_bits_real_last) 
                          << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_29_io_deq_bits_real_last) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_28_io_deq_bits_real_last))) 
             << 0xcU) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_27_io_deq_bits_real_last) 
                            << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_26_io_deq_bits_real_last) 
                                      << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_25_io_deq_bits_real_last) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_24_io_deq_bits_real_last))) 
                         << 8U)) | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_23_io_deq_bits_real_last) 
                                        << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_22_io_deq_bits_real_last) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_21_io_deq_bits_real_last) 
                                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_20_io_deq_bits_real_last))) 
                                     << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_19_io_deq_bits_real_last) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_18_io_deq_bits_real_last) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_17_io_deq_bits_real_last) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_16_io_deq_bits_real_last)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_3 
        = (((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_31_io_enq_ready) 
                << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_30_io_enq_ready) 
                          << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_29_io_enq_ready) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_28_io_enq_ready))) 
             << 0xcU) | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_27_io_enq_ready) 
                            << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_26_io_enq_ready) 
                                      << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_25_io_enq_ready) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_24_io_enq_ready))) 
                         << 8U)) | ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_23_io_enq_ready) 
                                        << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_22_io_enq_ready) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_21_io_enq_ready) 
                                          << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_20_io_enq_ready))) 
                                     << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_19_io_enq_ready) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_18_io_enq_ready) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_17_io_enq_ready) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_16_io_enq_ready)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__16(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__16\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_en)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_addr]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT___ram_ext_R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__R0_data;
}

void VysyxSoCFull___024root___nba_comb__TOP__17(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__17\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_enq_ready) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
}

void VysyxSoCFull___024root___nba_comb__TOP__18(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__18\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__R0_en)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__R0_addr]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___ram_ext_R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__R0_data;
}

void VysyxSoCFull___024root___nba_comb__TOP__19(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__19\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___anonIn_awready_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_ready) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
}

void VysyxSoCFull___024root___nba_comb__TOP__20(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__20\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arecho_real_last 
        = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arecho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last;
}

void VysyxSoCFull___024root___nba_comb__TOP__21(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__21\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last 
        = (1U & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awecho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_bits_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last;
}

void VysyxSoCFull___024root___nba_sequent__TOP__125(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__125\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__valid 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__ren;
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__cmd 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd;
}

void VysyxSoCFull___024root___nba_comb__TOP__22(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__22\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_data;
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(IData/*31:0*/ id, IData/*31:0*/ bank_addr, IData/*31:0*/ row_addr, IData/*31:0*/ col_addr, IData/*31:0*/ &rdata);

void VysyxSoCFull___024root___nba_comb__TOP__23(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__23\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr))))
            ? (0x1fffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr))))
            ? (0x1ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4)
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen) 
                                     - (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_bank_addr)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_ren) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__7__rdata);
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__7__rdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_rdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip0_io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o;
}

void VysyxSoCFull___024root___nba_comb__TOP__24(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__24\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr))))
            ? (0x1fffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr))))
            ? (0x1ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4)
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen) 
                                     - (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_bank_addr)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_ren) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__9__rdata);
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__9__rdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_rdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip1_io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o;
}

void VysyxSoCFull___024root___nba_comb__TOP__25(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__25\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr))))
            ? (0x1fffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr))))
            ? (0x1ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4)
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen) 
                                     - (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_bank_addr)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_ren) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__11__rdata);
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__11__rdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_rdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip0_io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o;
}

void VysyxSoCFull___024root___nba_comb__TOP__26(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__26\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr))))
            ? (0x1fffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr))))
            ? (0x1ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr))))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4)
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen) 
                                     - (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_bank_addr)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_ren) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__13__rdata);
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__13__rdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_rdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip1_io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o;
}

void VysyxSoCFull___024root___nba_sequent__TOP__126(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__126\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
}

void VysyxSoCFull___024root___nba_sequent__TOP__127(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__127\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_15_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__128(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__128\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_14_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__129(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__129\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_13_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__130(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__130\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_12_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__131(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__131\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_11_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__132(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__132\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_10_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__133(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__133\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_9_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__134(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__134\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_8_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__135(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__135\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_7_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__136(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__136\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_6_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__137(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__137\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_5_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__138(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__138\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_4_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__139(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__139\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_3_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__140(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__140\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_2_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__141(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__141\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_1_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__142(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__142\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__143(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__143\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_31_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__144(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__144\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_30_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__145(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__145\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_29_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__146(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__146\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_28_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__147(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__147\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_27_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__148(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__148\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_26_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__149(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__149\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_25_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__150(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__150\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_24_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__151(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__151\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_23_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__152(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__152\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_22_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__153(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__153\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_21_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__154(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__154\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_20_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__155(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__155\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_19_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__156(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__156\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_18_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__157(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__157\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_17_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_sequent__TOP__158(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__158\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___Queue1_BundleMap_16_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__27(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__27\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isdmem) 
               | ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12)))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_5 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2 = 1U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arvalid;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arsize;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_araddr;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2 = 0U;
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arvalid;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arsize;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_araddr;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 = 0U;
            }
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_3 
            = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2 
            = ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_1)))
                ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_araddr);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_3;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bready 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_3) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bready));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_3) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wvalid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_3) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awvalid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_5) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arvalid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rready 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_5) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rready));
    } else {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2 = 1U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arvalid;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arsize;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_araddr;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2 = 0U;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2 = 0U;
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arvalid;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arsize;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_araddr;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2 = 0U;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1 = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0 = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2 
                    = ((1U & ((~ (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state))) 
                              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_4)))
                        ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_araddr);
            }
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_3 
            = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12)) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_4;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bready 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bready));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wvalid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awvalid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_6) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arvalid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rready 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_6) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rready));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arburst)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wstrb;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awsize;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awaddr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__io_axi4_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__io_axi4_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__io_axi4_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_clint_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_araddr 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_araddr 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_araddr 
                                                   >> 0x1cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11 
        = (0xfU & (0xaU ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_araddr 
                           >> 0x1cU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = (1U & ((~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awaddr 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awaddr 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awaddr 
                                                   >> 0x1cU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11 
        = (0xfU & (0xaU ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awaddr 
                           >> 0x1cU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestARIO_T_11))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11) 
                         >> 1U)) | (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___requestAWIO_T_11))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_bits 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_burst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_size 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_addr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_size 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_bits;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_addr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arburst_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wlast_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_araddr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wdata_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wstrb_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awaddr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arburst_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arburst_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wlast_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wlast_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_araddr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_araddr_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wdata_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wdata_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wstrb_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wstrb_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awaddr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awaddr_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_write_data_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wdata_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_write_data_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_write_data_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_write_data_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_write_data_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_write_data_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_write_data_i;
}

void VysyxSoCFull___024root___nba_comb__TOP__28(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__28\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
}

void VysyxSoCFull___024root___nba_comb__TOP__29(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__29\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__stx_pad_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__uart_tx 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__stx_pad_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__uart_tx;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__uart_tx 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_uart_tx 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__uart_tx;
    vlSelfRef.externalPins_uart_tx = vlSelfRef.ysyxSoCFull__DOT__externalPins_uart_tx;
}

void VysyxSoCFull___024root___nba_comb__TOP__30(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__30\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_set_en));
}

void VysyxSoCFull___024root___nba_comb__TOP__31(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__31\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__last)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_negedge)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__neg_edge)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__pos_edge)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_negedge)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__neg_edge)
             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__pos_edge)) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__last)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_clk)));
}

void VysyxSoCFull___024root___nba_comb__TOP__32(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__32\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__miso = 
        (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__ss) 
               | ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
                    & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))
                    ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                    : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                  >> 0x1fU)));
    vlSelfRef.ysyxSoCFull__DOT___flash_miso = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__miso;
}

void VysyxSoCFull___024root___nba_comb__TOP__33(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__33\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN = 
        ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_ss)) 
         & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt)));
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_ss)) 
                 & (~ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt)))));
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_miso 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_ss) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN_0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__temp)))));
    vlSelfRef.ysyxSoCFull__DOT___bitrev_io_miso = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_miso;
}

void VysyxSoCFull___024root___nba_comb__TOP__34(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__34\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__dmem_rdata 
           >> (0x18U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_op1 
                        << 3U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__casez_tmp_1 
        = ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_processtpe))
            ? ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_processtpe))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata
                : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_processtpe))
                    ? (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata)
                    : (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata)))
            : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_processtpe))
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata
                : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_processtpe))
                    ? (((- (IData)((1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata))
                    : (((- (IData)((1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__shift_rdata)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_out_bits_gpr_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__casez_tmp_1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___lsu_io_out_bits_gpr_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_out_bits_gpr_wdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__35(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__35\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__rdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mstatus
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_0)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mtvec
                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_1)
                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mepc
                    : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT___GEN_2)
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mcause
                        : ((0xf11U == (0xfffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op2))
                            ? 0x79737978U : ((0xf12U 
                                              == (0xfffU 
                                                  & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op2))
                                              ? 0x16f6ea0U
                                              : 0U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_bj_target 
        = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_processtpe))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mtvec
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__mepc);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__wdata 
        = (((- (IData)((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_processtpe)))) 
            & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__rdata) 
           | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_in_bits_op1);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_out_bits_csr_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_bj_target 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_bj_target;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_out_bits_csr_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__io_out_bits_csr_rdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__36(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__36\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__fencing 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_fencei_is_fencei) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_fencei_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_fencei_flush_icache_fencing 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__fencing;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_fencei_flush_icache_fencing 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_fencei_flush_icache_fencing;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_fencei_flush_icache_fencing 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_fencei_flush_icache_fencing;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_flush_flush_flg 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_bj_valid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_fencei_flush_icache_fencing));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_flush_flush_flg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_flush_flush_flg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_flush_flush_flg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_flush_flush_flg;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_flush_flush_flg 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_flush_flush_flg;
}

void VysyxSoCFull___024root___nba_comb__TOP__37(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__37\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__exefsh 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_io_out_valid) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_out_valid) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___lsu_io_out_valid) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_fencei_fencei_done))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_for_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__exefsh;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_for_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_for_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_for_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__validForEX 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_gpr_we)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2DependEX 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs2_addr)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_gpr_waddr) 
               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs2_addr)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__validForEX)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1DependEX 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs1_addr)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_gpr_waddr) 
               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs1_addr)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__validForEX)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2ForEX 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___rs2ForEX_T) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2DependEX));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2ForWB 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs2_addr)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_wb_gpr_waddr) 
               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs2_addr)) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_wb_gpr_we)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2DependEX)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___GEN)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1ForEX 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___rs2ForEX_T) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1DependEX));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1ForWB 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs1_addr)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_wb_gpr_waddr) 
               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_rs1_addr)) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_wb_gpr_we)) 
                 & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1DependEX)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___GEN)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch3_rs1_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1ForEX) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1ForWB));
}

void VysyxSoCFull___024root___nba_comb__TOP__38(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__38\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__v_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_addr 
        = (0x7ffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr) 
                       + ((IData)(0x280U) * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_v_addr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_valid;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_valid;
    vlSelfRef.externalPins_vga_valid = vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__39(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__39\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_read)
            ? ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state)) 
               & (0U == (0xffffU & (((0U == (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             (7U 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in)), 4U)))
                                      ? 0U : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_1[
                                              (((IData)(0xfU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   (7U 
                                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in)), 4U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   (7U 
                                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in)), 4U))))) 
                                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_1[
                                       (3U & (VL_SHIFTL_III(7,7,32, 
                                                            (7U 
                                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in)), 4U) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in)), 4U)))))))
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_write)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_bvalid_T) 
               & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state)))
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__40(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__40\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___nodeIn_bvalid_T_2));
}

void VysyxSoCFull___024root___nba_comb__TOP__41(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__41\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
}

void VysyxSoCFull___024root___nba_comb__TOP__42(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__42\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_3) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
}

void VysyxSoCFull___024root___nba_comb__TOP__43(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__43\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rdata 
        = ((((0xff00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                           ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                              >> 0x18U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                         << 8U)) | (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                              ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                                                 >> 0x10U)
                                              : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)))) 
            << 0x10U) | ((0xff00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                       ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
                                          >> 8U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                     << 8U)) | (0xffU 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data
                                                    : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_rdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__44(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__44\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__dout 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip1_io_dq_o) 
            << 0x10U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip0_io_dq_o));
}

void VysyxSoCFull___024root___nba_comb__TOP__45(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__45\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__dout 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip1_io_dq_o) 
            << 0x10U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip0_io_dq_o));
}

void VysyxSoCFull___024root___nba_comb__TOP__46(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__46\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rready)
                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rready)))
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rready)
                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready;
}

void VysyxSoCFull___024root___nba_comb__TOP__47(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__47\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN 
        = (((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last) 
                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_22)) 
                << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last) 
                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_22)) 
                          << 2U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last) 
                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_22)) 
                                      << 1U) | (((0U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last) 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_22)))) 
             << 0xcU) | (((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last) 
                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_22)) 
                            << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last) 
                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_22)) 
                                      << 2U)) | (((
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last) 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_22)) 
                                                  << 1U) 
                                                 | (((0U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_22)))) 
                         << 8U)) | ((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last) 
                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_22)) 
                                        << 3U) | ((
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last) 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_22)) 
                                                  << 2U)) 
                                      | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last) 
                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_22)) 
                                          << 1U) | 
                                         (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_22)))) 
                                     << 4U) | (((((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_22)) 
                                                 << 3U) 
                                                | ((((0U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_22)) 
                                                   << 2U)) 
                                               | (((((0U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last) 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_22)) 
                                                   << 1U) 
                                                  | (((0U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_22))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 
        = (((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last) 
                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_21)) 
                << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)) 
                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last) 
                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_21)) 
                          << 2U)) | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last) 
                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_21)) 
                                      << 1U) | (((0U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last) 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_21)))) 
             << 0xcU) | (((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)) 
                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last) 
                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_21)) 
                            << 3U) | ((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)) 
                                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last) 
                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_21)) 
                                      << 2U)) | (((
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_21)) 
                                                  << 1U) 
                                                 | (((0U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_21)))) 
                         << 8U)) | ((((((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                                          | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                                             == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_21)) 
                                        << 3U) | ((
                                                   ((0U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                                    | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_21)) 
                                                  << 2U)) 
                                      | (((((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_21)) 
                                          << 1U) | 
                                         (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                              == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_21)))) 
                                     << 4U) | (((((
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_21)) 
                                                 << 3U) 
                                                | ((((0U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_21)) 
                                                   << 2U)) 
                                               | (((((0U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_21)) 
                                                   << 1U) 
                                                  | (((0U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_21))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arvalid_i;
}

void VysyxSoCFull___024root___nba_comb__TOP__48(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__48\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_bits)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___ram_ext_R0_data));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits;
}

void VysyxSoCFull___024root___nba_comb__TOP__49(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__49\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
            = (3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2fU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2cU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 4U));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_burst));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size 
            = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_size));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_addr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_size;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_2 
        = (0x1ffU & ((IData)(3U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arsize;
}

void VysyxSoCFull___024root___nba_comb__TOP__50(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__50\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last 
            = (1U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                             >> 0x24U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data 
            = (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb 
            = (0xfU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                               >> 0x20U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last 
            = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_data;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_strb));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_bits_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_data;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_strb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_mask 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wstrb;
}

void VysyxSoCFull___024root___nba_comb__TOP__51(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__51\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
            = (7U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2cU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 4U));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size 
            = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_size));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_addr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_size;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_9 
        = (0x1ffU & ((IData)(3U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awsize;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awsize 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awsize;
}

void VysyxSoCFull___024root___nba_comb__TOP__52(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__52\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
}

void VysyxSoCFull___024root___nba_comb__TOP__53(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__53\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
}

void VysyxSoCFull___024root___nba_comb__TOP__54(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__54\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_miso 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT___bitrev_io_miso) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT___flash_miso));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_miso 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_miso;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_miso 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_miso;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_miso;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__miso_pad_i;
}

void VysyxSoCFull___024root___nba_comb__TOP__55(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__55\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_bj_target 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_io_bj_valid)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_in_bits_is2exe_ch3
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_bj_valid)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_bj_target
                : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_bj_target 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_bj_target;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_bj_target 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_bj_target;
}

void VysyxSoCFull___024root___nba_comb__TOP__56(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__56\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__gpr_wdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___gpr_wdata_T)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___csr_io_out_bits_csr_rdata
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___gpr_wdata_T_1)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___lsu_io_out_bits_gpr_wdata
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT___alu_io_out_bits_alu_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2wb_gpr_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__gpr_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_for_gpr_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__gpr_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_pipe_out_bits_exe2wb_gpr_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2wb_gpr_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_for_gpr_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_for_gpr_wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_gpr_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___exu_io_for_gpr_wdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__57(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__57\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_valid_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_flush_flush_flg)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__out_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__58(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__58\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_valid_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_flush_flush_flg)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__out_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___n_state_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___isu_io_pipe_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__isuFireSetMask 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___n_state_T_2)
            ? (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___isuFireSetMask_T_1)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__n_state 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_flush_flush_flg)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__c_state)
                     ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___n_state_T_2))
                     : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__in_ready) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_valid)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__59(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__59\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__isudone 
        = (1U & (((((((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch3Ready_T_3)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch3_rs1_T)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_ch1tpe)) 
                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2Ready_T))) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2ForEX)) 
                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2ForWB)) 
                   | (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_ch2tpe))) 
                  | (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_bjtpe))) 
                 | (~ ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_bjtpe)) 
                       | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_processunit))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__60(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__60\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_en)
            ? ((0x4afffU >= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_addr)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory
               [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_addr]
                : 0U) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___buffer_ext_R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_data 
        = (0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___buffer_ext_R0_data);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_r 
        = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_data 
                    >> 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_g 
        = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_data 
                    >> 8U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_b 
        = (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_data);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_g;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_g 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_r = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_g = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_g;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_b = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_b;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_r;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_g 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_g;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_b;
    vlSelfRef.externalPins_vga_r = vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_r;
    vlSelfRef.externalPins_vga_g = vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_g;
    vlSelfRef.externalPins_vga_b = vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_b;
}

void VysyxSoCFull___024root___nba_comb__TOP__61(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__61\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT___io_dq_wire = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en)
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en)
                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout
                                                       : 0U) 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en)
                                                         ? 0xffffffffU
                                                         : 0U)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en)
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                               | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__out_en)
                                                      ? 0xffffffffU
                                                      : 0U) 
                                                    & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__out_en)
                                                         ? 0xffffffffU
                                                         : 0U) 
                                                       & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__out_en)
                                                            ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__dout
                                                            : 0U) 
                                                          & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__out_en)
                                                              ? 0xffffffffU
                                                              : 0U)))) 
                                                   | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__out_en)
                                                        ? 0xffffffffU
                                                        : 0U) 
                                                      & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__out_en)
                                                           ? 0xffffffffU
                                                           : 0U) 
                                                         & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__out_en)
                                                              ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__dout
                                                              : 0U) 
                                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__out_en)
                                                                ? 0xffffffffU
                                                                : 0U))))) 
                                                  & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__out_en)
                                                       ? 0xffffffffU
                                                       : 0U) 
                                                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__out_en)
                                                         ? 0xffffffffU
                                                         : 0U))));
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
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__din 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__dio;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__din 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__dio;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_input_i;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__data_in_buf__DOT__din;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___data_in_buf_din 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__din;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_i 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_i 
        = (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___data_in_buf_din 
           >> 0x10U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_i 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___data_in_buf_din);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_i 
        = (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___data_in_buf_din 
           >> 0x10U);
}

void VysyxSoCFull___024root___nba_comb__TOP__62(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__62\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___anonIn_awready_T) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0) 
              >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awvalid_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_len_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awlen_i)
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arlen_i)
                : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_len_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_len_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_len_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_len_w;
}

void VysyxSoCFull___024root___nba_comb__TOP__63(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__63\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__64(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__64\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T 
        = (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_araddr 
        = (~ ((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T) 
              | (3U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_2)) 
                       | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_araddr 
        = (0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_araddr 
        = (0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                         >> 0x1bU)) | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                >> 0x18U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                           >> 0x18U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN 
        = (0x3fU & (0x21U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                             >> 0x18U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 0x1cU)) | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN) 
                             >> 3U)) | (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN)))) 
              | (3U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_araddr 
                              >> 0x1cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_addr 
        = (0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_araddr 
                     >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__raddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_araddr;
}

void VysyxSoCFull___024root___nba_comb__TOP__65(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__65\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_7 
        = (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awaddr 
        = (~ ((0xfffffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_7) 
              | (3U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_9)) 
                       | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___out_bits_addr_T_7))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awaddr 
        = (0xfffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1 
        = (0U == ((6U & (4U ^ (0x1eU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                        >> 0x1bU)))) 
                  | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                           >> 0x18U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                         >> 0x1bU)) | (1U & (~ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x18U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_0 
        = (0x3fU & (0x21U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                             >> 0x18U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                          >> 0x1cU)) | (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_0) 
                             >> 3U)) | (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_0)))) 
              | (3U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 0x1cU)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_addr 
        = (0x7ffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awaddr 
                     >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel0 
        = (0x7800U == (0x7fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awaddr 
                                  >> 0xdU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits;
}

void VysyxSoCFull___024root___nba_comb__TOP__66(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__66\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__pc_next 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_bj_valid)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_bj_target
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_fencei_flush_icache_fencing)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_fencei_flush_exu_fencei_flush_target
                : ((IData)(4U) + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc)));
}

void VysyxSoCFull___024root___nba_comb__TOP__67(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__67\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__bj_flush 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_bj_valid) 
           & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_bj_target 
              != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc));
}

void VysyxSoCFull___024root___nba_comb__TOP__68(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__68\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2_T_20 
        = (((0xfffff000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2_T_11) 
            | (0xfffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2_T_11 
                         | ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_ch2tpe))
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_csr_addr)
                             : 0U)))) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2_T_6) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2ForEX))
                                           ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_gpr_wdata
                                           : 0U) | 
                                         ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2_T_6) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2ForWB))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_wb_gpr_wdata
                                            : 0U) | 
                                          (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2ForEX) 
                                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2ForWB))) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2_T_6))
                                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs2_data
                                            : 0U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_bits_is2exe_ch1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_ch1tpe)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_reg_pc
             : 0U) | ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_ch1tpe)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1ForEX))
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_gpr_wdata
                        : 0U) | ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_ch1tpe)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1ForWB))
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_wb_gpr_wdata
                                   : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch3_rs1_T) 
                                             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_ch1tpe))
                                             ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1_data))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_bits_is2exe_ch3 
        = ((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_bjtpe)) 
             & (9U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_bjtpe)))
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_reg_pc
             : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1ForEX)
                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_ex_gpr_wdata
                  : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1ForWB)
                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_for_wb_gpr_wdata
                             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch3_rs1_T)
                                       ? 0U : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__rs1_data)))) 
           + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_imm);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_bits_is2exe_ch2 
        = ((0xfffffff8U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2_T_20) 
           | (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT___ch2_T_20 
                    | ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_in_bits_id2is_ch2tpe)) 
                       << 2U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___isu_io_pipe_out_bits_is2exe_ch1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_bits_is2exe_ch1;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___isu_io_pipe_out_bits_is2exe_ch3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_bits_is2exe_ch3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___isu_io_pipe_out_bits_is2exe_ch2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__isu__DOT__io_pipe_out_bits_is2exe_ch2;
}

void VysyxSoCFull___024root___nba_comb__TOP__69(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__69\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__n_state 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_flush_flush_flg)) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__c_state)
                     ? (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_ready) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_out_valid_0)))
                     : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__in_ready) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__idu__DOT__io_pipe_in_valid)))));
}

void VysyxSoCFull___024root___nba_comb__TOP__70(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__70\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wvalid_i;
}

void VysyxSoCFull___024root___nba_comb__TOP__71(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__71\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN 
        = (0x24U | (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_bvalid_T)
                        ? 0U : 3U) << 6U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bvalid) 
                                             << 4U)) 
                    | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index) 
                         == (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_len)))) 
                        << 3U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arvalid)
                                   ? 1U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awvalid)
                                            ? 2U : 0U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__n_state 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state), 1U))));
}

void VysyxSoCFull___024root___nba_comb__TOP__72(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__72\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__73(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__73\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_prio_w) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_prio_w) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__rd_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awaddr_i
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_araddr_i));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__rd_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_col_w 
        = (0x1feU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                     >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w 
        = (0x3fffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                      >> 0xcU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w 
        = (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                 >> 0xaU));
}

void VysyxSoCFull___024root___nba_comb__TOP__74(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__74\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__75(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__75\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_bits)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT___ram_ext_R0_data));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits;
}

void VysyxSoCFull___024root___nba_comb__TOP__76(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__76\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__bj_flush)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_bj_target
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_fencei_flush_icache_fencing)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_fencei_flush_exu_fencei_flush_target
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__flush_flg 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__bj_flush) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_fencei_flush_icache_fencing));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_valid_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__flush_flg)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__out_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__77(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__77\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__78(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__78\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_idle)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_idle)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wlast;
}

void VysyxSoCFull___024root___nba_comb__TOP__79(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__79\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__wr_w 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wvalid_i) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__wr_w)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wstrb_i)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
}

void VysyxSoCFull___024root___nba_comb__TOP__80(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__80\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__81(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__81\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___n_state_T_5 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_ready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_valid_0));
}

void VysyxSoCFull___024root___nba_comb__TOP__82(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__82\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__83(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__83\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__84(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__84\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)))) {
                    if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                          >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)) 
                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w) 
                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                            [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w]))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 6U;
                    }
                }
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
                if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                     & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)))) {
                    if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                          >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)) 
                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w) 
                            == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                            [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w]))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 6U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 2U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w))) {
                if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w) 
                        == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w]))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 2U);
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0xfU & 0U);
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w) 
                        == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w]))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w)))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                       - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0xfU & 0U);
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
              & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_accept_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
            | (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o))) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_accept_i));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_accept_i) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__push_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wready_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arready_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wready_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wready_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awready_o 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wready_o));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arready_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wready_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_in_r 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i))
            ? (0x20U | (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arlen_i)) 
                         << 4U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arid_i)))
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awready_o) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i))
                ? (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awlen_i)) 
                    << 4U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awid_i))
                : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
                    << 5U) | (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                               << 4U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awready_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awready_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__data_in_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_in_r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awready_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_awready;
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

void VysyxSoCFull___024root___nba_comb__TOP__85(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__85\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__ren 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__ren) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__raddr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__0__rdata);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata 
            = vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__0__rdata;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__86(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__86\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_arready;
}

void VysyxSoCFull___024root___nba_comb__TOP__87(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__87\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__88(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__88\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__89(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__89\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAROI_in_0_arready_T_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAROI_in_0_arready_T_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem))
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_arready;
}

void VysyxSoCFull___024root___nba_comb__TOP__90(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__90\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wready)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
               >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsWOI_in_0_wready_T_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_3) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wready))
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_wready;
}

void VysyxSoCFull___024root___nba_comb__TOP__91(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__91\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAWOI_in_0_awready_T_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___portsAWOI_in_0_awready_T_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_3) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awready))
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_awready;
}

void VysyxSoCFull___024root___nba_comb__TOP__92(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__92\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid;
}

void VysyxSoCFull___024root___nba_comb__TOP__93(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__93\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arready)
                   : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arready))))
            : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10)) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12)
                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arready)
                   : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_arready)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_arready;
}

void VysyxSoCFull___024root___nba_comb__TOP__94(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__94\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid));
}

void VysyxSoCFull___024root___nba_comb__TOP__95(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__95\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__96(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__96\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awvalid) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wvalid))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wdata;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pstrb 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wstrb;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_paddr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awaddr;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pstrb 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_paddr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwrite = 1U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pstrb = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_paddr 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_araddr
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwrite = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 
        = (2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                        >> 0x1cU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0 
        = (0x1ffffU & (0x10002U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                   >> 0xcU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
        = (0x1ffffU & (0x10011U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                   >> 0xcU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN 
        = (0x1ffffU & (0x10001U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                   >> 0xcU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr 
        = (0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                   >> 0xcU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr 
        = (0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 
        = (0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                        >> 0x1cU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                            >> 0x19U)) | ((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0 
                                                 >> 0xdU)) 
                                          | ((4U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                            >> 0x19U)) | ((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
                                                 >> 0xdU)) 
                                          | ((4U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
                                               >> 2U)) 
                                             | (3U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                             >> 0x19U)) | ((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN 
                                                  >> 0xdU)) 
                                           | ((4U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                                                >> 0xeU)) 
                                              | (3U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN))))) 
           | (3U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
                           >> 0x1cU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pslverr) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pslverr) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pslverr) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2 
        = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                    >> 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
           >> 0x18U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_mask 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___io_in_prdata_T 
        = (0U == (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_paddr));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_addr 
        = (0x7ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_paddr 
                       >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___offset_T_5 
        = ((QData)((IData)((3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_paddr 
                                  - (0x3ffffff8U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_paddr))))) 
           << 3U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                     ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                        >> 8U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
            ? 1U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                     ? 1U : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                              ? 1U : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                                                    ? 2U
                                                    : 4U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr 
        = (0xfffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr 
        = (0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_paddr)
                     ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_paddr)
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                            >> 0x18U) : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_paddr)
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
                            >> 8U) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr 
        = (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_paddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_0 
        = ((0x10000fffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN) 
           & (0x10002000U > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_1 
        = (0x2fffffffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i))
                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i
                     : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                          >> 1U) & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                            >> 8U) : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                        >> 2U) & (1U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                                       : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                            >> 3U) 
                                           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3)
                                           : ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i) 
                                                >> 2U) 
                                               & (2U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__size 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_1)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3) 
             << 0x18U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2) 
                          << 0x10U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                         << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__qpi_en)
                     ? ((IData)(7U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__size), 1U))
                     : ((IData)(0xdU) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__size), 1U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pslverr) 
           << 1U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp;
}

void VysyxSoCFull___024root___nba_comb__TOP__97(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__97\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_psel) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwrite));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reset)) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__stb_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__stb_i));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_we_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_re_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_pready;
}

void VysyxSoCFull___024root___nba_comb__TOP__98(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__98\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_2[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h409f3336_0_1;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___offset_T_5)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[2U] 
        = (0x7fffffffU & __Vtemp_3[2U]);
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwrite;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_paddr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pstrb 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pstrb));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwdata 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9)
                ? 0x3540U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5)
                              ? 0x3440U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7))
                                            ? 1U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T)))
                                             ? 0U : 
                                            (0x7ffffffU 
                                             & ((IData)(0x3000000U) 
                                                + (0xffffffU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_paddr)))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_paddr 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_paddr_T_12)
                ? 0x10001000U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9))
                                  ? 0x10001010U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7)
                                                    ? 0x10001018U
                                                    : 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3)
                                                     ? 0x10001014U
                                                     : 
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T)
                                                      ? 0x10001000U
                                                      : 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1)
                                                       ? 0x10001004U
                                                       : 0U))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pstrb 
            = (0xfU & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h409f3336_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) 
           | ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_penable_T_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i 
        = (0x1fU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_paddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h409f3336_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_penable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_we_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_cyc_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i;
}

void VysyxSoCFull___024root___nba_comb__TOP__99(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__99\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_dat_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_dat_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__di 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in;
}

void VysyxSoCFull___024root___nba_comb__TOP__100(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__100\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_2 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i)));
}

void VysyxSoCFull___024root___nba_comb__TOP__101(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__101\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o 
        = (0xffU & ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))
                     ? ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))
                         ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                             : 0U)) : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))
                                        ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)
                                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                   >> 3U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o;
}

void VysyxSoCFull___024root___nba_comb__TOP__102(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__102\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready 
            = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata 
            = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[0U] 
               | VL_SHIFTR_III(32,32,6, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h409f3336_0_1, 
                               (0x3fU & ((IData)(0x20U) 
                                         - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___offset_T_5)))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__103(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__103\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__qpi_en)
                    ? ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__CMD_38H) 
                           >> 4U) : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__CMD_38H)
                                      : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                          ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                             >> 0x14U)
                                          : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                              ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x10U)
                                              : ((4U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                      >> 4U)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                        >> 0xcU)
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                         >> 8U)
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                          >> 0x14U)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                           >> 0x10U)
                                                           : 
                                                          ((0xeU 
                                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                            ? 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                            >> 0x1cU)
                                                            : 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                            >> 0x18U))))))))))))))))
                    : ((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                        ? (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__CMD_38H) 
                                 >> (7U & ((IData)(7U) 
                                           - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                        : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                            ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                               >> 0x14U) : ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                             ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                >> 0x10U)
                                             : ((0xaU 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0xcU)
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 8U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                     >> 4U)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                       >> 0xcU)
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                        >> 8U)
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                          >> 0x10U)
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                           >> 0x1cU)
                                                           : 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
                                                           >> 0x18U)))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout;
}

void VysyxSoCFull___024root___nba_comb__TOP__104(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__104\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rvalid) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rvalid) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rvalid) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rvalid) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid))) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)))) 
                        | (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                  >> 3U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask))))) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                       | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1)) 
                          | (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1) 
                                   >> 2U)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rid)
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rid)
                        : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rid)
                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rresp)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_recho_real_last 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_0) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_recho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_recho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_recho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_recho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rlast 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_recho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast;
}

void VysyxSoCFull___024root___nba_comb__TOP__105(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__105\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bvalid) 
            << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bvalid) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                    >> 1U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)))) 
                        | (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                  >> 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1))))) 
                    & (((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                               << 2U)) | ((2U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bvalid) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                                 << 1U)) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bvalid))) 
                       | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bid)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bid)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bresp)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_6) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_becho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bresp) 
                 | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___GEN 
                    >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bid), 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_becho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__106(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__106\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_psel) 
            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pwrite)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___io_in_prdata_T)))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__107(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__107\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_psel)
            ? (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwrite)) 
                & (4U == (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_paddr)))
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_sw)
                : 0U) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__108(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__108\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_re_i) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_we_i) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__reset_status 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask;
}

void VysyxSoCFull___024root___nba_comb__TOP__109(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__109\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
}

void VysyxSoCFull___024root___nba_comb__TOP__110(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__110\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h409f3336_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_stb_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_cyc_i) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_stb_i));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_divider_sel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
           & (0x14U == (0x1cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ctrl_sel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
           & (0x10U == (0x1cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ss_sel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
           & (0x18U == (0x1cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
              & (0xcU == (0x1cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i)))) 
             << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                        & (8U == (0x1cU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i)))) 
                       << 2U)) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                    & (4U == (0x1cU 
                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i)))) 
                                   << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_we_i))));
}

void VysyxSoCFull___024root___nba_comb__TOP__111(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__111\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                         >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U]
            : ((1U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                             >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U]
                : ((2U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                 >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U]
                    : ((3U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                     >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U]
                        : ((4U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                         >> 2U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i) 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
}

void VysyxSoCFull___024root___nba_comb__TOP__112(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__112\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_prdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel)
            ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                << 0x18U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                              << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_prdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__113(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__113\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__ack 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__ack) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready;
}

void VysyxSoCFull___024root___nba_comb__TOP__114(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__114\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done)
                ? 0U : 2U) : ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid)
                                   ? 1U : 0U) : ((1U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                  ? 
                                                 ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                                                   ? 0U
                                                   : 1U)
                                                  : 0U)));
    if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck_qpi;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                ? (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                         >> 7U)) : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                     ? (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                              >> 6U))
                                     : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                         ? (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                  >> 5U))
                                         : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                             ? (1U 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                   >> 4U))
                                             : ((4U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                                 ? 
                                                (1U 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                    >> 3U))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                                  ? 
                                                 (1U 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                     >> 2U))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                                   ? 
                                                  (1U 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD) 
                                                      >> 1U))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI_CMD))
                                                    : 0U))))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n_qpi;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi)))));
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__psram_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__psram_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n;
    vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__psram_sck;
    vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__psram_ce_n;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__io_sck 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__io_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__clock 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__io_sck)));
}

void VysyxSoCFull___024root___nba_comb__TOP__115(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__115\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rvalid) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rvalid) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rid)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rlast) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rlast) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rresp)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rvalid) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rresp 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rresp;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rlast;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rvalid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rlast;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rlast 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rlast) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rvalid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rresp 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rresp;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rlast;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rvalid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rvalid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rlast;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rlast 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rlast));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rvalid_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___n_state_T_10)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___n_state_T_12)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__hit)
               : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___n_state_T_14)) 
                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___n_state_T_16) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT____VdfgRegularize_h520b9443_0_1) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rvalid))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rvalid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rlast;
}

void VysyxSoCFull___024root___nba_comb__TOP__116(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__116\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bvalid) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bvalid) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
                     | (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                               >> 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)))) 
                    & (((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                               << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                  >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bid)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bresp)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_5 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_5 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_5 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_5 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_5 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_5 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_5 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_5 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_5 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_5 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_5 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_5 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_5 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_5 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_5 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_5 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_becho_real_last)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_3) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bvalid))
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_hbaf002cb_0_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bready_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7) 
           & (0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_0_T_5 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_1_T_5 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_2_T_5 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_3_T_5 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_4_T_5 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_5_T_5 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_6_T_5 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_5 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_8_T_5 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_9_T_5 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_10_T_5 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_11_T_5 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_12_T_5 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_13_T_5 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_14_T_5 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_5 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wready)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAWOI_in_0_awready_T_4 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAWOI_in_0_awready_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___wcounter_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_valid)));
}

void VysyxSoCFull___024root___nba_comb__TOP__117(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__117\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                  ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done))
                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd)));
}

void VysyxSoCFull___024root___nba_comb__TOP__118(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__118\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                  ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)));
}

void VysyxSoCFull___024root___nba_comb__TOP__119(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__119\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_prdata
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_prdata
                        : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_prdata
                                   : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_prdata
                                              : 0U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_prdata
                                                : 0U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_prdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__rdata
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_prdata);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_prdata
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__120(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__120\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready 
        = (1U & (~ (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pready)) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pready)) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pready)) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                          | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pready)) 
                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pready)) 
                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pready)) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__n_state 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T)
            ? (2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pready_0)) 
                     << 1U)) : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__c_state))
                                 ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pready)
                                     ? 2U : 1U) : (
                                                   (0U 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__c_state)) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_psel))));
}

void VysyxSoCFull___024root___nba_comb__TOP__122(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__122\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_imem_r_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rready_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__AXI_R_fire 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_rvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__rready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__hit)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_imem_r_fire) 
              & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__while_fence)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_sdram_raddr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_6 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_6 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_6 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_6 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_6 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_6 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_6 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_6 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_6 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_6 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_6 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_6 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_6 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_6 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_6 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_6 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_5 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_6 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___GEN_2) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1) 
           & ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rready_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rready_i) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rvalid_o)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bready_i) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bvalid_o)) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_last_w)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__pop_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__pop_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_0_T_6 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_1_T_6 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_2_T_6 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_3_T_6 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_4_T_6 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_5_T_6 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_6_T_6 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_6 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_8_T_6 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_9_T_6 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_10_T_6 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_11_T_6 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_12_T_6 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_13_T_6 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_14_T_6 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_6 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arecho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_valid)));
}

extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h0e0c8ea0_0;

void VysyxSoCFull___024root___nba_comb__TOP__123(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__123\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rvalid)
                   : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rvalid))))
            : ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10)) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12)
                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rvalid)
                   : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rvalid)))));
    vlSelfRef.__Vtableidx1 = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rvalid) 
                                  << 4U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bvalid) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_arvalid) 
                                               << 2U))) 
                                | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rlast) 
                                    << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rvalid))) 
                               << 4U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                                             ? 2U : 
                                            (3U & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2)))))) 
                                          << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp 
        = VysyxSoCFull__ConstPool__TABLE_h0e0c8ea0_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_rvalid;
}

void VysyxSoCFull___024root___nba_comb__TOP__124(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__124\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rdata
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rdata
                        : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rdata
                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__125(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__125\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2 
        = ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
            ? ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
                ? 0U : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
                         ? 0U : (4U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_fencei_fencei_done)) 
                                       << 2U)))) : 
           ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
             ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
                 ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_imem_r_fire) 
                     & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_sdram_raddr)) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rlast)))
                     ? 0U : 3U) : (2U | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arready) 
                                         & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_arvalid_0))))
             : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__c_state))
                 ? (2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_hit_handshake)) 
                          << 1U)) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_ifu_ar_fire)
                                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__is_sdram_raddr)
                                          ? 1U : 2U)
                                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_fencei_is_fencei) 
                                         << 2U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__n_state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__casez_tmp_2;
}

void VysyxSoCFull___024root___nba_comb__TOP__126(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__126\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
                                                    (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__arvalid) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_arready))
                                                      ? 2U
                                                      : 1U)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state)) 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_in_valid) 
                                                        & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__flush_flg)) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_arready))))))));
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

void VysyxSoCFull___024root___nba_comb__TOP__127(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__127\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__casez_tmp 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__c_state))
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__in_ready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_valid))
            : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__c_state))
                ? ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__arvalid) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_arready)) 
                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__awvalid) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_awready)) 
                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_wready) 
                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__wvalid))))
                    ? 2U : 1U) : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__c_state))
                                   ? (2U | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_rvalid) 
                                             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__rready)) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__bready) 
                                               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_bvalid))))
                                   : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_out_ready) 
                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__out_valid))
                                       ? 0U : 3U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__n_state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__casez_tmp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN_1 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN_1) 
           | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__n_state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__casez_tmp_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN)
            ? 2U : (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN_0)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_processtpe)
                           : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT___GEN_1)
                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_in_bits_processtpe)
                               : 2U))));
}

void VysyxSoCFull___024root___nba_comb__TOP__128(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__128\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rdata
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rdata
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rdata;
}

void VysyxSoCFull___024root___nba_comb__TOP__129(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__129\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_3 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)
                ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rdata
                         : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2)
                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rdata
                             : 0U))) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10)
                                         ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12)
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rdata
                                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_clint_rdata)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_3;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_rdata;
}

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__act(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__act\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<124> __VpreTriggered;
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__nba\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
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
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
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
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
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
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.externalPins_ps2_clk 
                      & 0xfeU)))) {
        Verilated::overWidthError("externalPins_ps2_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.externalPins_ps2_data 
                      & 0xfeU)))) {
        Verilated::overWidthError("externalPins_ps2_data");
    }
    if (VL_UNLIKELY(((vlSelfRef.externalPins_uart_rx 
                      & 0xfeU)))) {
        Verilated::overWidthError("externalPins_uart_rx");
    }
}
#endif  // VL_DEBUG
