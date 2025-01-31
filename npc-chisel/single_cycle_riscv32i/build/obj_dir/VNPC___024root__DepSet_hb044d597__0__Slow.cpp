// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VNPC___024root.h"

VL_ATTR_COLD void VNPC___024root___eval_static(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_static\n"); );
}

VL_ATTR_COLD void VNPC___024root___eval_initial__TOP(VNPC___024root* vlSelf);

VL_ATTR_COLD void VNPC___024root___eval_initial(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_initial\n"); );
    // Body
    VNPC___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void VNPC___024root___eval_initial__TOP(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_initial__TOP\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc = 0x80000000U;
    }
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_en = 1U;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_en = 1U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_en = 1U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_addr = 1U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_en = 1U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_addr = 2U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_en = 1U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W0_addr = 5U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W0_en = 1U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W0_data = 0x16f6ea0U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W1_addr = 4U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W1_en = 1U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W1_data = 0x79737978U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W2_addr = 0U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W2_en = 1U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W2_data = 0x1800U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_addr = 2U;
}

VL_ATTR_COLD void VNPC___024root___eval_final(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_final\n"); );
}

VL_ATTR_COLD void VNPC___024root___eval_triggers__stl(VNPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__stl(VNPC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VNPC___024root___eval_stl(VNPC___024root* vlSelf);

VL_ATTR_COLD void VNPC___024root___eval_settle(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VNPC___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VNPC___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel/single_cycle_riscv32i/vsrc/NPC.sv", 58, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VNPC___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__stl(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VNPC___024root___ico_sequent__TOP__0(VNPC___024root* vlSelf);

VL_ATTR_COLD void VNPC___024root___eval_stl(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VNPC___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__ico(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__act(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__nba(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VNPC___024root___ctor_var_reset(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___clint_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___clint_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___clint_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT___clint_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___clint_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___clint_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___clint_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___uart_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___uart_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___uart_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT___uart_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___uart_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___uart_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___uart_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___mem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___mem_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT___mem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___mem_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___mem_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___mem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_arb_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_arb_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_arb_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT___xbar_io_arb_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_arb_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_arb_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_arb_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_sram_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT___xbar_io_sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_sram_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_uart_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_uart_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_uart_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_uart_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_uart_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_uart_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_uart_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT___xbar_io_uart_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_uart_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_clint_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_clint_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_clint_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_clint_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_clint_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_clint_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___xbar_io_clint_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT___xbar_io_clint_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___xbar_io_clint_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_imem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___arb_io_imem_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT___arb_io_imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_dmem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___arb_io_dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_dmem_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_dmem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_mem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___arb_io_mem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_mem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_mem_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___arb_io_mem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___arb_io_mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT___arb_io_mem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___arb_io_mem_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___core_io_imem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___core_io_imem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___core_io_imem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___core_io_dmem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___core_io_dmem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___core_io_dmem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___core_io_dmem_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___core_io_dmem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___core_io_dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___core_io_dmem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT___core_io_dmem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___core_io_dmem_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_imem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__io_imem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_imem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__io_imem_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__io_imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_imem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__io_dmem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__io_dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__io_dmem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__io_dmem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__core__DOT__io_dmem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__io_dmem_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___wbu_io_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT___wbu_io_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_wb_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT___exu_io_br_flg = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___exu_io_br_target = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___exu_io_alu_out = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_op1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_alu_out = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_wb_sel = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_op = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT___idu_io_gpr_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT___idu_io_gpr_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_op1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_op2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_exe_fun = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_wb_sel = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_imm_b_sext = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_mem_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_mem_op = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT___ifu_io_csr_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_inst = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_mtvec = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___gpr_io_gpr_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT___gpr_io_gpr_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT___RANDOM_MEM = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_addr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_addr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_addr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W0_addr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W0_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W0_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W0_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W1_addr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W1_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W1_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W2_addr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W2_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W2_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_addr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_addr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_en = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT___RANDOM_MEM = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT____Vlvbound_h767e957b__0 = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT____Vlvbound_hc1e5bfb4__0 = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_br_flg = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_jmp_flg = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_br_target = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_alu_out = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_mtvec = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_in_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_inst = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__lfsr = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__delay = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp_0 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->NPC__DOT__core__DOT__ifu__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__core__DOT__idu__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_inst = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN = VL_RAND_RESET_I(10);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0 = VL_RAND_RESET_I(17);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__csignals_6 = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0 = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__c_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__n_state = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->NPC__DOT__core__DOT__idu__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0 = 0;
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0 = 0;
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0 = 0;
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0 = 0;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__ebreak__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_br_flg = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_jmp_flg = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_br_target = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_alu_out = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_op1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_op2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_exe_fun = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_wb_sel = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_imm_b_sext = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_mem_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_mem_op = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_op1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_alu_out = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_wb_sel = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_mem_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_mem_op = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_31 = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_14 = VL_RAND_RESET_Q(63);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___GEN = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_3 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__c_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__exu__DOT__n_state = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->NPC__DOT__core__DOT__exu__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0 = 0;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_op1_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_alu_out = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_wb_sel = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_mem_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_mem_op = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__lfsr = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__delay = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0 = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__n_state = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 = VL_RAND_RESET_I(8);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__isS = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__isL = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_5 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0 = 0;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_rf_wen = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_wb_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_cmd = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_out_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__c_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->NPC__DOT__core__DOT__wbu__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__arb__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_imem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_imem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_imem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_imem_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_imem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_dmem_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_mem_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__arb__DOT__io_mem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__io_mem_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__imem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__imem_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__arb__DOT__imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__dmem_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__dmem_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__dmem_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__dmem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__mem_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__mem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__mem_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__mem_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__mem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__arb__DOT__mem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__mem_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__c_state = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__arb__DOT__casez_tmp = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__arb__DOT__imem_mem_done = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__n_state = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__arb__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__arb__DOT__casez_tmp_0 = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__arb__DOT__casez_tmp_1 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->NPC__DOT__arb__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__xbar__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_sram_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_uart_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__io_clint_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__arb_arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__arb_rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__arb_rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__xbar__DOT__arb_rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__arb_awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__arb_wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__arb_bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__uart_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__uart_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__uart_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__uart_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__uart_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__uart_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__uart_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__xbar__DOT__uart_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__uart_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__sram_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__xbar__DOT__sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__sram_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__clint_araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__clint_arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__clint_rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__clint_awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__clint_awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__clint_wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__xbar__DOT__clint_wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__clint_bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT__c_state = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__xbar__DOT__sr = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__xbar__DOT__casez_tmp = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__xbar__DOT__w_req = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___clint_done1_T = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___clint_done1_T_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___n_state_T_9 = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__xbar__DOT__n_state = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT__xbar__DOT__casez_tmp_0 = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__xbar__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__xbar__DOT___GEN_14 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->NPC__DOT__xbar__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0 = 0;
    vlSelf->NPC__DOT__mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__mem__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__mem__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__mem__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__mem__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__mem__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__mem__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__mem__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__lfsr = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__mem__DOT__r_delay_unit = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__mem__DOT__w_delay_unit = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__mem__DOT__cr_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__nr_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__AXI_AR_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__AXI_R_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__cw_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__nw_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__AXI_AWW_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__mem__DOT__AXI_B_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__uart__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__uart__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__uart__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__uart__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__uart__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__uart__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__uart__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__lfsr = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__uart__DOT__r_delay_unit = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__uart__DOT__w_delay_unit = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__uart__DOT__cr_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__nr_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__AXI_AR_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__AXI_R_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__cw_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__nw_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__AXI_AWW_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__uart__DOT__AXI_B_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__clint__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__clint__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__clint__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__clint__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__clint__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__clint__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__clint__DOT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->NPC__DOT__clint__DOT__lfsr = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__clint__DOT__r_delay_unit = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__clint__DOT__w_delay_unit = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__clint__DOT__cr_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__nr_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__AXI_AR_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__AXI_R_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__cw_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__nw_state = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__AXI_AWW_fire = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__clint__DOT__AXI_B_fire = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h9e652396__0 = 0;
    vlSelf->__VdfgTmp_h0fdfba83__0 = 0;
    vlSelf->__VdfgTmp_h5d58cd1a__0 = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
}
