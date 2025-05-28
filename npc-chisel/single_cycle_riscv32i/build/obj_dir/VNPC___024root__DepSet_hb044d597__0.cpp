// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VNPC___024root.h"

void VNPC___024root____Vdpiimwrap_NPC__DOT__core__DOT__idu__DOT__ebreak__DOT__npc_trap_TOP();
extern const VlUnpacked<CData/*1:0*/, 128> VNPC__ConstPool__TABLE_h423534d4_0;

VL_INLINE_OPT void VNPC___024root___ico_sequent__TOP__0(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_1 = 
        (0U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__delay));
    vlSelf->NPC__DOT___mem_arready = vlSelf->NPC__DOT__mem__DOT__arready;
    vlSelf->NPC__DOT___mem_rdata = vlSelf->NPC__DOT__mem__DOT__rdata;
    vlSelf->NPC__DOT___mem_awready = vlSelf->NPC__DOT__mem__DOT__awready;
    vlSelf->NPC__DOT___mem_wready = vlSelf->NPC__DOT__mem__DOT__wready;
    vlSelf->NPC__DOT___uart_arready = vlSelf->NPC__DOT__uart__DOT__arready;
    vlSelf->NPC__DOT___uart_rdata = vlSelf->NPC__DOT__uart__DOT__rdata;
    vlSelf->NPC__DOT___uart_awready = vlSelf->NPC__DOT__uart__DOT__awready;
    vlSelf->NPC__DOT___uart_wready = vlSelf->NPC__DOT__uart__DOT__wready;
    vlSelf->NPC__DOT___clint_arready = vlSelf->NPC__DOT__clint__DOT__arready;
    vlSelf->NPC__DOT___clint_rdata = vlSelf->NPC__DOT__clint__DOT__rdata;
    vlSelf->NPC__DOT___clint_awready = vlSelf->NPC__DOT__clint__DOT__awready;
    vlSelf->NPC__DOT___clint_wready = vlSelf->NPC__DOT__clint__DOT__wready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_1 = 
        (0U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__delay));
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid;
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__exu__DOT__in_ready;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__out_valid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_araddr = vlSelf->NPC__DOT__arb__DOT__mem_araddr;
    vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid = vlSelf->NPC__DOT__arb__DOT__mem_arvalid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr = vlSelf->NPC__DOT__arb__DOT__mem_awaddr;
    vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid = vlSelf->NPC__DOT__arb__DOT__mem_awvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_arready = vlSelf->NPC__DOT__xbar__DOT__arb_arready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awready = vlSelf->NPC__DOT__xbar__DOT__arb_awready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata = vlSelf->NPC__DOT__xbar__DOT__arb_rdata;
    vlSelf->NPC__DOT__arb__DOT__io_mem_rready = vlSelf->NPC__DOT__arb__DOT__mem_rready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_bready = vlSelf->NPC__DOT__arb__DOT__mem_bready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid = vlSelf->NPC__DOT__xbar__DOT__arb_rvalid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_wdata = vlSelf->NPC__DOT__arb__DOT__mem_wdata;
    vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb = vlSelf->NPC__DOT__arb__DOT__mem_wstrb;
    vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid = vlSelf->NPC__DOT__arb__DOT__mem_wvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wready = vlSelf->NPC__DOT__xbar__DOT__arb_wready;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr = vlSelf->NPC__DOT__xbar__DOT__sram_araddr;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_arvalid = vlSelf->NPC__DOT__xbar__DOT__sram_arvalid;
    vlSelf->NPC__DOT__mem__DOT__AXI_AR_fire = ((IData)(vlSelf->NPC__DOT__mem__DOT__arready) 
                                               & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_arvalid));
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rready = vlSelf->NPC__DOT__xbar__DOT__sram_rready;
    vlSelf->NPC__DOT__mem__DOT__AXI_R_fire = ((IData)(vlSelf->NPC__DOT__mem__DOT__rvalid) 
                                              & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_rready));
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awaddr = vlSelf->NPC__DOT__xbar__DOT__sram_awaddr;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awvalid = vlSelf->NPC__DOT__xbar__DOT__sram_awvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wvalid = vlSelf->NPC__DOT__xbar__DOT__sram_wvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wdata = vlSelf->NPC__DOT__xbar__DOT__sram_wdata;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_bready = vlSelf->NPC__DOT__xbar__DOT__sram_bready;
    vlSelf->NPC__DOT__mem__DOT__AXI_B_fire = ((IData)(vlSelf->NPC__DOT__mem__DOT__bvalid) 
                                              & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_bready));
    vlSelf->NPC__DOT__xbar__DOT__io_uart_araddr = vlSelf->NPC__DOT__xbar__DOT__uart_araddr;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_arvalid = vlSelf->NPC__DOT__xbar__DOT__uart_arvalid;
    vlSelf->NPC__DOT__uart__DOT__AXI_AR_fire = ((IData)(vlSelf->NPC__DOT__uart__DOT__arready) 
                                                & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_arvalid));
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rready = vlSelf->NPC__DOT__xbar__DOT__uart_rready;
    vlSelf->NPC__DOT__uart__DOT__AXI_R_fire = ((IData)(vlSelf->NPC__DOT__uart__DOT__rvalid) 
                                               & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_rready));
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awaddr = vlSelf->NPC__DOT__xbar__DOT__uart_awaddr;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awvalid = vlSelf->NPC__DOT__xbar__DOT__uart_awvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wvalid = vlSelf->NPC__DOT__xbar__DOT__uart_wvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wdata = vlSelf->NPC__DOT__xbar__DOT__uart_wdata;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wstrb = vlSelf->NPC__DOT__xbar__DOT__uart_wstrb;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_bready = vlSelf->NPC__DOT__xbar__DOT__uart_bready;
    vlSelf->NPC__DOT__uart__DOT__AXI_B_fire = ((IData)(vlSelf->NPC__DOT__uart__DOT__bvalid) 
                                               & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_bready));
    vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr = vlSelf->NPC__DOT__xbar__DOT__clint_araddr;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_arvalid = vlSelf->NPC__DOT__xbar__DOT__clint_arvalid;
    vlSelf->NPC__DOT__clint__DOT__AXI_AR_fire = ((IData)(vlSelf->NPC__DOT__clint__DOT__arready) 
                                                 & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_arvalid));
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rready = vlSelf->NPC__DOT__xbar__DOT__clint_rready;
    vlSelf->NPC__DOT__clint__DOT__AXI_R_fire = ((IData)(vlSelf->NPC__DOT__clint__DOT__rvalid) 
                                                & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_rready));
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awaddr = vlSelf->NPC__DOT__xbar__DOT__clint_awaddr;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awvalid = vlSelf->NPC__DOT__xbar__DOT__clint_awvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wvalid = vlSelf->NPC__DOT__xbar__DOT__clint_wvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wdata = vlSelf->NPC__DOT__xbar__DOT__clint_wdata;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_bready = vlSelf->NPC__DOT__xbar__DOT__clint_bready;
    vlSelf->NPC__DOT__clint__DOT__AXI_B_fire = ((IData)(vlSelf->NPC__DOT__clint__DOT__bvalid) 
                                                & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_bready));
    vlSelf->NPC__DOT__mem__DOT__AXI_AWW_fire = ((IData)(vlSelf->NPC__DOT__xbar__DOT__sram_awvalid) 
                                                & ((IData)(vlSelf->NPC__DOT__mem__DOT__awready) 
                                                   & ((IData)(vlSelf->NPC__DOT__mem__DOT__wready) 
                                                      & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_wvalid))));
    vlSelf->NPC__DOT__uart__DOT__AXI_AWW_fire = ((IData)(vlSelf->NPC__DOT__xbar__DOT__uart_awvalid) 
                                                 & ((IData)(vlSelf->NPC__DOT__uart__DOT__awready) 
                                                    & ((IData)(vlSelf->NPC__DOT__uart__DOT__wready) 
                                                       & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_wvalid))));
    vlSelf->NPC__DOT__clint__DOT__AXI_AWW_fire = ((IData)(vlSelf->NPC__DOT__xbar__DOT__clint_awvalid) 
                                                  & ((IData)(vlSelf->NPC__DOT__clint__DOT__awready) 
                                                     & ((IData)(vlSelf->NPC__DOT__clint__DOT__wready) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_wvalid))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__awaddr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__wdata;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__wstrb;
    vlSelf->NPC__DOT___mem_rresp = vlSelf->NPC__DOT__mem__DOT__rresp;
    vlSelf->NPC__DOT___uart_rresp = vlSelf->NPC__DOT__uart__DOT__rresp;
    vlSelf->NPC__DOT___clint_rresp = vlSelf->NPC__DOT__clint__DOT__rresp;
    vlSelf->__VdfgTmp_h5d58cd1a__0 = ((IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__in_ready) 
                                      & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__out_valid));
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp = vlSelf->NPC__DOT__xbar__DOT__arb_rresp;
    vlSelf->NPC__DOT__arb__DOT__io_imem_rresp = vlSelf->NPC__DOT__arb__DOT__imem_rresp;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__araddr;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb = vlSelf->NPC__DOT__xbar__DOT__sram_wstrb;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
        [1U];
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
        [2U];
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext 
        = (((- (IData)((vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                                                         >> 7U)))));
    vlSelf->NPC__DOT__reset = vlSelf->reset;
    vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__wbu__DOT__out_valid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr 
        = (0x1fU & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                    >> 7U));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__in_ready;
    vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__wbu__DOT__in_ready;
    vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid = vlSelf->NPC__DOT__arb__DOT__imem_rvalid;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__exu__DOT__out_valid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid = vlSelf->NPC__DOT__arb__DOT__dmem_rvalid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid = vlSelf->NPC__DOT__arb__DOT__dmem_bvalid;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state 
        = (1U & ((IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__c_state)
                  ? (~ ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready) 
                        & (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__out_valid)))
                  : ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid) 
                     & (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__in_ready))));
    vlSelf->NPC__DOT__clock = vlSelf->clock;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata = vlSelf->NPC__DOT__arb__DOT__dmem_rdata;
    vlSelf->NPC__DOT___mem_rvalid = vlSelf->NPC__DOT__mem__DOT__rvalid;
    vlSelf->NPC__DOT___mem_bvalid = vlSelf->NPC__DOT__mem__DOT__bvalid;
    vlSelf->NPC__DOT___uart_rvalid = vlSelf->NPC__DOT__uart__DOT__rvalid;
    vlSelf->NPC__DOT___uart_bvalid = vlSelf->NPC__DOT__uart__DOT__bvalid;
    vlSelf->NPC__DOT___clint_rvalid = vlSelf->NPC__DOT__clint__DOT__rvalid;
    vlSelf->NPC__DOT___clint_bvalid = vlSelf->NPC__DOT__clint__DOT__bvalid;
    vlSelf->NPC__DOT__xbar__DOT___clint_done1_T_1 = 
        ((IData)(vlSelf->NPC__DOT__arb__DOT__mem_bready) 
         & (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_bvalid));
    vlSelf->NPC__DOT__xbar__DOT__w_req = ((IData)(vlSelf->NPC__DOT__arb__DOT__mem_awvalid) 
                                          & (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_awready));
    vlSelf->NPC__DOT__xbar__DOT__sr = (((vlSelf->NPC__DOT__arb__DOT__mem_araddr 
                                         >> 0x1fU) 
                                        & (0x88000000U 
                                           > vlSelf->NPC__DOT__arb__DOT__mem_araddr))
                                        ? 2U : ((0xa00003f8U 
                                                 == vlSelf->NPC__DOT__arb__DOT__mem_araddr)
                                                 ? 4U
                                                 : 
                                                (((0xa0000048U 
                                                   == vlSelf->NPC__DOT__arb__DOT__mem_araddr) 
                                                  | (0xa000004cU 
                                                     == vlSelf->NPC__DOT__arb__DOT__mem_araddr))
                                                  ? 6U
                                                  : 1U)));
    vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid = vlSelf->NPC__DOT__xbar__DOT__arb_bvalid;
    vlSelf->NPC__DOT__core__DOT__io_imem_arvalid = vlSelf->NPC__DOT__core__DOT__ifu__DOT__arvalid;
    vlSelf->NPC__DOT__core__DOT__io_imem_rready = vlSelf->NPC__DOT__core__DOT__ifu__DOT__rready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__arvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__rready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__awvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__wvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__bready;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc;
    vlSelf->NPC__DOT__arb__DOT__imem_mem_done = ((IData)(vlSelf->NPC__DOT__arb__DOT__mem_rready) 
                                                 & (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_rvalid));
    vlSelf->NPC__DOT__arb__DOT__io_imem_rdata = vlSelf->NPC__DOT__arb__DOT__imem_rdata;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr 
        = (0x1fU & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                    >> 0xfU));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr 
        = (0x1fU & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                    >> 0x14U));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87 
        = (0x73U == vlSelf->NPC__DOT__arb__DOT__imem_rdata);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89 
        = (0x30200073U == vlSelf->NPC__DOT__arb__DOT__imem_rdata);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67 
        = (0x6fU == (0x7fU & vlSelf->NPC__DOT__arb__DOT__imem_rdata));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71 
        = (0x37U == (0x7fU & vlSelf->NPC__DOT__arb__DOT__imem_rdata));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73 
        = (0x17U == (0x7fU & vlSelf->NPC__DOT__arb__DOT__imem_rdata));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN = (
                                                   (0x380U 
                                                    & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->NPC__DOT__arb__DOT__imem_rdata));
    vlSelf->NPC__DOT__xbar__DOT__io_sram_arready = vlSelf->NPC__DOT___mem_arready;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rdata = vlSelf->NPC__DOT___mem_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awready = vlSelf->NPC__DOT___mem_awready;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wready = vlSelf->NPC__DOT___mem_wready;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_arready = vlSelf->NPC__DOT___uart_arready;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rdata = vlSelf->NPC__DOT___uart_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awready = vlSelf->NPC__DOT___uart_awready;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wready = vlSelf->NPC__DOT___uart_wready;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_arready = vlSelf->NPC__DOT___clint_arready;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rdata = vlSelf->NPC__DOT___clint_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awready = vlSelf->NPC__DOT___clint_awready;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wready = vlSelf->NPC__DOT___clint_wready;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT___exu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT___exu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_ready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_araddr = vlSelf->NPC__DOT__arb__DOT__io_mem_araddr;
    vlSelf->NPC__DOT___arb_io_mem_araddr = vlSelf->NPC__DOT__arb__DOT__io_mem_araddr;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_arvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid;
    vlSelf->NPC__DOT___arb_io_mem_arvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awaddr = vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr;
    vlSelf->NPC__DOT___arb_io_mem_awaddr = vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid;
    vlSelf->NPC__DOT___arb_io_mem_awvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_arready = vlSelf->NPC__DOT__xbar__DOT__io_arb_arready;
    vlSelf->NPC__DOT___xbar_io_arb_arready = vlSelf->NPC__DOT__xbar__DOT__io_arb_arready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_awready = vlSelf->NPC__DOT__xbar__DOT__io_arb_awready;
    vlSelf->NPC__DOT___xbar_io_arb_awready = vlSelf->NPC__DOT__xbar__DOT__io_arb_awready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_rdata = vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata;
    vlSelf->NPC__DOT___xbar_io_arb_rdata = vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rready = vlSelf->NPC__DOT__arb__DOT__io_mem_rready;
    vlSelf->NPC__DOT___arb_io_mem_rready = vlSelf->NPC__DOT__arb__DOT__io_mem_rready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_bready = vlSelf->NPC__DOT__arb__DOT__io_mem_bready;
    vlSelf->NPC__DOT___arb_io_mem_bready = vlSelf->NPC__DOT__arb__DOT__io_mem_bready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_rvalid = vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid;
    vlSelf->NPC__DOT___xbar_io_arb_rvalid = vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wdata = vlSelf->NPC__DOT__arb__DOT__io_mem_wdata;
    vlSelf->NPC__DOT___arb_io_mem_wdata = vlSelf->NPC__DOT__arb__DOT__io_mem_wdata;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wstrb = vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb;
    vlSelf->NPC__DOT___arb_io_mem_wstrb = vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid;
    vlSelf->NPC__DOT___arb_io_mem_wvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_wready = vlSelf->NPC__DOT__xbar__DOT__io_arb_wready;
    vlSelf->NPC__DOT___xbar_io_arb_wready = vlSelf->NPC__DOT__xbar__DOT__io_arb_wready;
    vlSelf->NPC__DOT__mem__DOT__araddr = vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr;
    vlSelf->NPC__DOT___xbar_io_sram_araddr = vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr;
    vlSelf->NPC__DOT__mem__DOT__arvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_arvalid;
    vlSelf->NPC__DOT___xbar_io_sram_arvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_arvalid;
    vlSelf->NPC__DOT__mem__DOT__rready = vlSelf->NPC__DOT__xbar__DOT__io_sram_rready;
    vlSelf->NPC__DOT___xbar_io_sram_rready = vlSelf->NPC__DOT__xbar__DOT__io_sram_rready;
    vlSelf->NPC__DOT__mem__DOT__nr_state = ((IData)(vlSelf->NPC__DOT__mem__DOT__cr_state)
                                             ? ((IData)(vlSelf->NPC__DOT__mem__DOT__cr_state) 
                                                & (~ (IData)(vlSelf->NPC__DOT__mem__DOT__AXI_R_fire)))
                                             : (IData)(vlSelf->NPC__DOT__mem__DOT__AXI_AR_fire));
    vlSelf->NPC__DOT__mem__DOT__awaddr = vlSelf->NPC__DOT__xbar__DOT__io_sram_awaddr;
    vlSelf->NPC__DOT___xbar_io_sram_awaddr = vlSelf->NPC__DOT__xbar__DOT__io_sram_awaddr;
    vlSelf->NPC__DOT__mem__DOT__awvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_awvalid;
    vlSelf->NPC__DOT___xbar_io_sram_awvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_awvalid;
    vlSelf->NPC__DOT__mem__DOT__wvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_wvalid;
    vlSelf->NPC__DOT___xbar_io_sram_wvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_wvalid;
    vlSelf->NPC__DOT__mem__DOT__wdata = vlSelf->NPC__DOT__xbar__DOT__io_sram_wdata;
    vlSelf->NPC__DOT___xbar_io_sram_wdata = vlSelf->NPC__DOT__xbar__DOT__io_sram_wdata;
    vlSelf->NPC__DOT__mem__DOT__bready = vlSelf->NPC__DOT__xbar__DOT__io_sram_bready;
    vlSelf->NPC__DOT___xbar_io_sram_bready = vlSelf->NPC__DOT__xbar__DOT__io_sram_bready;
    vlSelf->NPC__DOT__uart__DOT__araddr = vlSelf->NPC__DOT__xbar__DOT__io_uart_araddr;
    vlSelf->NPC__DOT___xbar_io_uart_araddr = vlSelf->NPC__DOT__xbar__DOT__io_uart_araddr;
    vlSelf->NPC__DOT__uart__DOT__arvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_arvalid;
    vlSelf->NPC__DOT___xbar_io_uart_arvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_arvalid;
    vlSelf->NPC__DOT__uart__DOT__rready = vlSelf->NPC__DOT__xbar__DOT__io_uart_rready;
    vlSelf->NPC__DOT___xbar_io_uart_rready = vlSelf->NPC__DOT__xbar__DOT__io_uart_rready;
    vlSelf->NPC__DOT__uart__DOT__nr_state = ((IData)(vlSelf->NPC__DOT__uart__DOT__cr_state)
                                              ? ((IData)(vlSelf->NPC__DOT__uart__DOT__cr_state) 
                                                 & (~ (IData)(vlSelf->NPC__DOT__uart__DOT__AXI_R_fire)))
                                              : (IData)(vlSelf->NPC__DOT__uart__DOT__AXI_AR_fire));
    vlSelf->NPC__DOT__uart__DOT__awaddr = vlSelf->NPC__DOT__xbar__DOT__io_uart_awaddr;
    vlSelf->NPC__DOT___xbar_io_uart_awaddr = vlSelf->NPC__DOT__xbar__DOT__io_uart_awaddr;
    vlSelf->NPC__DOT__uart__DOT__awvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_awvalid;
    vlSelf->NPC__DOT___xbar_io_uart_awvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_awvalid;
    vlSelf->NPC__DOT__uart__DOT__wvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_wvalid;
    vlSelf->NPC__DOT___xbar_io_uart_wvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_wvalid;
    vlSelf->NPC__DOT__uart__DOT__wdata = vlSelf->NPC__DOT__xbar__DOT__io_uart_wdata;
    vlSelf->NPC__DOT___xbar_io_uart_wdata = vlSelf->NPC__DOT__xbar__DOT__io_uart_wdata;
    vlSelf->NPC__DOT__uart__DOT__wstrb = vlSelf->NPC__DOT__xbar__DOT__io_uart_wstrb;
    vlSelf->NPC__DOT___xbar_io_uart_wstrb = vlSelf->NPC__DOT__xbar__DOT__io_uart_wstrb;
    vlSelf->NPC__DOT__uart__DOT__bready = vlSelf->NPC__DOT__xbar__DOT__io_uart_bready;
    vlSelf->NPC__DOT___xbar_io_uart_bready = vlSelf->NPC__DOT__xbar__DOT__io_uart_bready;
    vlSelf->NPC__DOT__clint__DOT__araddr = vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr;
    vlSelf->NPC__DOT___xbar_io_clint_araddr = vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr;
    vlSelf->NPC__DOT__clint__DOT__arvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_arvalid;
    vlSelf->NPC__DOT___xbar_io_clint_arvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_arvalid;
    vlSelf->NPC__DOT__clint__DOT__rready = vlSelf->NPC__DOT__xbar__DOT__io_clint_rready;
    vlSelf->NPC__DOT___xbar_io_clint_rready = vlSelf->NPC__DOT__xbar__DOT__io_clint_rready;
    vlSelf->NPC__DOT__clint__DOT__nr_state = ((IData)(vlSelf->NPC__DOT__clint__DOT__cr_state)
                                               ? ((IData)(vlSelf->NPC__DOT__clint__DOT__cr_state) 
                                                  & (~ (IData)(vlSelf->NPC__DOT__clint__DOT__AXI_R_fire)))
                                               : (IData)(vlSelf->NPC__DOT__clint__DOT__AXI_AR_fire));
    vlSelf->NPC__DOT__clint__DOT__awaddr = vlSelf->NPC__DOT__xbar__DOT__io_clint_awaddr;
    vlSelf->NPC__DOT___xbar_io_clint_awaddr = vlSelf->NPC__DOT__xbar__DOT__io_clint_awaddr;
    vlSelf->NPC__DOT__clint__DOT__awvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_awvalid;
    vlSelf->NPC__DOT___xbar_io_clint_awvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_awvalid;
    vlSelf->NPC__DOT__clint__DOT__wvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_wvalid;
    vlSelf->NPC__DOT___xbar_io_clint_wvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_wvalid;
    vlSelf->NPC__DOT__clint__DOT__wdata = vlSelf->NPC__DOT__xbar__DOT__io_clint_wdata;
    vlSelf->NPC__DOT___xbar_io_clint_wdata = vlSelf->NPC__DOT__xbar__DOT__io_clint_wdata;
    vlSelf->NPC__DOT__clint__DOT__bready = vlSelf->NPC__DOT__xbar__DOT__io_clint_bready;
    vlSelf->NPC__DOT___xbar_io_clint_bready = vlSelf->NPC__DOT__xbar__DOT__io_clint_bready;
    vlSelf->NPC__DOT__mem__DOT__nw_state = ((IData)(vlSelf->NPC__DOT__mem__DOT__cw_state)
                                             ? ((IData)(vlSelf->NPC__DOT__mem__DOT__cw_state) 
                                                & (~ (IData)(vlSelf->NPC__DOT__mem__DOT__AXI_B_fire)))
                                             : (IData)(vlSelf->NPC__DOT__mem__DOT__AXI_AWW_fire));
    vlSelf->NPC__DOT__uart__DOT__nw_state = ((IData)(vlSelf->NPC__DOT__uart__DOT__cw_state)
                                              ? ((IData)(vlSelf->NPC__DOT__uart__DOT__cw_state) 
                                                 & (~ (IData)(vlSelf->NPC__DOT__uart__DOT__AXI_B_fire)))
                                              : (IData)(vlSelf->NPC__DOT__uart__DOT__AXI_AWW_fire));
    vlSelf->NPC__DOT__clint__DOT__nw_state = ((IData)(vlSelf->NPC__DOT__clint__DOT__cw_state)
                                               ? ((IData)(vlSelf->NPC__DOT__clint__DOT__cw_state) 
                                                  & (~ (IData)(vlSelf->NPC__DOT__clint__DOT__AXI_B_fire)))
                                               : (IData)(vlSelf->NPC__DOT__clint__DOT__AXI_AWW_fire));
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awaddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->NPC__DOT__core__DOT__io_dmem_awaddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->NPC__DOT___core_io_dmem_awaddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wdata = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    vlSelf->NPC__DOT__core__DOT__io_dmem_wdata = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    vlSelf->NPC__DOT___core_io_dmem_wdata = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wstrb = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->NPC__DOT__core__DOT__io_dmem_wstrb = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->NPC__DOT___core_io_dmem_wstrb = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rresp = vlSelf->NPC__DOT___mem_rresp;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rresp = vlSelf->NPC__DOT___uart_rresp;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rresp = vlSelf->NPC__DOT___clint_rresp;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__n_state 
        = (1U & ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__c_state)
                  ? (~ (IData)(vlSelf->__VdfgTmp_h5d58cd1a__0))
                  : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__in_ready) 
                     & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid))));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__n_state 
        = (1U & ((IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__c_state)
                  ? (~ ((IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__out_valid) 
                        & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready)))
                  : (IData)(vlSelf->__VdfgTmp_h5d58cd1a__0)));
    vlSelf->NPC__DOT__arb__DOT__io_mem_rresp = vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp;
    vlSelf->NPC__DOT___xbar_io_arb_rresp = vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp;
    vlSelf->NPC__DOT___arb_io_imem_rresp = vlSelf->NPC__DOT__arb__DOT__io_imem_rresp;
    vlSelf->NPC__DOT__core__DOT__io_imem_rresp = vlSelf->NPC__DOT__arb__DOT__io_imem_rresp;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_araddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->NPC__DOT__core__DOT__io_dmem_araddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->NPC__DOT___core_io_dmem_araddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->NPC__DOT__mem__DOT__wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT__clint__DOT__wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT___xbar_io_sram_wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT___xbar_io_clint_wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_mtvec 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_mtvec 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_mepc 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_mepc = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_imm_b_sext 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_imm_b_sext 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext;
    vlSelf->NPC__DOT__core__DOT___exu_io_br_target 
        = (vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext 
           + vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc);
    vlSelf->NPC__DOT__arb__DOT__reset = vlSelf->NPC__DOT__reset;
    vlSelf->NPC__DOT__xbar__DOT__reset = vlSelf->NPC__DOT__reset;
    vlSelf->NPC__DOT__mem__DOT__rst = vlSelf->NPC__DOT__reset;
    vlSelf->NPC__DOT__uart__DOT__rst = vlSelf->NPC__DOT__reset;
    vlSelf->NPC__DOT__clint__DOT__rst = vlSelf->NPC__DOT__reset;
    vlSelf->NPC__DOT__core__DOT__reset = vlSelf->NPC__DOT__reset;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_addr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready;
    vlSelf->NPC__DOT___arb_io_imem_rvalid = vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid;
    vlSelf->NPC__DOT__core__DOT__io_imem_rvalid = vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid;
    vlSelf->NPC__DOT___arb_io_dmem_rvalid = vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_rvalid = vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid;
    vlSelf->NPC__DOT___arb_io_dmem_bvalid = vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_bvalid = vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid;
    vlSelf->NPC__DOT__arb__DOT__clock = vlSelf->NPC__DOT__clock;
    vlSelf->NPC__DOT__xbar__DOT__clock = vlSelf->NPC__DOT__clock;
    vlSelf->NPC__DOT__mem__DOT__clk = vlSelf->NPC__DOT__clock;
    vlSelf->NPC__DOT__uart__DOT__clk = vlSelf->NPC__DOT__clock;
    vlSelf->NPC__DOT__clint__DOT__clk = vlSelf->NPC__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__clock = vlSelf->NPC__DOT__clock;
    vlSelf->NPC__DOT___arb_io_dmem_rdata = vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata;
    vlSelf->NPC__DOT__core__DOT__io_dmem_rdata = vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rvalid = vlSelf->NPC__DOT___mem_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_bvalid = vlSelf->NPC__DOT___mem_bvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rvalid = vlSelf->NPC__DOT___uart_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_bvalid = vlSelf->NPC__DOT___uart_bvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rvalid = vlSelf->NPC__DOT___clint_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_bvalid = vlSelf->NPC__DOT___clint_bvalid;
    vlSelf->NPC__DOT__xbar__DOT___n_state_T_9 = (((0U 
                                                   == (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state)) 
                                                  & ((IData)(vlSelf->NPC__DOT__xbar__DOT__w_req) 
                                                     | ((IData)(vlSelf->NPC__DOT__arb__DOT__mem_arvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_arready))))
                                                  ? 
                                                 ((IData)(vlSelf->NPC__DOT__xbar__DOT__w_req)
                                                   ? 
                                                  (((vlSelf->NPC__DOT__arb__DOT__mem_awaddr 
                                                     >> 0x1fU) 
                                                    & (0x88000000U 
                                                       > vlSelf->NPC__DOT__arb__DOT__mem_awaddr))
                                                    ? 2U
                                                    : 
                                                   ((0xa00003f8U 
                                                     == vlSelf->NPC__DOT__arb__DOT__mem_awaddr)
                                                     ? 4U
                                                     : 
                                                    (((0xa0000048U 
                                                       == vlSelf->NPC__DOT__arb__DOT__mem_awaddr) 
                                                      | (0xa000004cU 
                                                         == vlSelf->NPC__DOT__arb__DOT__mem_awaddr))
                                                      ? 6U
                                                      : 1U)))
                                                   : (IData)(vlSelf->NPC__DOT__xbar__DOT__sr))
                                                  : 0U);
    vlSelf->NPC__DOT__arb__DOT__io_mem_bvalid = vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid;
    vlSelf->NPC__DOT___xbar_io_arb_bvalid = vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid;
    vlSelf->NPC__DOT__arb__DOT__io_imem_arvalid = vlSelf->NPC__DOT__core__DOT__io_imem_arvalid;
    vlSelf->NPC__DOT___core_io_imem_arvalid = vlSelf->NPC__DOT__core__DOT__io_imem_arvalid;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_arvalid 
        = vlSelf->NPC__DOT__core__DOT__io_imem_arvalid;
    vlSelf->NPC__DOT__arb__DOT__io_imem_rready = vlSelf->NPC__DOT__core__DOT__io_imem_rready;
    vlSelf->NPC__DOT___core_io_imem_rready = vlSelf->NPC__DOT__core__DOT__io_imem_rready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rready 
        = vlSelf->NPC__DOT__core__DOT__io_imem_rready;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_arvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_arvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->NPC__DOT___core_io_dmem_arvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_rready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->NPC__DOT___core_io_dmem_rready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_awvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->NPC__DOT___core_io_dmem_awvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_wvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->NPC__DOT___core_io_dmem_wvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_bready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_bready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->NPC__DOT___core_io_dmem_bready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__arb__DOT__io_imem_araddr = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__io_imem_araddr = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT___core_io_imem_araddr = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT___ifu_io_csr_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_araddr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__xbar__DOT___clint_done1_T = vlSelf->NPC__DOT__arb__DOT__imem_mem_done;
    vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0 
        = ((IData)(vlSelf->NPC__DOT__arb__DOT__imem_mem_done) 
           | (IData)(vlSelf->NPC__DOT__xbar__DOT___clint_done1_T_1));
    vlSelf->NPC__DOT__arb__DOT__casez_tmp = ((4U & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                              ? ((2U 
                                                  & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                   ? 0U
                                                   : 
                                                  (4U 
                                                   & ((~ 
                                                       (((IData)(vlSelf->NPC__DOT__arb__DOT__dmem_rvalid) 
                                                         & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready)) 
                                                        | ((IData)(vlSelf->NPC__DOT__arb__DOT__dmem_bvalid) 
                                                           & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready)))) 
                                                      << 2U))))
                                              : ((2U 
                                                  & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                   ? 
                                                  (((IData)(vlSelf->NPC__DOT__arb__DOT__imem_mem_done) 
                                                    | ((IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid) 
                                                       & (IData)(vlSelf->NPC__DOT__arb__DOT__mem_bready)))
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  (2U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->NPC__DOT__arb__DOT__imem_rvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__core__DOT__io_imem_rready))) 
                                                      << 1U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                   ? 
                                                  ((IData)(vlSelf->NPC__DOT__arb__DOT__imem_mem_done)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  (((IData)(vlSelf->NPC__DOT__core__DOT__io_imem_arvalid) 
                                                    & (IData)(vlSelf->NPC__DOT__arb__DOT__imem_arready))
                                                    ? 1U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid) 
                                                      & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_arready)) 
                                                     | ((((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid) 
                                                          & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_awready)) 
                                                         & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid)) 
                                                        & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_wready)))
                                                     ? 3U
                                                     : 0U)))));
    if ((0x100073U == vlSelf->NPC__DOT__arb__DOT__io_imem_rdata)) {
        VNPC___024root____Vdpiimwrap_NPC__DOT__core__DOT__idu__DOT__ebreak__DOT__npc_trap_TOP();
    }
    vlSelf->NPC__DOT___arb_io_imem_rdata = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_inst 
        = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_inst 
        = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT__io_imem_rdata = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_inst 
        = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT___idu_io_gpr_rs1_addr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_addr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory
        [vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr];
    vlSelf->NPC__DOT__core__DOT___idu_io_gpr_rs2_addr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_addr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory
        [vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr];
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89) 
            | (0x100073U == vlSelf->NPC__DOT__arb__DOT__imem_rdata)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75 
        = (0xf3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77 
        = (0x2f3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79 
        = (0x173U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81 
        = (0x373U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83 
        = (0x1f3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85 
        = (0x3f3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69 
        = (0x67U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29 
        = (0x393U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31 
        = (0x313U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33 
        = (0x213U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51 
        = (0x113U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53 
        = (0x193U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55 
        = (0x63U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57 
        = (0xe3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59 
        = (0x2e3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61 
        = (0x3e3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63 
        = (0x263U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65 
        = (0x363U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19 
        = (0x13U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1 
        = (0x103U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3 
        = (0x123U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5 
        = (3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7 
        = (0x83U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9 
        = (0x203U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11 
        = (0x283U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13 
        = (0x23U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15 
        = (0xa3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0 = 
        ((0x1fc00U & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                      >> 0xfU)) | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rresp 
        = vlSelf->NPC__DOT__core__DOT__io_imem_rresp;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_br_target 
        = vlSelf->NPC__DOT__core__DOT___exu_io_br_target;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_br_target 
        = vlSelf->NPC__DOT__core__DOT___exu_io_br_target;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__reset = vlSelf->NPC__DOT__core__DOT__reset;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__reset = vlSelf->NPC__DOT__core__DOT__reset;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__reset = vlSelf->NPC__DOT__core__DOT__reset;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__reset = vlSelf->NPC__DOT__core__DOT__reset;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__reset = vlSelf->NPC__DOT__core__DOT__reset;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_addr 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_addr;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rvalid 
        = vlSelf->NPC__DOT__core__DOT__io_imem_rvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rvalid 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_rvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bvalid 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_bvalid;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__clock = vlSelf->NPC__DOT__core__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__clock = vlSelf->NPC__DOT__core__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__clock = vlSelf->NPC__DOT__core__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__clock = vlSelf->NPC__DOT__core__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__clock = vlSelf->NPC__DOT__core__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__clock = vlSelf->NPC__DOT__core__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__clock = vlSelf->NPC__DOT__core__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rdata 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_rdata;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_reg_pc;
    vlSelf->NPC__DOT__xbar__DOT__casez_tmp = ((4U & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                               ? ((2U 
                                                   & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                    ? 
                                                   ((IData)(vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0)
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   (6U 
                                                    | (((IData)(vlSelf->NPC__DOT___clint_rvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_rready)) 
                                                       | ((IData)(vlSelf->NPC__DOT___clint_bvalid) 
                                                          & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_bready)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                    ? 
                                                   ((IData)(vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0)
                                                     ? 0U
                                                     : 5U)
                                                    : 
                                                   (4U 
                                                    | (((IData)(vlSelf->NPC__DOT___uart_rvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_rready)) 
                                                       | ((IData)(vlSelf->NPC__DOT___uart_bvalid) 
                                                          & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_bready))))))
                                               : ((2U 
                                                   & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                    ? 
                                                   ((IData)(vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0)
                                                     ? 0U
                                                     : 3U)
                                                    : 
                                                   (2U 
                                                    | (((IData)(vlSelf->NPC__DOT___mem_rvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_rready)) 
                                                       | ((IData)(vlSelf->NPC__DOT___mem_bvalid) 
                                                          & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_bready)))))
                                                   : (IData)(vlSelf->NPC__DOT__xbar__DOT___n_state_T_9)));
    vlSelf->NPC__DOT__arb__DOT__n_state = vlSelf->NPC__DOT__arb__DOT__casez_tmp;
    vlSelf->NPC__DOT__arb__DOT___GEN_4 = (3U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT___GEN_5 = (4U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT___GEN = (0U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT___GEN_0 = (1U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT___GEN_1 = (2U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rdata 
        = vlSelf->NPC__DOT__core__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__ebreak__DOT__inst 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_inst;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_addr 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data 
        = ((0U != (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr))
            ? vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data
            : 0U);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_addr 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data 
        = ((0U != (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr))
            ? vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data
            : 0U);
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77));
    vlSelf->__VdfgTmp_h0fdfba83__0 = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79) 
                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85));
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67) 
           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57) 
            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59) 
               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61) 
                  | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63) 
                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65))))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) 
           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7) 
            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9) 
               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21 
        = (0x8033U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23 
        = (0x3b3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25 
        = (0x333U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27 
        = (0x233U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35 
        = (0xb3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37 
        = (0x2b3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39 
        = (0x82b3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41 
        = (0x93U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43 
        = (0x293U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45 
        = (0x8293U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47 
        = (0x133U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49 
        = (0x1b3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17 
        = (0x33U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_clk 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_clk 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_clk 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_clk 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_clk 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_clk 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W0_clk 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W1_clk 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W2_clk 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_clk 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__clock;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_clk 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__clock;
    vlSelf->NPC__DOT__xbar__DOT__n_state = vlSelf->NPC__DOT__xbar__DOT__casez_tmp;
    vlSelf->NPC__DOT__xbar__DOT___GEN_1 = (2U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN = (0U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_0 = (1U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_5 = (6U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_3 = (4U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_2 = (3U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_4 = (5U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT__casez_tmp_0 = ((4U 
                                                & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                    ? vlSelf->NPC__DOT__arb__DOT__mem_araddr
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                     ? vlSelf->NPC__DOT__arb__DOT__mem_araddr
                                                     : vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                     ? vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr
                                                     : vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                     ? vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc
                                                     : 0U)));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp) 
                             << 5U) | (((IData)(vlSelf->NPC__DOT__arb__DOT__imem_rresp) 
                                        << 3U) | (IData)(vlSelf->NPC__DOT__arb__DOT__n_state)));
    vlSelf->NPC__DOT__arb__DOT__casez_tmp_1 = VNPC__ConstPool__TABLE_h423534d4_0
        [vlSelf->__Vtableidx1];
    vlSelf->NPC__DOT__arb__DOT___GEN_6 = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_4) 
                                          | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_5));
    vlSelf->NPC__DOT__arb__DOT___GEN_2 = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_0) 
                                          | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_1));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data;
    vlSelf->NPC__DOT__core__DOT___gpr_io_gpr_rs1_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT___gpr_io_gpr_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79) 
            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81) 
               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0)
            ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5)
                     ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7)
                              ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9)
                                       ? 4U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11)
                                                ? 5U
                                                : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15)
                                                     ? 1U
                                                     : 7U)))))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0) 
           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5) 
              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7) 
                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9) 
                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11) 
                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8))))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0) 
           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5) 
              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7) 
                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9) 
                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11) 
                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13) 
                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15) 
                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17) 
                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)))))))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0 
        = (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
             ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                      ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                               ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                        ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                  ? 0U
                                                  : 
                                                 (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                          ? 4U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                            ? 4U
                                                            : 
                                                           (0U 
                                                            & (~ 
                                                               (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
            ? (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                 ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                          ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                   ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                            ? 2U : 
                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                             ? 0U : 
                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                              ? 2U : 
                                             (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                           ? 0U
                                                           : 
                                                          (0U 
                                                           & (~ 
                                                              (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                ? 0U : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                          ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                                   ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                            ? 0U : 
                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                             ? 1U : 
                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                              ? 1U : 
                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                               ? 0U
                                               : ((
                                                   (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                   ? 1U
                                                   : 
                                                  ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                     ? 1U
                                                     : 
                                                    ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                            ? 1U
                                                            : 
                                                           (1U 
                                                            & (~ 
                                                               (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                         ? (0xfffff000U & vlSelf->NPC__DOT__arb__DOT__io_imem_rdata)
                         : (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                         >> 0x1fU))) 
                             << 0x14U) | ((0xff000U 
                                           & vlSelf->NPC__DOT__arb__DOT__io_imem_rdata) 
                                          | ((0x800U 
                                              & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                                   >> 0x14U)))))))
            : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                 ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                          ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                   ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                            ? 2U : 
                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                             ? 0U : 
                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                              ? 2U : 
                                             (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                           ? 0U
                                                           : 
                                                          (0U 
                                                           & (~ 
                                                              (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                ? (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                     ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                              ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                       ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                                ? 1U
                                                : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                     ? 0U
                                                     : 
                                                    (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                      ? 1U
                                                      : 
                                                     ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                       ? 0U
                                                       : 
                                                      ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                        ? 1U
                                                        : 
                                                       ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                            ? 1U
                                                            : 
                                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                               ? 1U
                                                               : 
                                                              (1U 
                                                               & (~ 
                                                                  (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                    ? (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                          >> 0x14U))) : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                                           ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                        ? 0U
                                                        : 
                                                       (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                         ? 1U
                                                         : 
                                                        ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                          ? 0U
                                                          : 
                                                         ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                           ? 1U
                                                           : 
                                                          ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                             | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                            ? 0U
                                                            : 
                                                           (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                             | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                             ? 1U
                                                             : 
                                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                               ? 1U
                                                               : 
                                                              ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                                 ? 0U
                                                                 : 
                                                                ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                                  ? 1U
                                                                  : 
                                                                 (1U 
                                                                  & (~ 
                                                                     (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                                          ? vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data
                                          : 0U)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17) 
            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19) 
               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                  | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23) 
                     | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25) 
                        | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27) 
                           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                   | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                      | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51) 
                                                               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)))))))))))))))))))));
    if (vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) {
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 1U;
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 1U;
    } else if (vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3) {
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 1U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 0U;
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 0U;
    } else if (vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9) {
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 1U;
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 1U;
    } else {
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen 
            = vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen 
            = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                ? 0U : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17) 
                         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19) 
                            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23) 
                                  | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25) 
                                     | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27) 
                                        | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                                   | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                                      | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7))))))))))))))))))
                         ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                  ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0) 
                                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71) 
                                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73) 
                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2)))))));
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel 
            = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6)
                ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0)
                         ? 2U : ((1U & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2)) 
                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)))
                                  ? 0U : 3U)));
    }
    vlSelf->NPC__DOT__xbar__DOT__casez_tmp_0 = ((4U 
                                                 & (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state))
                                                  ? (IData)(vlSelf->NPC__DOT___clint_rresp)
                                                  : (IData)(vlSelf->NPC__DOT___uart_rresp))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state))
                                                  ? (IData)(vlSelf->NPC__DOT___mem_rresp)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state))
                                                   ? 
                                                  (1U 
                                                   == (IData)(vlSelf->NPC__DOT__xbar__DOT__sr))
                                                   : 0U)));
    vlSelf->NPC__DOT__xbar__DOT___GEN_9 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN) 
                                           | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_0));
    vlSelf->NPC__DOT__xbar__DOT___GEN_6 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_5) 
                                           | (7U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp)));
    vlSelf->NPC__DOT__xbar__DOT___GEN_8 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1) 
                                           | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_2));
    vlSelf->NPC__DOT__xbar__DOT___GEN_7 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3) 
                                           | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_4));
    vlSelf->NPC__DOT__arb__DOT___GEN_7 = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN) 
                                          | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_2));
    vlSelf->NPC__DOT__arb__DOT___GEN_3 = (1U & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_2)) 
                                                | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN)));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__isL = ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0) 
                                                  & (0U 
                                                     == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen)));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__isS = ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0) 
                                                  & (1U 
                                                     == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0)
            ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21)
                     ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)
                              ? 3U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)
                                       ? 4U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27)
                                                ? 5U
                                                : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)
                                                        ? 7U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39)
                                                         ? 8U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41)
                                                          ? 6U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)
                                                           ? 7U
                                                           : 
                                                          ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45)
                                                            ? 8U
                                                            : 
                                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47)
                                                             ? 9U
                                                             : 
                                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49)
                                                              ? 0xaU
                                                              : 
                                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51)
                                                               ? 9U
                                                               : 
                                                              ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53)
                                                                ? 0xaU
                                                                : 
                                                               ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55)
                                                                 ? 0xbU
                                                                 : 
                                                                ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57)
                                                                  ? 0xcU
                                                                  : 
                                                                 ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59)
                                                                   ? 0xeU
                                                                   : 
                                                                  ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61)
                                                                    ? 0x10U
                                                                    : 
                                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63)
                                                                     ? 0xdU
                                                                     : 
                                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65)
                                                                      ? 0xfU
                                                                      : 
                                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                                       ? 1U
                                                                       : 
                                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                                        ? 0x11U
                                                                        : 
                                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                                         ? 1U
                                                                         : 
                                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2)
                                                                          ? 0x12U
                                                                          : 0U))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h9e652396__0 = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0) 
                                      | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23) 
                                            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25) 
                                               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27) 
                                                  | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                                        | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                                           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                                                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                                                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69) 
                                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)))))))))))))))))))))))))));
    vlSelf->NPC__DOT__core__DOT__exu__DOT___GEN = (0x1fU 
                                                   & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
        = ((0U == ((((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) 
                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6))
                    ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                             ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                      ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71)
                                               ? 2U
                                               : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4) 
                                                         << 1U)))))))))))))
            ? vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data
            : ((1U == ((((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) 
                             | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6))
                        ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                 ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                          ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                          ? 3U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4) 
                                                          << 1U)))))))))))))
                ? vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc
                : ((2U == ((((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) 
                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                              | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                             | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6))
                            ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                     ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                              ? 0U : 
                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71)
                                               ? 2U
                                               : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4) 
                                                         << 1U)))))))))))))
                    ? 0U : (0x1fU & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                     >> 0xfU)))));
    vlSelf->NPC__DOT__xbar__DOT___GEN_11 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_4) 
                                            | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_6));
    vlSelf->NPC__DOT__xbar__DOT___GEN_14 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9) 
                                            | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_8));
    vlSelf->NPC__DOT__xbar__DOT___GEN_10 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9) 
                                            | ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1) 
                                               | ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_2) 
                                                  | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_7))));
    vlSelf->NPC__DOT__arb__DOT___GEN_8 = (1U & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6)) 
                                                | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7)));
    vlSelf->NPC__DOT__arb__DOT__io_dmem_arready = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_3) 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_arready));
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awready = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_3) 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_awready));
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wready = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_3) 
                                                  & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_wready));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_2 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_1) 
         & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__isS));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_exe_fun 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_exe_fun 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun;
    vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state) 
           & ((~ (IData)(vlSelf->__VdfgTmp_h9e652396__0)) 
              & ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0) 
                 | ((IData)(vlSelf->__VdfgTmp_h0fdfba83__0) 
                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1) 
                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87) 
                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89)))))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd 
        = ((IData)(vlSelf->__VdfgTmp_h9e652396__0) ? 0U
            : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0)
                ? 1U : ((IData)(vlSelf->__VdfgTmp_h0fdfba83__0)
                         ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1)
                                  ? 3U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87)
                                           ? 4U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89)
                                                    ? 6U
                                                    : 0U))))));
    if (vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state) {
        vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
        vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    } else {
        vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen = 0U;
        vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd = 0U;
    }
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_op2_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_op2_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg = 
        (2U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel));
    vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_14 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp)) 
                                    << (0x1fU & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp;
    vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_3 
        = (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
           == vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_31 
        = (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
           + vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0 
        = VL_LTS_III(32, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17 
        = (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
           < vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__xbar__DOT___GEN_12 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3) 
                                            | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_11));
    vlSelf->NPC__DOT__arb__DOT__io_imem_arready = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_8) 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__imem_arready));
    vlSelf->NPC__DOT___arb_io_dmem_arready = vlSelf->NPC__DOT__arb__DOT__io_dmem_arready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_arready = vlSelf->NPC__DOT__arb__DOT__io_dmem_arready;
    vlSelf->NPC__DOT___arb_io_dmem_awready = vlSelf->NPC__DOT__arb__DOT__io_dmem_awready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_awready = vlSelf->NPC__DOT__arb__DOT__io_dmem_awready;
    vlSelf->NPC__DOT___arb_io_dmem_wready = vlSelf->NPC__DOT__arb__DOT__io_dmem_wready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_wready = vlSelf->NPC__DOT__arb__DOT__io_dmem_wready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0 
        = ((0U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state))
            ? (((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready) 
                & (IData)(vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid))
                ? (1U | ((IData)((7U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))) 
                         << 1U)) : 0U) : ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state))
                                           ? ((((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__arvalid) 
                                                & (IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_arready)) 
                                               | ((((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__awvalid) 
                                                    & (IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_awready)) 
                                                   & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__wvalid)) 
                                                  & (IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_wready)))
                                               ? 2U
                                               : 1U)
                                           : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state))
                                               ? (2U 
                                                  | (((IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid) 
                                                      & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__rready)) 
                                                     | ((IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__bready))))
                                               : (((IData)(vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready) 
                                                   & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid))
                                                   ? 0U
                                                   : 3U))));
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_wen 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_wen 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en 
        = ((1U == (IData)(vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen)) 
           & (0U != (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr)));
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_en 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__csignals_6 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr 
        = ((4U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
            ? 0x342U : (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                        >> 0x14U));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_jmp_flg 
        = vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_jmp_flg 
        = vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT___exu_io_br_flg = (1U 
                                                   & ((0xbU 
                                                       == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                       ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_3)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                        ? 
                                                       (~ (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_3))
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                         ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0)
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                          ? 
                                                         VL_GTES_III(32, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                           ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17)
                                                           : 
                                                          ((~ (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17)) 
                                                           & (0x10U 
                                                              == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun)))))))));
    vlSelf->NPC__DOT__core__DOT___exu_io_alu_out = 
        ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
          ? vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_31
          : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
              ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                 - vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
              : ((3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                  ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                     & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
                  : ((4U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                      ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                         | vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
                      : ((5U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                          ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                             ^ vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
                          : ((6U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                              ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                                 << (0x1fU & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0))
                              : ((7U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                  ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                                     >> (0x1fU & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0))
                                  : ((8U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                      ? VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp, 
                                                       (0x1fU 
                                                        & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0))
                                      : ((9U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                          ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0)
                                          : ((0xaU 
                                              == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                              ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17)
                                              : ((0x11U 
                                                  == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                  ? 
                                                 (0xfffffffeU 
                                                  & vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_31)
                                                  : 
                                                 ((0x12U 
                                                   == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                   ? vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp
                                                   : 0U))))))))))));
    vlSelf->NPC__DOT__xbar__DOT___GEN_13 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_2) 
                                            | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_12));
    vlSelf->NPC__DOT___arb_io_imem_arready = vlSelf->NPC__DOT__arb__DOT__io_imem_arready;
    vlSelf->NPC__DOT__core__DOT__io_imem_arready = vlSelf->NPC__DOT__arb__DOT__io_imem_arready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp 
        = ((0U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state))
            ? ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready) 
               & (IData)(vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid))
            : ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state))
                ? (((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__arvalid) 
                    & (IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_arready))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state))
                                   ? (2U | ((IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid) 
                                            & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__rready)))
                                   : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready) 
                                       & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid))
                                       ? 0U : 3U))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arready 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_arready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awready 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_awready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wready 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_wready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__n_state 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN = (0U 
                                                   == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0 = 
        (1U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_3 = 
        (2U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0));
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_en 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en) 
           & (4U == (IData)(vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd)));
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT___wbu_io_csr_addr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process 
        = ((0xf12U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
            ? 5U : ((0xf11U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                     ? 4U : ((0x342U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                              ? 3U : ((0x341U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                                       ? 2U : (0x305U 
                                               == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))))));
    if (vlSelf->NPC__DOT__core__DOT___exu_io_br_flg) {
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_br_flg = 1U;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_br_flg = 1U;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__pc_next 
            = vlSelf->NPC__DOT__core__DOT___exu_io_br_target;
    } else {
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_br_flg = 0U;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_br_flg = 0U;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__pc_next 
            = ((IData)(vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg)
                ? vlSelf->NPC__DOT__core__DOT___exu_io_alu_out
                : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87)
                    ? vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec
                    : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89)
                        ? vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc
                        : ((IData)(4U) + vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc))));
    }
    if ((0U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))) {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 
            = (((- (IData)((1U & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata));
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 
            = (0xffU & vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata);
    } else if ((1U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))) {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 
            = (((- (IData)((1U & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                  >> 0xfU)))) << 8U) 
               | (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                           >> 8U)));
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 
            = (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                        >> 8U));
    } else if ((2U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))) {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 
            = (((- (IData)((1U & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                  >> 0x17U)))) << 8U) 
               | (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                           >> 0x10U)));
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 
            = (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                        >> 0x10U));
    } else {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 
            = (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                            >> 0x1fU))) << 8U) | (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                                  >> 0x18U));
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 
            = (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                        >> 0x18U));
    }
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_arready 
        = vlSelf->NPC__DOT__core__DOT__io_imem_arready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN = (0U 
                                                   == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_0 = 
        (1U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_2 = 
        (2U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state 
        = vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_5 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_4 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_3) 
         | (3U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0)));
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_en 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_addr 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_addr 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata 
        = ((5U >= (IData)(vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process))
            ? vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
           [vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process]
            : 0U);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp 
        = ((4U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
            ? ((2U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                ? 0U : ((1U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                         ? (0xffffU & (((3U == (3U 
                                                & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out)) 
                                        | (2U == (3U 
                                                  & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out)))
                                        ? (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                           >> 0x10U)
                                        : vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata))
                         : (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2)))
            : ((2U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                ? ((1U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                    ? 0U : vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata)
                : ((1U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                    ? ((3U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                        ? (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                         >> 0x10U))
                        : ((2U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                            ? (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                             >> 0x10U))
                            : ((((1U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                                  ? (- (IData)((1U 
                                                & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                                   >> 0xfU))))
                                  : (- (IData)((1U 
                                                & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                                   >> 0xfU))))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata))))
                    : vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1)));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_3 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_2) 
         | (3U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp)));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp_0 
        = ((0U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state))
            ? (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid)
            : ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state))
                ? ((IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid) 
                   & (~ (IData)((0U != (IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rresp)))))
                : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state))
                    ? ((IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid) 
                       & (~ (IData)((0U != (IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rresp)))))
                    : ((IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid) 
                       & (~ (IData)((0U != (IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rresp))))))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_csr_rdata 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_rdata 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata 
        = ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
            ? vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp
            : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                ? (vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata 
                   | vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp)
                : ((3U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                    ? ((~ vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp) 
                       & vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata)
                    : ((4U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                        ? 0xbU : 0U))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data 
        = ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel))
            ? vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp
            : ((IData)(vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg)
                ? ((IData)(4U) + vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc)
                : ((3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel))
                    ? vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata
                    : vlSelf->NPC__DOT__core__DOT___exu_io_alu_out)));
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT___wbu_io_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_wb_data 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_wb_data 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_wdata;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_wdata;
}

void VNPC___024root___eval_ico(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VNPC___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VNPC___024root___eval_act(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_act\n"); );
}

VL_INLINE_OPT void VNPC___024root___nba_sequent__TOP__1(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0;
    __Vdlyvdim0__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0;
    __Vdlyvval__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0;
    __Vdlyvset__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3;
    __Vdlyvdim0__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 = 0;
    IData/*31:0*/ __Vdlyvval__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3;
    __Vdlyvval__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3;
    __Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 = 0;
    IData/*31:0*/ __Vdlyvval__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4;
    __Vdlyvval__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4;
    __Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4 = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__core__DOT__ifu__DOT__delay;
    __Vdly__NPC__DOT__core__DOT__ifu__DOT__delay = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__core__DOT__ifu__DOT__lfsr;
    __Vdly__NPC__DOT__core__DOT__ifu__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__core__DOT__lsu__DOT__delay;
    __Vdly__NPC__DOT__core__DOT__lsu__DOT__delay = 0;
    CData/*3:0*/ __Vdly__NPC__DOT__core__DOT__lsu__DOT__lfsr;
    __Vdly__NPC__DOT__core__DOT__lsu__DOT__lfsr = 0;
    // Body
    __Vdly__NPC__DOT__core__DOT__ifu__DOT__lfsr = vlSelf->NPC__DOT__core__DOT__ifu__DOT__lfsr;
    __Vdly__NPC__DOT__core__DOT__ifu__DOT__delay = vlSelf->NPC__DOT__core__DOT__ifu__DOT__delay;
    __Vdly__NPC__DOT__core__DOT__lsu__DOT__lfsr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__lfsr;
    __Vdly__NPC__DOT__core__DOT__lsu__DOT__delay = vlSelf->NPC__DOT__core__DOT__lsu__DOT__delay;
    __Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0 = 0U;
    if (vlSelf->reset) {
        __Vdly__NPC__DOT__core__DOT__ifu__DOT__delay 
            = vlSelf->NPC__DOT__core__DOT__ifu__DOT__lfsr;
        __Vdly__NPC__DOT__core__DOT__ifu__DOT__lfsr = 0U;
        __Vdly__NPC__DOT__core__DOT__lsu__DOT__delay 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__lfsr;
        __Vdly__NPC__DOT__core__DOT__lsu__DOT__lfsr = 0U;
        vlSelf->NPC__DOT__xbar__DOT__arb_rresp = 0U;
        vlSelf->NPC__DOT__arb__DOT__imem_rresp = 0U;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state = 1U;
        vlSelf->NPC__DOT__xbar__DOT__clint_wdata = 0U;
        vlSelf->NPC__DOT__xbar__DOT__clint_awaddr = 0U;
        vlSelf->NPC__DOT__xbar__DOT__clint_araddr = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state = 0U;
        vlSelf->NPC__DOT__xbar__DOT__sram_araddr = 0U;
        vlSelf->NPC__DOT__xbar__DOT__sram_awaddr = 0U;
        vlSelf->NPC__DOT__xbar__DOT__sram_wdata = 0U;
        vlSelf->NPC__DOT__xbar__DOT__uart_wstrb = 0U;
        vlSelf->NPC__DOT__xbar__DOT__uart_awaddr = 0U;
        vlSelf->NPC__DOT__xbar__DOT__uart_araddr = 0U;
        vlSelf->NPC__DOT__xbar__DOT__uart_wdata = 0U;
        vlSelf->NPC__DOT__xbar__DOT__sram_wstrb = 0U;
        vlSelf->NPC__DOT__xbar__DOT__arb_rdata = 0U;
        vlSelf->NPC__DOT__arb__DOT__mem_wstrb = 0U;
        vlSelf->NPC__DOT__arb__DOT__mem_wdata = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__awaddr = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__araddr = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__wstrb = 0U;
        vlSelf->NPC__DOT__arb__DOT__dmem_rdata = 0U;
        vlSelf->NPC__DOT__arb__DOT__mem_araddr = 0U;
        vlSelf->NPC__DOT__arb__DOT__mem_awaddr = 0U;
        vlSelf->NPC__DOT__xbar__DOT__c_state = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__wdata = 0U;
        vlSelf->NPC__DOT__arb__DOT__c_state = 0U;
        vlSelf->NPC__DOT__arb__DOT__imem_rdata = 0U;
    } else {
        __Vdly__NPC__DOT__core__DOT__ifu__DOT__lfsr 
            = ((0xeU & ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__lfsr) 
                        << 1U)) | (1U & VL_REDXOR_4(
                                                    (7U 
                                                     & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__lfsr)))));
        if (vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN) {
            __Vdly__NPC__DOT__core__DOT__ifu__DOT__delay 
                = vlSelf->NPC__DOT__core__DOT__ifu__DOT__lfsr;
        } else if ((1U & (~ ((~ (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_0)) 
                             | (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_1))))) {
            __Vdly__NPC__DOT__core__DOT__ifu__DOT__delay 
                = (0xfU & ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__delay) 
                           - (IData)(1U)));
        }
        __Vdly__NPC__DOT__core__DOT__lsu__DOT__lfsr 
            = ((0xeU & ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__lfsr) 
                        << 1U)) | (1U & VL_REDXOR_4(
                                                    (7U 
                                                     & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__lfsr)))));
        if (vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN) {
            __Vdly__NPC__DOT__core__DOT__lsu__DOT__delay 
                = vlSelf->NPC__DOT__core__DOT__lsu__DOT__lfsr;
        } else if ((1U & (~ ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0)) 
                             | (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_1))))) {
            __Vdly__NPC__DOT__core__DOT__lsu__DOT__delay 
                = (0xfU & ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__delay) 
                           - (IData)(1U)));
        }
        vlSelf->NPC__DOT__xbar__DOT__arb_rresp = vlSelf->NPC__DOT__xbar__DOT__casez_tmp_0;
        vlSelf->NPC__DOT__arb__DOT__imem_rresp = vlSelf->NPC__DOT__arb__DOT__casez_tmp_1;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state 
            = vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state;
        if (vlSelf->NPC__DOT__xbar__DOT___GEN_10) {
            vlSelf->NPC__DOT__xbar__DOT__clint_wdata = 0U;
            vlSelf->NPC__DOT__xbar__DOT__clint_awaddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__clint_araddr = 0U;
        } else if (vlSelf->NPC__DOT__xbar__DOT___GEN_6) {
            vlSelf->NPC__DOT__xbar__DOT__clint_wdata 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_wdata;
            vlSelf->NPC__DOT__xbar__DOT__clint_awaddr 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr;
            vlSelf->NPC__DOT__xbar__DOT__clint_araddr 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_araddr;
        }
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__n_state;
        if (vlSelf->NPC__DOT__xbar__DOT___GEN_9) {
            vlSelf->NPC__DOT__xbar__DOT__sram_araddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__sram_awaddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__sram_wdata = 0U;
            vlSelf->NPC__DOT__xbar__DOT__sram_wstrb = 0U;
        } else if (vlSelf->NPC__DOT__xbar__DOT___GEN_8) {
            vlSelf->NPC__DOT__xbar__DOT__sram_araddr 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_araddr;
            vlSelf->NPC__DOT__xbar__DOT__sram_awaddr 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr;
            vlSelf->NPC__DOT__xbar__DOT__sram_wdata 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_wdata;
            vlSelf->NPC__DOT__xbar__DOT__sram_wstrb 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb;
        } else if (vlSelf->NPC__DOT__xbar__DOT___GEN_12) {
            vlSelf->NPC__DOT__xbar__DOT__sram_araddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__sram_awaddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__sram_wdata = 0U;
            vlSelf->NPC__DOT__xbar__DOT__sram_wstrb = 0U;
        }
        if (vlSelf->NPC__DOT__xbar__DOT___GEN_14) {
            vlSelf->NPC__DOT__xbar__DOT__uart_wstrb = 0U;
            vlSelf->NPC__DOT__xbar__DOT__uart_awaddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__uart_araddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__uart_wdata = 0U;
        } else if (vlSelf->NPC__DOT__xbar__DOT___GEN_7) {
            vlSelf->NPC__DOT__xbar__DOT__uart_wstrb 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb;
            vlSelf->NPC__DOT__xbar__DOT__uart_awaddr 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr;
            vlSelf->NPC__DOT__xbar__DOT__uart_araddr 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_araddr;
            vlSelf->NPC__DOT__xbar__DOT__uart_wdata 
                = vlSelf->NPC__DOT__arb__DOT__io_mem_wdata;
        } else if (vlSelf->NPC__DOT__xbar__DOT___GEN_6) {
            vlSelf->NPC__DOT__xbar__DOT__uart_wstrb = 0U;
            vlSelf->NPC__DOT__xbar__DOT__uart_awaddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__uart_araddr = 0U;
            vlSelf->NPC__DOT__xbar__DOT__uart_wdata = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9)))) {
            if (vlSelf->NPC__DOT__xbar__DOT___GEN_8) {
                vlSelf->NPC__DOT__xbar__DOT__arb_rdata 
                    = vlSelf->NPC__DOT___mem_rdata;
            } else if (vlSelf->NPC__DOT__xbar__DOT___GEN_7) {
                vlSelf->NPC__DOT__xbar__DOT__arb_rdata 
                    = vlSelf->NPC__DOT___uart_rdata;
            } else if (vlSelf->NPC__DOT__xbar__DOT___GEN_6) {
                vlSelf->NPC__DOT__xbar__DOT__arb_rdata 
                    = vlSelf->NPC__DOT___clint_rdata;
            }
        }
        if (vlSelf->NPC__DOT__arb__DOT___GEN_7) {
            vlSelf->NPC__DOT__arb__DOT__mem_wstrb = 0U;
            vlSelf->NPC__DOT__arb__DOT__mem_wdata = 0U;
            vlSelf->NPC__DOT__arb__DOT__mem_awaddr = 0U;
        } else if (vlSelf->NPC__DOT__arb__DOT___GEN_6) {
            vlSelf->NPC__DOT__arb__DOT__mem_wstrb = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
            vlSelf->NPC__DOT__arb__DOT__mem_wdata = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
            vlSelf->NPC__DOT__arb__DOT__mem_awaddr 
                = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
        }
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__awaddr 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__araddr 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        if ((0U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))) {
            vlSelf->NPC__DOT__core__DOT__lsu__DOT__wstrb 
                = ((3U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                    ? 8U : ((2U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                             ? 4U : ((1U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                                      ? 2U : 1U)));
        } else if ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))) {
            vlSelf->NPC__DOT__core__DOT__lsu__DOT__wstrb 
                = (((3U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out)) 
                    | (2U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out)))
                    ? 0xcU : 3U);
        } else if ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))) {
            vlSelf->NPC__DOT__core__DOT__lsu__DOT__wstrb = 0xfU;
        }
        if ((1U & (~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_8)))) {
            vlSelf->NPC__DOT__arb__DOT__dmem_rdata 
                = vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata;
        }
        vlSelf->NPC__DOT__arb__DOT__mem_araddr = vlSelf->NPC__DOT__arb__DOT__casez_tmp_0;
        vlSelf->NPC__DOT__xbar__DOT__c_state = vlSelf->NPC__DOT__xbar__DOT__n_state;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__wdata 
            = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
        vlSelf->NPC__DOT__arb__DOT__c_state = vlSelf->NPC__DOT__arb__DOT__n_state;
        if ((1U & (~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_3)))) {
            vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                = vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata;
        }
    }
    vlSelf->NPC__DOT__core__DOT__exu__DOT__in_ready 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__n_state)) 
                                               | ((~ (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__n_state)) 
                                                  & (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__in_ready)))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__out_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__n_state) 
                                         & ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__n_state) 
                                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__out_valid))));
    vlSelf->NPC__DOT__xbar__DOT__clint_arvalid = ((~ (IData)(vlSelf->reset)) 
                                                  & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_10)) 
                                                     & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_5)
                                                         ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid)
                                                         : 
                                                        ((~ (IData)(
                                                                    (7U 
                                                                     == (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state)))) 
                                                         & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_arvalid)))));
    vlSelf->NPC__DOT__xbar__DOT__uart_arvalid = ((~ (IData)(vlSelf->reset)) 
                                                 & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_14)) 
                                                    & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3)
                                                        ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid)
                                                        : 
                                                       ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_11)) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_arvalid)))));
    vlSelf->NPC__DOT__xbar__DOT__clint_wvalid = ((~ (IData)(vlSelf->reset)) 
                                                 & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_10)) 
                                                    & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_5)
                                                        ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid)
                                                        : 
                                                       ((~ (IData)(
                                                                   (7U 
                                                                    == (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state)))) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_wvalid)))));
    vlSelf->NPC__DOT__xbar__DOT__clint_awvalid = ((~ (IData)(vlSelf->reset)) 
                                                  & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_10)) 
                                                     & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_5)
                                                         ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid)
                                                         : 
                                                        ((~ (IData)(
                                                                    (7U 
                                                                     == (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state)))) 
                                                         & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_awvalid)))));
    vlSelf->NPC__DOT__xbar__DOT__uart_awvalid = ((~ (IData)(vlSelf->reset)) 
                                                 & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_14)) 
                                                    & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3)
                                                        ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid)
                                                        : 
                                                       ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_11)) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_awvalid)))));
    vlSelf->NPC__DOT__xbar__DOT__uart_wvalid = ((~ (IData)(vlSelf->reset)) 
                                                & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_14)) 
                                                   & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3)
                                                       ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid)
                                                       : 
                                                      ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_11)) 
                                                       & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_wvalid)))));
    vlSelf->NPC__DOT__xbar__DOT__sram_arvalid = ((~ (IData)(vlSelf->reset)) 
                                                 & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9)) 
                                                    & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1)
                                                        ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid)
                                                        : 
                                                       ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_13)) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_arvalid)))));
    vlSelf->NPC__DOT__xbar__DOT__sram_awvalid = ((~ (IData)(vlSelf->reset)) 
                                                 & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9)) 
                                                    & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1)
                                                        ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid)
                                                        : 
                                                       ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_13)) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_awvalid)))));
    vlSelf->NPC__DOT__xbar__DOT__sram_wvalid = ((~ (IData)(vlSelf->reset)) 
                                                & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9)) 
                                                   & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1)
                                                       ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid)
                                                       : 
                                                      ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_13)) 
                                                       & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_wvalid)))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__in_ready 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__n_state)) 
                                               | ((~ (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__n_state)) 
                                                  & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__in_ready)))));
    vlSelf->NPC__DOT__xbar__DOT__arb_wready = ((~ (IData)(vlSelf->reset)) 
                                               & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9) 
                                                  | ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_8)
                                                      ? (IData)(vlSelf->NPC__DOT___mem_wready)
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_7)
                                                       ? (IData)(vlSelf->NPC__DOT___uart_wready)
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_6)
                                                        ? (IData)(vlSelf->NPC__DOT___clint_wready)
                                                        : (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_wready))))));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__out_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__n_state) 
                                         & ((IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__n_state) 
                                            | (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__out_valid))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN) 
                                         | ((~ ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0) 
                                                | (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_4))) 
                                            & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready))));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN) 
                                         | ((~ ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_0) 
                                                | (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_3))) 
                                            & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready))));
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__out_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state) 
                                         & ((IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state) 
                                            | (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__out_valid))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN) 
                                              | (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0)) 
                                             | (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_3))) 
                                         & ((3U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__n_state)) 
                                            | (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid))));
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__in_ready 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state)) 
                                               | ((~ (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state)) 
                                                  & (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__in_ready)))));
    vlSelf->NPC__DOT__xbar__DOT__clint_bready = ((~ (IData)(vlSelf->reset)) 
                                                 & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_10)) 
                                                    & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_5)
                                                        ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_bready)
                                                        : 
                                                       ((~ (IData)(
                                                                   (7U 
                                                                    == (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state)))) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_bready)))));
    vlSelf->NPC__DOT__xbar__DOT__clint_rready = ((~ (IData)(vlSelf->reset)) 
                                                 & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_10)) 
                                                    & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_5)
                                                        ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_rready)
                                                        : 
                                                       ((~ (IData)(
                                                                   (7U 
                                                                    == (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state)))) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_rready)))));
    vlSelf->NPC__DOT__xbar__DOT__uart_rready = ((~ (IData)(vlSelf->reset)) 
                                                & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_14)) 
                                                   & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3)
                                                       ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_rready)
                                                       : 
                                                      ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_11)) 
                                                       & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_rready)))));
    vlSelf->NPC__DOT__xbar__DOT__uart_bready = ((~ (IData)(vlSelf->reset)) 
                                                & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_14)) 
                                                   & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3)
                                                       ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_bready)
                                                       : 
                                                      ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_11)) 
                                                       & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_bready)))));
    vlSelf->NPC__DOT__xbar__DOT__sram_rready = ((~ (IData)(vlSelf->reset)) 
                                                & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9)) 
                                                   & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1)
                                                       ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_rready)
                                                       : 
                                                      ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_13)) 
                                                       & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_rready)))));
    vlSelf->NPC__DOT__xbar__DOT__sram_bready = ((~ (IData)(vlSelf->reset)) 
                                                & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9)) 
                                                   & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1)
                                                       ? (IData)(vlSelf->NPC__DOT__arb__DOT__io_mem_bready)
                                                       : 
                                                      ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_13)) 
                                                       & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_bready)))));
    vlSelf->NPC__DOT__xbar__DOT__arb_arready = ((IData)(vlSelf->reset) 
                                                | ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9) 
                                                   | ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_8)
                                                       ? (IData)(vlSelf->NPC__DOT___mem_arready)
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_7)
                                                        ? (IData)(vlSelf->NPC__DOT___uart_arready)
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_6)
                                                         ? (IData)(vlSelf->NPC__DOT___clint_arready)
                                                         : (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_arready))))));
    vlSelf->NPC__DOT__xbar__DOT__arb_awready = ((~ (IData)(vlSelf->reset)) 
                                                & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9) 
                                                   | ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_8)
                                                       ? (IData)(vlSelf->NPC__DOT___mem_awready)
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_7)
                                                        ? (IData)(vlSelf->NPC__DOT___uart_awready)
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_6)
                                                         ? (IData)(vlSelf->NPC__DOT___clint_awready)
                                                         : (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_awready))))));
    vlSelf->NPC__DOT__arb__DOT__mem_wvalid = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7)) 
                                                 & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_4)
                                                     ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid)
                                                     : 
                                                    ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_5)) 
                                                     & (IData)(vlSelf->NPC__DOT__arb__DOT__mem_wvalid)))));
    if (vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en) {
        vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT____Vlvbound_h767e957b__0 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
        if ((5U >= (IData)(vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process))) {
            __Vdlyvval__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 
                = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT____Vlvbound_h767e957b__0;
            __Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 = 1U;
            __Vdlyvdim0__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3 
                = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process;
        }
    }
    if (vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en) {
        vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT____Vlvbound_hc1e5bfb4__0 
            = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
        __Vdlyvval__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4 
            = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT____Vlvbound_hc1e5bfb4__0;
        __Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4 = 1U;
    }
    vlSelf->NPC__DOT__arb__DOT__mem_awvalid = ((~ (IData)(vlSelf->reset)) 
                                               & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7)) 
                                                  & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_4)
                                                      ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid)
                                                      : 
                                                     ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_5)) 
                                                      & (IData)(vlSelf->NPC__DOT__arb__DOT__mem_awvalid)))));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__arvalid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN)) 
                                         & ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_0)
                                             ? (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_1)
                                             : ((~ (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_3)) 
                                                & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__arvalid)))));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__rready = 
        ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN) 
                                           | (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_0))) 
                                       & ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_2) 
                                          | ((~ (IData)(
                                                        (3U 
                                                         == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state)))) 
                                             & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__rready)))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__rready = 
        ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_5)) 
                                       & ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_3)
                                           ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__isL)
                                           : ((~ (IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__n_state)))) 
                                              & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__rready)))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__bready = 
        ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_5)) 
                                       & ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_3)
                                           ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__isS)
                                           : ((~ (IData)(
                                                         (3U 
                                                          == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__n_state)))) 
                                              & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__bready)))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__awvalid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN)) 
                                         & ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0)
                                             ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_2)
                                             : ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_4)) 
                                                & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__awvalid)))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__wvalid = 
        ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN)) 
                                       & ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0)
                                           ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_2)
                                           : ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_4)) 
                                              & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__wvalid)))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__arvalid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN)) 
                                         & ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0)
                                             ? ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_1) 
                                                & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__isL))
                                             : ((~ (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_4)) 
                                                & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__arvalid)))));
    vlSelf->NPC__DOT__arb__DOT__dmem_rvalid = ((~ (IData)(vlSelf->reset)) 
                                               & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7)) 
                                                  & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6)
                                                      ? (IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid)
                                                      : (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_rvalid))));
    vlSelf->NPC__DOT__arb__DOT__dmem_wready = ((~ (IData)(vlSelf->reset)) 
                                               & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7) 
                                                  | ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6)
                                                      ? (IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_wready)
                                                      : (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_wready))));
    vlSelf->NPC__DOT__arb__DOT__dmem_awready = ((IData)(vlSelf->reset) 
                                                | ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7) 
                                                   | ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6)
                                                       ? (IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_awready)
                                                       : (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_awready))));
    vlSelf->NPC__DOT__arb__DOT__dmem_arready = ((IData)(vlSelf->reset) 
                                                | ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7) 
                                                   | ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6)
                                                       ? (IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_arready)
                                                       : (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_arready))));
    vlSelf->NPC__DOT__arb__DOT__mem_arvalid = ((~ (IData)(vlSelf->reset)) 
                                               & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN)) 
                                                  & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_0)
                                                      ? (IData)(vlSelf->NPC__DOT__core__DOT__io_imem_arvalid)
                                                      : 
                                                     ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_1)) 
                                                      & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_4)
                                                          ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid)
                                                          : 
                                                         ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_5)) 
                                                          & (IData)(vlSelf->NPC__DOT__arb__DOT__mem_arvalid)))))));
    vlSelf->NPC__DOT__arb__DOT__imem_arready = ((IData)(vlSelf->reset) 
                                                | ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN) 
                                                   | ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_2)
                                                       ? (IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_arready)
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6) 
                                                       | (IData)(vlSelf->NPC__DOT__arb__DOT__imem_arready)))));
    vlSelf->NPC__DOT__arb__DOT__imem_rvalid = ((~ (IData)(vlSelf->reset)) 
                                               & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN)) 
                                                  & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_2)
                                                      ? (IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid)
                                                      : 
                                                     ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6)) 
                                                      & (IData)(vlSelf->NPC__DOT__arb__DOT__imem_rvalid)))));
    vlSelf->NPC__DOT__arb__DOT__dmem_bvalid = ((~ (IData)(vlSelf->reset)) 
                                               & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7)) 
                                                  & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6)
                                                      ? (IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid)
                                                      : (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_bvalid))));
    vlSelf->NPC__DOT__xbar__DOT__arb_bvalid = ((~ (IData)(vlSelf->reset)) 
                                               & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9)) 
                                                  & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_8)
                                                      ? (IData)(vlSelf->NPC__DOT___mem_bvalid)
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_7)
                                                       ? (IData)(vlSelf->NPC__DOT___uart_bvalid)
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_6)
                                                        ? (IData)(vlSelf->NPC__DOT___clint_bvalid)
                                                        : (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_bvalid))))));
    vlSelf->NPC__DOT__xbar__DOT__arb_rvalid = ((~ (IData)(vlSelf->reset)) 
                                               & ((~ (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9)) 
                                                  & ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_8)
                                                      ? (IData)(vlSelf->NPC__DOT___mem_rvalid)
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_7)
                                                       ? (IData)(vlSelf->NPC__DOT___uart_rvalid)
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_6)
                                                        ? (IData)(vlSelf->NPC__DOT___clint_rvalid)
                                                        : (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_rvalid))))));
    vlSelf->NPC__DOT__arb__DOT__mem_bready = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7)) 
                                                 & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_4)
                                                     ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready)
                                                     : 
                                                    ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_5)) 
                                                     & (IData)(vlSelf->NPC__DOT__arb__DOT__mem_bready)))));
    vlSelf->NPC__DOT__arb__DOT__mem_rready = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN)) 
                                                 & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_0)
                                                     ? (IData)(vlSelf->NPC__DOT__core__DOT__io_imem_rready)
                                                     : 
                                                    ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_1)) 
                                                     & ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_4)
                                                         ? (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready)
                                                         : 
                                                        ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_5)) 
                                                         & (IData)(vlSelf->NPC__DOT__arb__DOT__mem_rready)))))));
    if (vlSelf->NPC__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en) {
        __Vdlyvval__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
        __Vdlyvset__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    }
    vlSelf->NPC__DOT__core__DOT__exu__DOT__c_state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__n_state));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__c_state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__n_state));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN)) 
                                         & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp_0)));
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__c_state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__lfsr = __Vdly__NPC__DOT__core__DOT__ifu__DOT__lfsr;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__delay = __Vdly__NPC__DOT__core__DOT__ifu__DOT__delay;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__lfsr = __Vdly__NPC__DOT__core__DOT__lsu__DOT__lfsr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__delay = __Vdly__NPC__DOT__core__DOT__lsu__DOT__delay;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[5U] = 0x16f6ea0U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[4U] = 0x79737978U;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[0U] = 0x1800U;
    if (__Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3) {
        vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[__Vdlyvdim0__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3] 
            = __Vdlyvval__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v3;
    }
    if (__Vdlyvset__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4) {
        vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory[2U] 
            = __Vdlyvval__NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory__v4;
    }
    if (__Vdlyvset__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0) {
        vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory[__Vdlyvdim0__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0] 
            = __Vdlyvval__NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory__v0;
    }
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_1 = 
        (0U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__delay));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_1 = 
        (0U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__delay));
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__exu__DOT__in_ready;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__out_valid;
    vlSelf->__VdfgTmp_h5d58cd1a__0 = ((IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__in_ready) 
                                      & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__out_valid));
    vlSelf->NPC__DOT__xbar__DOT__io_clint_arvalid = vlSelf->NPC__DOT__xbar__DOT__clint_arvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_arvalid = vlSelf->NPC__DOT__xbar__DOT__uart_arvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wvalid = vlSelf->NPC__DOT__xbar__DOT__clint_wvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awvalid = vlSelf->NPC__DOT__xbar__DOT__clint_awvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awvalid = vlSelf->NPC__DOT__xbar__DOT__uart_awvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wvalid = vlSelf->NPC__DOT__xbar__DOT__uart_wvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_arvalid = vlSelf->NPC__DOT__xbar__DOT__sram_arvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awvalid = vlSelf->NPC__DOT__xbar__DOT__sram_awvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wvalid = vlSelf->NPC__DOT__xbar__DOT__sram_wvalid;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__in_ready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wready = vlSelf->NPC__DOT__xbar__DOT__arb_wready;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__exu__DOT__out_valid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready;
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready;
    vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__wbu__DOT__out_valid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid;
    vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__wbu__DOT__in_ready;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_bready = vlSelf->NPC__DOT__xbar__DOT__clint_bready;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rready = vlSelf->NPC__DOT__xbar__DOT__clint_rready;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rready = vlSelf->NPC__DOT__xbar__DOT__uart_rready;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_bready = vlSelf->NPC__DOT__xbar__DOT__uart_bready;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rready = vlSelf->NPC__DOT__xbar__DOT__sram_rready;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_bready = vlSelf->NPC__DOT__xbar__DOT__sram_bready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_arready = vlSelf->NPC__DOT__xbar__DOT__arb_arready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awready = vlSelf->NPC__DOT__xbar__DOT__arb_awready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid = vlSelf->NPC__DOT__arb__DOT__mem_wvalid;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
        [1U];
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
        [2U];
    vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid = vlSelf->NPC__DOT__arb__DOT__mem_awvalid;
    vlSelf->NPC__DOT__xbar__DOT__w_req = ((IData)(vlSelf->NPC__DOT__arb__DOT__mem_awvalid) 
                                          & (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_awready));
    vlSelf->NPC__DOT__core__DOT__io_imem_arvalid = vlSelf->NPC__DOT__core__DOT__ifu__DOT__arvalid;
    vlSelf->NPC__DOT__core__DOT__io_imem_rready = vlSelf->NPC__DOT__core__DOT__ifu__DOT__rready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__rready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__bready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__awvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__wvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__arvalid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid = vlSelf->NPC__DOT__arb__DOT__dmem_rvalid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid = vlSelf->NPC__DOT__arb__DOT__mem_arvalid;
    vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid = vlSelf->NPC__DOT__arb__DOT__imem_rvalid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid = vlSelf->NPC__DOT__arb__DOT__dmem_bvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid = vlSelf->NPC__DOT__xbar__DOT__arb_bvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid = vlSelf->NPC__DOT__xbar__DOT__arb_rvalid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_bready = vlSelf->NPC__DOT__arb__DOT__mem_bready;
    vlSelf->NPC__DOT__xbar__DOT___clint_done1_T_1 = 
        ((IData)(vlSelf->NPC__DOT__arb__DOT__mem_bready) 
         & (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_bvalid));
    vlSelf->NPC__DOT__arb__DOT__io_mem_rready = vlSelf->NPC__DOT__arb__DOT__mem_rready;
    vlSelf->NPC__DOT__arb__DOT__imem_mem_done = ((IData)(vlSelf->NPC__DOT__arb__DOT__mem_rready) 
                                                 & (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_rvalid));
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp = vlSelf->NPC__DOT__xbar__DOT__arb_rresp;
    vlSelf->NPC__DOT__arb__DOT__io_imem_rresp = vlSelf->NPC__DOT__arb__DOT__imem_rresp;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wdata = vlSelf->NPC__DOT__xbar__DOT__clint_wdata;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awaddr = vlSelf->NPC__DOT__xbar__DOT__clint_awaddr;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr = vlSelf->NPC__DOT__xbar__DOT__clint_araddr;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr = vlSelf->NPC__DOT__xbar__DOT__sram_araddr;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awaddr = vlSelf->NPC__DOT__xbar__DOT__sram_awaddr;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wdata = vlSelf->NPC__DOT__xbar__DOT__sram_wdata;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wstrb = vlSelf->NPC__DOT__xbar__DOT__uart_wstrb;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awaddr = vlSelf->NPC__DOT__xbar__DOT__uart_awaddr;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_araddr = vlSelf->NPC__DOT__xbar__DOT__uart_araddr;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wdata = vlSelf->NPC__DOT__xbar__DOT__uart_wdata;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb = vlSelf->NPC__DOT__xbar__DOT__sram_wstrb;
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata = vlSelf->NPC__DOT__xbar__DOT__arb_rdata;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state 
        = (1U & ((IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__c_state)
                  ? (~ ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready) 
                        & (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__out_valid)))
                  : ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid) 
                     & (IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__in_ready))));
    vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb = vlSelf->NPC__DOT__arb__DOT__mem_wstrb;
    vlSelf->NPC__DOT__arb__DOT__io_mem_wdata = vlSelf->NPC__DOT__arb__DOT__mem_wdata;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__awaddr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__araddr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__wstrb;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata = vlSelf->NPC__DOT__arb__DOT__dmem_rdata;
    vlSelf->NPC__DOT__arb__DOT__io_mem_araddr = vlSelf->NPC__DOT__arb__DOT__mem_araddr;
    vlSelf->NPC__DOT__xbar__DOT__sr = (((vlSelf->NPC__DOT__arb__DOT__mem_araddr 
                                         >> 0x1fU) 
                                        & (0x88000000U 
                                           > vlSelf->NPC__DOT__arb__DOT__mem_araddr))
                                        ? 2U : ((0xa00003f8U 
                                                 == vlSelf->NPC__DOT__arb__DOT__mem_araddr)
                                                 ? 4U
                                                 : 
                                                (((0xa0000048U 
                                                   == vlSelf->NPC__DOT__arb__DOT__mem_araddr) 
                                                  | (0xa000004cU 
                                                     == vlSelf->NPC__DOT__arb__DOT__mem_araddr))
                                                  ? 6U
                                                  : 1U)));
    vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr = vlSelf->NPC__DOT__arb__DOT__mem_awaddr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__wdata;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext 
        = (((- (IData)((vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                                                         >> 7U)))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr 
        = (0x1fU & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                    >> 7U));
    vlSelf->NPC__DOT__arb__DOT__io_imem_rdata = vlSelf->NPC__DOT__arb__DOT__imem_rdata;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr 
        = (0x1fU & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                    >> 0xfU));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr 
        = (0x1fU & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                    >> 0x14U));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87 
        = (0x73U == vlSelf->NPC__DOT__arb__DOT__imem_rdata);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89 
        = (0x30200073U == vlSelf->NPC__DOT__arb__DOT__imem_rdata);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67 
        = (0x6fU == (0x7fU & vlSelf->NPC__DOT__arb__DOT__imem_rdata));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71 
        = (0x37U == (0x7fU & vlSelf->NPC__DOT__arb__DOT__imem_rdata));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73 
        = (0x17U == (0x7fU & vlSelf->NPC__DOT__arb__DOT__imem_rdata));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN = (
                                                   (0x380U 
                                                    & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                                                       >> 5U)) 
                                                   | (0x7fU 
                                                      & vlSelf->NPC__DOT__arb__DOT__imem_rdata));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT___exu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT___exu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__n_state 
        = (1U & ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__c_state)
                  ? (~ (IData)(vlSelf->__VdfgTmp_h5d58cd1a__0))
                  : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__in_ready) 
                     & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid))));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__n_state 
        = (1U & ((IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__c_state)
                  ? (~ ((IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT__out_valid) 
                        & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready)))
                  : (IData)(vlSelf->__VdfgTmp_h5d58cd1a__0)));
    vlSelf->NPC__DOT__clint__DOT__arvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_arvalid;
    vlSelf->NPC__DOT___xbar_io_clint_arvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_arvalid;
    vlSelf->NPC__DOT__uart__DOT__arvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_arvalid;
    vlSelf->NPC__DOT___xbar_io_uart_arvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_arvalid;
    vlSelf->NPC__DOT__clint__DOT__wvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_wvalid;
    vlSelf->NPC__DOT___xbar_io_clint_wvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_wvalid;
    vlSelf->NPC__DOT__clint__DOT__awvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_awvalid;
    vlSelf->NPC__DOT___xbar_io_clint_awvalid = vlSelf->NPC__DOT__xbar__DOT__io_clint_awvalid;
    vlSelf->NPC__DOT__uart__DOT__awvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_awvalid;
    vlSelf->NPC__DOT___xbar_io_uart_awvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_awvalid;
    vlSelf->NPC__DOT__uart__DOT__wvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_wvalid;
    vlSelf->NPC__DOT___xbar_io_uart_wvalid = vlSelf->NPC__DOT__xbar__DOT__io_uart_wvalid;
    vlSelf->NPC__DOT__mem__DOT__arvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_arvalid;
    vlSelf->NPC__DOT___xbar_io_sram_arvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_arvalid;
    vlSelf->NPC__DOT__mem__DOT__awvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_awvalid;
    vlSelf->NPC__DOT___xbar_io_sram_awvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_awvalid;
    vlSelf->NPC__DOT__mem__DOT__wvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_wvalid;
    vlSelf->NPC__DOT___xbar_io_sram_wvalid = vlSelf->NPC__DOT__xbar__DOT__io_sram_wvalid;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_wready = vlSelf->NPC__DOT__xbar__DOT__io_arb_wready;
    vlSelf->NPC__DOT___xbar_io_arb_wready = vlSelf->NPC__DOT__xbar__DOT__io_arb_wready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_ready 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_ready 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready;
    vlSelf->NPC__DOT__clint__DOT__bready = vlSelf->NPC__DOT__xbar__DOT__io_clint_bready;
    vlSelf->NPC__DOT___xbar_io_clint_bready = vlSelf->NPC__DOT__xbar__DOT__io_clint_bready;
    vlSelf->NPC__DOT__clint__DOT__rready = vlSelf->NPC__DOT__xbar__DOT__io_clint_rready;
    vlSelf->NPC__DOT___xbar_io_clint_rready = vlSelf->NPC__DOT__xbar__DOT__io_clint_rready;
    vlSelf->NPC__DOT__uart__DOT__rready = vlSelf->NPC__DOT__xbar__DOT__io_uart_rready;
    vlSelf->NPC__DOT___xbar_io_uart_rready = vlSelf->NPC__DOT__xbar__DOT__io_uart_rready;
    vlSelf->NPC__DOT__uart__DOT__bready = vlSelf->NPC__DOT__xbar__DOT__io_uart_bready;
    vlSelf->NPC__DOT___xbar_io_uart_bready = vlSelf->NPC__DOT__xbar__DOT__io_uart_bready;
    vlSelf->NPC__DOT__mem__DOT__rready = vlSelf->NPC__DOT__xbar__DOT__io_sram_rready;
    vlSelf->NPC__DOT___xbar_io_sram_rready = vlSelf->NPC__DOT__xbar__DOT__io_sram_rready;
    vlSelf->NPC__DOT__mem__DOT__bready = vlSelf->NPC__DOT__xbar__DOT__io_sram_bready;
    vlSelf->NPC__DOT___xbar_io_sram_bready = vlSelf->NPC__DOT__xbar__DOT__io_sram_bready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_arready = vlSelf->NPC__DOT__xbar__DOT__io_arb_arready;
    vlSelf->NPC__DOT___xbar_io_arb_arready = vlSelf->NPC__DOT__xbar__DOT__io_arb_arready;
    vlSelf->NPC__DOT__arb__DOT__io_mem_awready = vlSelf->NPC__DOT__xbar__DOT__io_arb_awready;
    vlSelf->NPC__DOT___xbar_io_arb_awready = vlSelf->NPC__DOT__xbar__DOT__io_arb_awready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid;
    vlSelf->NPC__DOT___arb_io_mem_wvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_wvalid;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_mtvec 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_mtvec 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R1_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_mepc 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_mepc = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R2_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid;
    vlSelf->NPC__DOT___arb_io_mem_awvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_awvalid;
    vlSelf->NPC__DOT__arb__DOT__io_imem_arvalid = vlSelf->NPC__DOT__core__DOT__io_imem_arvalid;
    vlSelf->NPC__DOT___core_io_imem_arvalid = vlSelf->NPC__DOT__core__DOT__io_imem_arvalid;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_arvalid 
        = vlSelf->NPC__DOT__core__DOT__io_imem_arvalid;
    vlSelf->NPC__DOT__arb__DOT__io_imem_rready = vlSelf->NPC__DOT__core__DOT__io_imem_rready;
    vlSelf->NPC__DOT___core_io_imem_rready = vlSelf->NPC__DOT__core__DOT__io_imem_rready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rready 
        = vlSelf->NPC__DOT__core__DOT__io_imem_rready;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_rready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_rready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->NPC__DOT___core_io_dmem_rready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_bready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_bready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->NPC__DOT___core_io_dmem_bready = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_awvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->NPC__DOT___core_io_dmem_awvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_wvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->NPC__DOT___core_io_dmem_wvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_arvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_arvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->NPC__DOT___core_io_dmem_arvalid = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid;
    vlSelf->NPC__DOT___arb_io_dmem_rvalid = vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_rvalid = vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_arvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid;
    vlSelf->NPC__DOT___arb_io_mem_arvalid = vlSelf->NPC__DOT__arb__DOT__io_mem_arvalid;
    vlSelf->NPC__DOT___arb_io_imem_rvalid = vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid;
    vlSelf->NPC__DOT__core__DOT__io_imem_rvalid = vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid;
    vlSelf->NPC__DOT___arb_io_dmem_bvalid = vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid;
    vlSelf->NPC__DOT__core__DOT__io_dmem_bvalid = vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_bvalid = vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid;
    vlSelf->NPC__DOT___xbar_io_arb_bvalid = vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_rvalid = vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid;
    vlSelf->NPC__DOT___xbar_io_arb_rvalid = vlSelf->NPC__DOT__xbar__DOT__io_arb_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_bready = vlSelf->NPC__DOT__arb__DOT__io_mem_bready;
    vlSelf->NPC__DOT___arb_io_mem_bready = vlSelf->NPC__DOT__arb__DOT__io_mem_bready;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_rready = vlSelf->NPC__DOT__arb__DOT__io_mem_rready;
    vlSelf->NPC__DOT___arb_io_mem_rready = vlSelf->NPC__DOT__arb__DOT__io_mem_rready;
    vlSelf->NPC__DOT__xbar__DOT___clint_done1_T = vlSelf->NPC__DOT__arb__DOT__imem_mem_done;
    vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0 
        = ((IData)(vlSelf->NPC__DOT__arb__DOT__imem_mem_done) 
           | (IData)(vlSelf->NPC__DOT__xbar__DOT___clint_done1_T_1));
    vlSelf->NPC__DOT__arb__DOT__casez_tmp = ((4U & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                              ? ((2U 
                                                  & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                   ? 0U
                                                   : 
                                                  (4U 
                                                   & ((~ 
                                                       (((IData)(vlSelf->NPC__DOT__arb__DOT__dmem_rvalid) 
                                                         & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rready)) 
                                                        | ((IData)(vlSelf->NPC__DOT__arb__DOT__dmem_bvalid) 
                                                           & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bready)))) 
                                                      << 2U))))
                                              : ((2U 
                                                  & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                   ? 
                                                  (((IData)(vlSelf->NPC__DOT__arb__DOT__imem_mem_done) 
                                                    | ((IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_bvalid) 
                                                       & (IData)(vlSelf->NPC__DOT__arb__DOT__mem_bready)))
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  (2U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->NPC__DOT__arb__DOT__imem_rvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__core__DOT__io_imem_rready))) 
                                                      << 1U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__c_state))
                                                   ? 
                                                  ((IData)(vlSelf->NPC__DOT__arb__DOT__imem_mem_done)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  (((IData)(vlSelf->NPC__DOT__core__DOT__io_imem_arvalid) 
                                                    & (IData)(vlSelf->NPC__DOT__arb__DOT__imem_arready))
                                                    ? 1U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arvalid) 
                                                      & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_arready)) 
                                                     | ((((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awvalid) 
                                                          & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_awready)) 
                                                         & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wvalid)) 
                                                        & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_wready)))
                                                     ? 3U
                                                     : 0U)))));
    vlSelf->NPC__DOT__arb__DOT__io_mem_rresp = vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp;
    vlSelf->NPC__DOT___xbar_io_arb_rresp = vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp;
    vlSelf->NPC__DOT___arb_io_imem_rresp = vlSelf->NPC__DOT__arb__DOT__io_imem_rresp;
    vlSelf->NPC__DOT__core__DOT__io_imem_rresp = vlSelf->NPC__DOT__arb__DOT__io_imem_rresp;
    vlSelf->NPC__DOT__clint__DOT__wdata = vlSelf->NPC__DOT__xbar__DOT__io_clint_wdata;
    vlSelf->NPC__DOT___xbar_io_clint_wdata = vlSelf->NPC__DOT__xbar__DOT__io_clint_wdata;
    vlSelf->NPC__DOT__clint__DOT__awaddr = vlSelf->NPC__DOT__xbar__DOT__io_clint_awaddr;
    vlSelf->NPC__DOT___xbar_io_clint_awaddr = vlSelf->NPC__DOT__xbar__DOT__io_clint_awaddr;
    vlSelf->NPC__DOT__clint__DOT__araddr = vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr;
    vlSelf->NPC__DOT___xbar_io_clint_araddr = vlSelf->NPC__DOT__xbar__DOT__io_clint_araddr;
    vlSelf->NPC__DOT__mem__DOT__araddr = vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr;
    vlSelf->NPC__DOT___xbar_io_sram_araddr = vlSelf->NPC__DOT__xbar__DOT__io_sram_araddr;
    vlSelf->NPC__DOT__mem__DOT__awaddr = vlSelf->NPC__DOT__xbar__DOT__io_sram_awaddr;
    vlSelf->NPC__DOT___xbar_io_sram_awaddr = vlSelf->NPC__DOT__xbar__DOT__io_sram_awaddr;
    vlSelf->NPC__DOT__mem__DOT__wdata = vlSelf->NPC__DOT__xbar__DOT__io_sram_wdata;
    vlSelf->NPC__DOT___xbar_io_sram_wdata = vlSelf->NPC__DOT__xbar__DOT__io_sram_wdata;
    vlSelf->NPC__DOT__uart__DOT__wstrb = vlSelf->NPC__DOT__xbar__DOT__io_uart_wstrb;
    vlSelf->NPC__DOT___xbar_io_uart_wstrb = vlSelf->NPC__DOT__xbar__DOT__io_uart_wstrb;
    vlSelf->NPC__DOT__uart__DOT__awaddr = vlSelf->NPC__DOT__xbar__DOT__io_uart_awaddr;
    vlSelf->NPC__DOT___xbar_io_uart_awaddr = vlSelf->NPC__DOT__xbar__DOT__io_uart_awaddr;
    vlSelf->NPC__DOT__uart__DOT__araddr = vlSelf->NPC__DOT__xbar__DOT__io_uart_araddr;
    vlSelf->NPC__DOT___xbar_io_uart_araddr = vlSelf->NPC__DOT__xbar__DOT__io_uart_araddr;
    vlSelf->NPC__DOT__uart__DOT__wdata = vlSelf->NPC__DOT__xbar__DOT__io_uart_wdata;
    vlSelf->NPC__DOT___xbar_io_uart_wdata = vlSelf->NPC__DOT__xbar__DOT__io_uart_wdata;
    vlSelf->NPC__DOT__mem__DOT__wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT__clint__DOT__wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT___xbar_io_sram_wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT___xbar_io_clint_wstrb = vlSelf->NPC__DOT__xbar__DOT__io_sram_wstrb;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_valid 
        = vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_valid;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_valid 
        = vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_valid;
    vlSelf->NPC__DOT__arb__DOT__io_mem_rdata = vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata;
    vlSelf->NPC__DOT___xbar_io_arb_rdata = vlSelf->NPC__DOT__xbar__DOT__io_arb_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wstrb = vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb;
    vlSelf->NPC__DOT___arb_io_mem_wstrb = vlSelf->NPC__DOT__arb__DOT__io_mem_wstrb;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_wdata = vlSelf->NPC__DOT__arb__DOT__io_mem_wdata;
    vlSelf->NPC__DOT___arb_io_mem_wdata = vlSelf->NPC__DOT__arb__DOT__io_mem_wdata;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awaddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->NPC__DOT__core__DOT__io_dmem_awaddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->NPC__DOT___core_io_dmem_awaddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awaddr;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_araddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->NPC__DOT__core__DOT__io_dmem_araddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->NPC__DOT___core_io_dmem_araddr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wstrb = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->NPC__DOT__core__DOT__io_dmem_wstrb = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->NPC__DOT___core_io_dmem_wstrb = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wstrb;
    vlSelf->NPC__DOT___arb_io_dmem_rdata = vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata;
    vlSelf->NPC__DOT__core__DOT__io_dmem_rdata = vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_arb_araddr = vlSelf->NPC__DOT__arb__DOT__io_mem_araddr;
    vlSelf->NPC__DOT___arb_io_mem_araddr = vlSelf->NPC__DOT__arb__DOT__io_mem_araddr;
    vlSelf->NPC__DOT__xbar__DOT___n_state_T_9 = (((0U 
                                                   == (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state)) 
                                                  & ((IData)(vlSelf->NPC__DOT__xbar__DOT__w_req) 
                                                     | ((IData)(vlSelf->NPC__DOT__arb__DOT__mem_arvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__arb_arready))))
                                                  ? 
                                                 ((IData)(vlSelf->NPC__DOT__xbar__DOT__w_req)
                                                   ? 
                                                  (((vlSelf->NPC__DOT__arb__DOT__mem_awaddr 
                                                     >> 0x1fU) 
                                                    & (0x88000000U 
                                                       > vlSelf->NPC__DOT__arb__DOT__mem_awaddr))
                                                    ? 2U
                                                    : 
                                                   ((0xa00003f8U 
                                                     == vlSelf->NPC__DOT__arb__DOT__mem_awaddr)
                                                     ? 4U
                                                     : 
                                                    (((0xa0000048U 
                                                       == vlSelf->NPC__DOT__arb__DOT__mem_awaddr) 
                                                      | (0xa000004cU 
                                                         == vlSelf->NPC__DOT__arb__DOT__mem_awaddr))
                                                      ? 6U
                                                      : 1U)))
                                                   : (IData)(vlSelf->NPC__DOT__xbar__DOT__sr))
                                                  : 0U);
    vlSelf->NPC__DOT__xbar__DOT__io_arb_awaddr = vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr;
    vlSelf->NPC__DOT___arb_io_mem_awaddr = vlSelf->NPC__DOT__arb__DOT__io_mem_awaddr;
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wdata = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    vlSelf->NPC__DOT__core__DOT__io_dmem_wdata = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    vlSelf->NPC__DOT___core_io_dmem_wdata = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wdata;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_imm_b_sext 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_imm_b_sext 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_addr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_wb_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr;
    if ((0x100073U == vlSelf->NPC__DOT__arb__DOT__io_imem_rdata)) {
        VNPC___024root____Vdpiimwrap_NPC__DOT__core__DOT__idu__DOT__ebreak__DOT__npc_trap_TOP();
    }
    vlSelf->NPC__DOT___arb_io_imem_rdata = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_inst 
        = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_inst 
        = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT__io_imem_rdata = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_inst 
        = vlSelf->NPC__DOT__arb__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT___idu_io_gpr_rs1_addr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_addr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory
        [vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr];
    vlSelf->NPC__DOT__core__DOT___idu_io_gpr_rs2_addr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_addr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__Memory
        [vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr];
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89) 
            | (0x100073U == vlSelf->NPC__DOT__arb__DOT__imem_rdata)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75 
        = (0xf3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77 
        = (0x2f3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79 
        = (0x173U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81 
        = (0x373U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83 
        = (0x1f3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85 
        = (0x3f3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69 
        = (0x67U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29 
        = (0x393U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31 
        = (0x313U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33 
        = (0x213U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51 
        = (0x113U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53 
        = (0x193U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55 
        = (0x63U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57 
        = (0xe3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59 
        = (0x2e3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61 
        = (0x3e3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63 
        = (0x263U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65 
        = (0x363U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19 
        = (0x13U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1 
        = (0x103U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3 
        = (0x123U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5 
        = (3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7 
        = (0x83U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9 
        = (0x203U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11 
        = (0x283U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13 
        = (0x23U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15 
        = (0xa3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0 = 
        ((0x1fc00U & (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                      >> 0xfU)) | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rvalid 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_rvalid;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rvalid 
        = vlSelf->NPC__DOT__core__DOT__io_imem_rvalid;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_bvalid 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_bvalid;
    vlSelf->NPC__DOT__arb__DOT__n_state = vlSelf->NPC__DOT__arb__DOT__casez_tmp;
    vlSelf->NPC__DOT__arb__DOT___GEN_4 = (3U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT___GEN_5 = (4U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT___GEN = (0U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT___GEN_0 = (1U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__arb__DOT___GEN_1 = (2U == (IData)(vlSelf->NPC__DOT__arb__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rresp 
        = vlSelf->NPC__DOT__core__DOT__io_imem_rresp;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_rdata 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_rdata;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_addr 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_addr;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_rdata 
        = vlSelf->NPC__DOT__core__DOT__io_imem_rdata;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__ebreak__DOT__inst 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_inst;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_addr 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R1_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data 
        = ((0U != (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_addr))
            ? vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R1_data
            : 0U);
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_addr 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_addr;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__R0_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data 
        = ((0U != (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_addr))
            ? vlSelf->NPC__DOT__core__DOT__gpr__DOT___gpr_ext_R0_data
            : 0U);
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77));
    vlSelf->__VdfgTmp_h0fdfba83__0 = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79) 
                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85));
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67) 
           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57) 
            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59) 
               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61) 
                  | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63) 
                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65))))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) 
           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7) 
            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9) 
               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21 
        = (0x8033U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23 
        = (0x3b3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25 
        = (0x333U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27 
        = (0x233U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35 
        = (0xb3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37 
        = (0x2b3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39 
        = (0x82b3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41 
        = (0x93U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43 
        = (0x293U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45 
        = (0x8293U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47 
        = (0x133U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49 
        = (0x1b3U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17 
        = (0x33U == vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_0);
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->NPC__DOT__xbar__DOT__io_arb_rresp) 
                             << 5U) | (((IData)(vlSelf->NPC__DOT__arb__DOT__imem_rresp) 
                                        << 3U) | (IData)(vlSelf->NPC__DOT__arb__DOT__n_state)));
    vlSelf->NPC__DOT__arb__DOT__casez_tmp_1 = VNPC__ConstPool__TABLE_h423534d4_0
        [vlSelf->__Vtableidx1];
    vlSelf->NPC__DOT__arb__DOT___GEN_6 = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_4) 
                                          | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_5));
    vlSelf->NPC__DOT__arb__DOT___GEN_2 = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_0) 
                                          | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_1));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs1_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data;
    vlSelf->NPC__DOT__core__DOT___gpr_io_gpr_rs1_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_gpr_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT___gpr_io_gpr_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_rs2_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data;
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79) 
            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81) 
               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0)
            ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5)
                     ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7)
                              ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9)
                                       ? 4U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11)
                                                ? 5U
                                                : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15)
                                                     ? 1U
                                                     : 7U)))))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0) 
           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5) 
              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7) 
                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9) 
                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11) 
                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8))))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hcb32bbc0__0) 
           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5) 
              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7) 
                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9) 
                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11) 
                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_13) 
                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_15) 
                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17) 
                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)))))))));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0 
        = (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
             ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                      ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                               ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                        ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                  ? 0U
                                                  : 
                                                 (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                          ? 4U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                            ? 4U
                                                            : 
                                                           (0U 
                                                            & (~ 
                                                               (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
            ? (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                 ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                          ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                   ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                            ? 2U : 
                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                             ? 0U : 
                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                              ? 2U : 
                                             (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                           ? 0U
                                                           : 
                                                          (0U 
                                                           & (~ 
                                                              (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                ? 0U : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                          ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                                   ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                            ? 0U : 
                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                             ? 1U : 
                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                              ? 1U : 
                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                               ? 0U
                                               : ((
                                                   (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                   ? 1U
                                                   : 
                                                  ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                     ? 1U
                                                     : 
                                                    ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                         ? 1U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                            ? 1U
                                                            : 
                                                           (1U 
                                                            & (~ 
                                                               (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                         ? (0xfffff000U & vlSelf->NPC__DOT__arb__DOT__io_imem_rdata)
                         : (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                         >> 0x1fU))) 
                             << 0x14U) | ((0xff000U 
                                           & vlSelf->NPC__DOT__arb__DOT__io_imem_rdata) 
                                          | ((0x800U 
                                              & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                                   >> 0x14U)))))))
            : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                 ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                          ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                   ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                            ? 2U : 
                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                             ? 0U : 
                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                              ? 2U : 
                                             (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                   ? 2U
                                                   : 
                                                  ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                     ? 2U
                                                     : 
                                                    (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                       ? 2U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                           ? 0U
                                                           : 
                                                          (0U 
                                                           & (~ 
                                                              (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                ? (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                     ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                              ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                       ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                                ? 1U
                                                : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                     ? 0U
                                                     : 
                                                    (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                      ? 1U
                                                      : 
                                                     ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                       ? 0U
                                                       : 
                                                      ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                        ? 1U
                                                        : 
                                                       ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                            ? 1U
                                                            : 
                                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                               ? 1U
                                                               : 
                                                              (1U 
                                                               & (~ 
                                                                  (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                   | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                    ? (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                          >> 0x14U))) : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1)
                                           ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19)
                                                        ? 0U
                                                        : 
                                                       (((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)) 
                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)) 
                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27))
                                                         ? 1U
                                                         : 
                                                        ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)) 
                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33))
                                                          ? 0U
                                                          : 
                                                         ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)) 
                                                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39))
                                                           ? 1U
                                                           : 
                                                          ((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                             | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)) 
                                                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45))
                                                            ? 0U
                                                            : 
                                                           (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                             | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49))
                                                             ? 1U
                                                             : 
                                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                                               ? 1U
                                                               : 
                                                              ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                                 ? 0U
                                                                 : 
                                                                ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                                  ? 1U
                                                                  : 
                                                                 (1U 
                                                                  & (~ 
                                                                     (((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75) 
                                                                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)) 
                                                                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)) 
                                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)) 
                                                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)) 
                                                                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)) 
                                                                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4))))))))))))))))))))
                                          ? vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs2_data
                                          : 0U)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8) 
         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17) 
            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19) 
               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                  | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23) 
                     | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25) 
                        | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27) 
                           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                   | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                      | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51) 
                                                               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53) 
                                                                  | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)))))))))))))))))))));
    if (vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) {
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 1U;
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 1U;
    } else if (vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3) {
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 1U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 0U;
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 0U;
    } else if (vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_9) {
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen = 0U;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen = 1U;
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel = 1U;
    } else {
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen 
            = vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen 
            = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_8)
                ? 0U : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_17) 
                         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_19) 
                            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23) 
                                  | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25) 
                                     | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27) 
                                        | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                                   | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                                      | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_7))))))))))))))))))
                         ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_5)
                                  ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0) 
                                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71) 
                                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73) 
                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2)))))));
        vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel 
            = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6)
                ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_hd611f556__0)
                         ? 2U : ((1U & ((~ (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2)) 
                                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)))
                                  ? 0U : 3U)));
    }
    vlSelf->NPC__DOT__arb__DOT___GEN_7 = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN) 
                                          | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_2));
    vlSelf->NPC__DOT__arb__DOT___GEN_3 = (1U & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_2)) 
                                                | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN)));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_op 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_mem_wen 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__isL = ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0) 
                                                  & (0U 
                                                     == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen)));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__isS = ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT____VdfgTmp_h310fdd7c__0) 
                                                  & (1U 
                                                     == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_wen)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0)
            ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21)
                     ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23)
                              ? 3U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25)
                                       ? 4U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27)
                                                ? 5U
                                                : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31)
                                                     ? 4U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37)
                                                        ? 7U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39)
                                                         ? 8U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41)
                                                          ? 6U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43)
                                                           ? 7U
                                                           : 
                                                          ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45)
                                                            ? 8U
                                                            : 
                                                           ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47)
                                                             ? 9U
                                                             : 
                                                            ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49)
                                                              ? 0xaU
                                                              : 
                                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51)
                                                               ? 9U
                                                               : 
                                                              ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53)
                                                                ? 0xaU
                                                                : 
                                                               ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55)
                                                                 ? 0xbU
                                                                 : 
                                                                ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57)
                                                                  ? 0xcU
                                                                  : 
                                                                 ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59)
                                                                   ? 0xeU
                                                                   : 
                                                                  ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61)
                                                                    ? 0x10U
                                                                    : 
                                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63)
                                                                     ? 0xdU
                                                                     : 
                                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65)
                                                                      ? 0xfU
                                                                      : 
                                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                                                       ? 1U
                                                                       : 
                                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                                                        ? 0x11U
                                                                        : 
                                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)
                                                                         ? 1U
                                                                         : 
                                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_2)
                                                                          ? 0x12U
                                                                          : 0U))))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h9e652396__0 = ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h336b3a0a__0) 
                                      | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_21) 
                                         | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_23) 
                                            | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_25) 
                                               | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_27) 
                                                  | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_29) 
                                                     | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_31) 
                                                        | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_33) 
                                                           | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_35) 
                                                              | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_37) 
                                                                 | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_39) 
                                                                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_41) 
                                                                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_43) 
                                                                          | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_45) 
                                                                             | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_47) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_49) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_51) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_53) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_55) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_57) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_59) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_61) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_63) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_65) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67) 
                                                                                | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69) 
                                                                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_3)))))))))))))))))))))))))));
    vlSelf->NPC__DOT__core__DOT__exu__DOT___GEN = (0x1fU 
                                                   & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0;
    vlSelf->NPC__DOT__arb__DOT___GEN_8 = (1U & ((~ (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_6)) 
                                                | (IData)(vlSelf->NPC__DOT__arb__DOT___GEN_7)));
    vlSelf->NPC__DOT__arb__DOT__io_dmem_arready = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_3) 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_arready));
    vlSelf->NPC__DOT__arb__DOT__io_dmem_awready = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_3) 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_awready));
    vlSelf->NPC__DOT__arb__DOT__io_dmem_wready = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_3) 
                                                  & (IData)(vlSelf->NPC__DOT__arb__DOT__dmem_wready));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_rf_wen 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_2 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_1) 
         & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__isS));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_exe_fun 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_exe_fun 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun;
    vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state) 
           & ((~ (IData)(vlSelf->__VdfgTmp_h9e652396__0)) 
              & ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0) 
                 | ((IData)(vlSelf->__VdfgTmp_h0fdfba83__0) 
                    | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1) 
                       | ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87) 
                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89)))))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd 
        = ((IData)(vlSelf->__VdfgTmp_h9e652396__0) ? 0U
            : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT____VdfgTmp_h2da9d508__0)
                ? 1U : ((IData)(vlSelf->__VdfgTmp_h0fdfba83__0)
                         ? 2U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_1)
                                  ? 3U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87)
                                           ? 4U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89)
                                                    ? 6U
                                                    : 0U))))));
    if (vlSelf->NPC__DOT__core__DOT__wbu__DOT__n_state) {
        vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_rf_wen;
        vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd 
            = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    } else {
        vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen = 0U;
        vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd = 0U;
    }
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_op2_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_op2_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op2_data;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_wb_sel 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel;
    vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg = 
        (2U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel));
    vlSelf->NPC__DOT__arb__DOT__io_imem_arready = ((IData)(vlSelf->NPC__DOT__arb__DOT___GEN_8) 
                                                   & (IData)(vlSelf->NPC__DOT__arb__DOT__imem_arready));
    vlSelf->NPC__DOT___arb_io_dmem_arready = vlSelf->NPC__DOT__arb__DOT__io_dmem_arready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_arready = vlSelf->NPC__DOT__arb__DOT__io_dmem_arready;
    vlSelf->NPC__DOT___arb_io_dmem_awready = vlSelf->NPC__DOT__arb__DOT__io_dmem_awready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_awready = vlSelf->NPC__DOT__arb__DOT__io_dmem_awready;
    vlSelf->NPC__DOT___arb_io_dmem_wready = vlSelf->NPC__DOT__arb__DOT__io_dmem_wready;
    vlSelf->NPC__DOT__core__DOT__io_dmem_wready = vlSelf->NPC__DOT__arb__DOT__io_dmem_wready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0 
        = ((0U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state))
            ? (((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__in_ready) 
                & (IData)(vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_valid))
                ? (1U | ((IData)((7U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))) 
                         << 1U)) : 0U) : ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state))
                                           ? ((((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__arvalid) 
                                                & (IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_arready)) 
                                               | ((((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__awvalid) 
                                                    & (IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_awready)) 
                                                   & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__wvalid)) 
                                                  & (IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_wready)))
                                               ? 2U
                                               : 1U)
                                           : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__c_state))
                                               ? (2U 
                                                  | (((IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_rvalid) 
                                                      & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__rready)) 
                                                     | ((IData)(vlSelf->NPC__DOT__arb__DOT__io_dmem_bvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__bready))))
                                               : (((IData)(vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_in_ready) 
                                                   & (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__out_valid))
                                                   ? 0U
                                                   : 3U))));
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_wen 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_wen 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en 
        = ((1U == (IData)(vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wen)) 
           & (0U != (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_addr)));
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_en 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__csignals_6 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr 
        = ((4U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
            ? 0x342U : (vlSelf->NPC__DOT__arb__DOT__imem_rdata 
                        >> 0x14U));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_jmp_flg 
        = vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_jmp_flg 
        = vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg;
    vlSelf->NPC__DOT___arb_io_imem_arready = vlSelf->NPC__DOT__arb__DOT__io_imem_arready;
    vlSelf->NPC__DOT__core__DOT__io_imem_arready = vlSelf->NPC__DOT__arb__DOT__io_imem_arready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp 
        = ((0U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state))
            ? ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__in_ready) 
               & (IData)(vlSelf->NPC__DOT__core__DOT___wbu_io_pipe_out_valid))
            : ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state))
                ? (((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__arvalid) 
                    & (IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_arready))
                    ? 2U : 1U) : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__c_state))
                                   ? (2U | ((IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid) 
                                            & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__rready)))
                                   : (((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_ready) 
                                       & (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid))
                                       ? 0U : 3U))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_arready 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_arready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_awready 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_awready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_wready 
        = vlSelf->NPC__DOT__core__DOT__io_dmem_wready;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__n_state 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN = (0U 
                                                   == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0 = 
        (1U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_3 = 
        (2U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0));
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_en 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT____Vcellinp__gpr_ext__W0_en;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_cmd 
        = vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd;
    vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en 
        = ((IData)(vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W3_en) 
           & (4U == (IData)(vlSelf->NPC__DOT__core__DOT___wbu_io_csr_cmd)));
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT___wbu_io_csr_addr = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_addr 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process 
        = ((0xf12U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
            ? 5U : ((0xf11U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                     ? 4U : ((0x342U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                              ? 3U : ((0x341U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))
                                       ? 2U : (0x305U 
                                               == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_addr))))));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_arready 
        = vlSelf->NPC__DOT__core__DOT__io_imem_arready;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN = (0U 
                                                   == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_0 = 
        (1U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_2 = 
        (2U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state 
        = vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_5 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN) 
         | (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_0));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_4 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT___GEN_3) 
         | (3U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_0)));
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_en 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT____Vcellinp__csr_ext__W4_en;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_addr 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_addr 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata 
        = ((5U >= (IData)(vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process))
            ? vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__Memory
           [vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_addr_process]
            : 0U);
    vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_3 = 
        ((IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT___GEN_2) 
         | (3U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp)));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__casez_tmp_0 
        = ((0U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state))
            ? (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__out_valid)
            : ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state))
                ? ((IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid) 
                   & (~ (IData)((0U != (IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rresp)))))
                : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__ifu__DOT__n_state))
                    ? ((IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid) 
                       & (~ (IData)((0U != (IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rresp)))))
                    : ((IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rvalid) 
                       & (~ (IData)((0U != (IData)(vlSelf->NPC__DOT__arb__DOT__io_imem_rresp))))))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_csr_rdata 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->NPC__DOT__core__DOT___csr_io_csr_rdata 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__R0_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata;
}

VL_INLINE_OPT void VNPC___024root___nba_sequent__TOP__2(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->NPC__DOT___mem_wready = vlSelf->NPC__DOT__mem__DOT__wready;
    vlSelf->NPC__DOT___uart_wready = vlSelf->NPC__DOT__uart__DOT__wready;
    vlSelf->NPC__DOT___clint_wready = vlSelf->NPC__DOT__clint__DOT__wready;
    vlSelf->NPC__DOT___mem_arready = vlSelf->NPC__DOT__mem__DOT__arready;
    vlSelf->NPC__DOT___uart_arready = vlSelf->NPC__DOT__uart__DOT__arready;
    vlSelf->NPC__DOT___clint_arready = vlSelf->NPC__DOT__clint__DOT__arready;
    vlSelf->NPC__DOT___mem_awready = vlSelf->NPC__DOT__mem__DOT__awready;
    vlSelf->NPC__DOT___uart_awready = vlSelf->NPC__DOT__uart__DOT__awready;
    vlSelf->NPC__DOT___clint_awready = vlSelf->NPC__DOT__clint__DOT__awready;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc;
    vlSelf->NPC__DOT___mem_bvalid = vlSelf->NPC__DOT__mem__DOT__bvalid;
    vlSelf->NPC__DOT___uart_bvalid = vlSelf->NPC__DOT__uart__DOT__bvalid;
    vlSelf->NPC__DOT___clint_bvalid = vlSelf->NPC__DOT__clint__DOT__bvalid;
    vlSelf->NPC__DOT___mem_rvalid = vlSelf->NPC__DOT__mem__DOT__rvalid;
    vlSelf->NPC__DOT___uart_rvalid = vlSelf->NPC__DOT__uart__DOT__rvalid;
    vlSelf->NPC__DOT___clint_rvalid = vlSelf->NPC__DOT__clint__DOT__rvalid;
    vlSelf->NPC__DOT___mem_rdata = vlSelf->NPC__DOT__mem__DOT__rdata;
    vlSelf->NPC__DOT___uart_rdata = vlSelf->NPC__DOT__uart__DOT__rdata;
    vlSelf->NPC__DOT___clint_rdata = vlSelf->NPC__DOT__clint__DOT__rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_wready = vlSelf->NPC__DOT___mem_wready;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_wready = vlSelf->NPC__DOT___uart_wready;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_wready = vlSelf->NPC__DOT___clint_wready;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_arready = vlSelf->NPC__DOT___mem_arready;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_arready = vlSelf->NPC__DOT___uart_arready;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_arready = vlSelf->NPC__DOT___clint_arready;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_awready = vlSelf->NPC__DOT___mem_awready;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_awready = vlSelf->NPC__DOT___uart_awready;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_awready = vlSelf->NPC__DOT___clint_awready;
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_in_bits_if2id_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__arb__DOT__io_imem_araddr = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__io_imem_araddr = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT___core_io_imem_araddr = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT___ifu_io_csr_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_imem_araddr 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_csr_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_reg_pc 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_bvalid = vlSelf->NPC__DOT___mem_bvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_bvalid = vlSelf->NPC__DOT___uart_bvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_bvalid = vlSelf->NPC__DOT___clint_bvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rvalid = vlSelf->NPC__DOT___mem_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rvalid = vlSelf->NPC__DOT___uart_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rvalid = vlSelf->NPC__DOT___clint_rvalid;
    vlSelf->NPC__DOT__xbar__DOT__io_sram_rdata = vlSelf->NPC__DOT___mem_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_uart_rdata = vlSelf->NPC__DOT___uart_rdata;
    vlSelf->NPC__DOT__xbar__DOT__io_clint_rdata = vlSelf->NPC__DOT___clint_rdata;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W4_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_reg_pc;
}

VL_INLINE_OPT void VNPC___024root___nba_comb__TOP__0(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->NPC__DOT__clint__DOT__AXI_AR_fire = ((IData)(vlSelf->NPC__DOT__clint__DOT__arready) 
                                                 & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_arvalid));
    vlSelf->NPC__DOT__uart__DOT__AXI_AR_fire = ((IData)(vlSelf->NPC__DOT__uart__DOT__arready) 
                                                & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_arvalid));
    vlSelf->NPC__DOT__clint__DOT__AXI_AWW_fire = ((IData)(vlSelf->NPC__DOT__xbar__DOT__clint_awvalid) 
                                                  & ((IData)(vlSelf->NPC__DOT__clint__DOT__awready) 
                                                     & ((IData)(vlSelf->NPC__DOT__clint__DOT__wready) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_wvalid))));
    vlSelf->NPC__DOT__uart__DOT__AXI_AWW_fire = ((IData)(vlSelf->NPC__DOT__xbar__DOT__uart_awvalid) 
                                                 & ((IData)(vlSelf->NPC__DOT__uart__DOT__awready) 
                                                    & ((IData)(vlSelf->NPC__DOT__uart__DOT__wready) 
                                                       & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_wvalid))));
    vlSelf->NPC__DOT__mem__DOT__AXI_AR_fire = ((IData)(vlSelf->NPC__DOT__mem__DOT__arready) 
                                               & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_arvalid));
    vlSelf->NPC__DOT__mem__DOT__AXI_AWW_fire = ((IData)(vlSelf->NPC__DOT__xbar__DOT__sram_awvalid) 
                                                & ((IData)(vlSelf->NPC__DOT__mem__DOT__awready) 
                                                   & ((IData)(vlSelf->NPC__DOT__mem__DOT__wready) 
                                                      & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_wvalid))));
    vlSelf->NPC__DOT__clint__DOT__AXI_B_fire = ((IData)(vlSelf->NPC__DOT__clint__DOT__bvalid) 
                                                & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_bready));
    vlSelf->NPC__DOT__clint__DOT__AXI_R_fire = ((IData)(vlSelf->NPC__DOT__clint__DOT__rvalid) 
                                                & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_rready));
    vlSelf->NPC__DOT__uart__DOT__AXI_R_fire = ((IData)(vlSelf->NPC__DOT__uart__DOT__rvalid) 
                                               & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_rready));
    vlSelf->NPC__DOT__uart__DOT__AXI_B_fire = ((IData)(vlSelf->NPC__DOT__uart__DOT__bvalid) 
                                               & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_bready));
    vlSelf->NPC__DOT__mem__DOT__AXI_R_fire = ((IData)(vlSelf->NPC__DOT__mem__DOT__rvalid) 
                                              & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_rready));
    vlSelf->NPC__DOT__mem__DOT__AXI_B_fire = ((IData)(vlSelf->NPC__DOT__mem__DOT__bvalid) 
                                              & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_bready));
    vlSelf->NPC__DOT__core__DOT___exu_io_br_target 
        = (vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_imm_b_sext 
           + vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc);
    vlSelf->NPC__DOT__arb__DOT__casez_tmp_0 = ((4U 
                                                & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                    ? vlSelf->NPC__DOT__arb__DOT__mem_araddr
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                     ? vlSelf->NPC__DOT__arb__DOT__mem_araddr
                                                     : vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                     ? vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_dmem_araddr
                                                     : vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->NPC__DOT__arb__DOT__n_state))
                                                     ? vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc
                                                     : 0U)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
        = ((0U == ((((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) 
                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                       | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                      | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                     | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                    | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6))
                    ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                             ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                      ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71)
                                               ? 2U
                                               : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4) 
                                                         << 1U)))))))))))))
            ? vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_rs1_data
            : ((1U == ((((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) 
                             | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                           | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                          | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                         | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                        | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6))
                        ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                 ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                          ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                      ? 3U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                          ? 3U
                                                          : 
                                                         ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4) 
                                                          << 1U)))))))))))))
                ? vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_reg_pc
                : ((2U == ((((((((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_1) 
                                 | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_3)) 
                                | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_5)) 
                               | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_7)) 
                              | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_9)) 
                             | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_11)) 
                            | (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_6))
                            ? 0U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_67)
                                     ? 1U : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_69)
                                              ? 0U : 
                                             ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_71)
                                               ? 2U
                                               : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_73)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_75)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_77)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_79)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_81)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_83)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_85)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___GEN_4) 
                                                         << 1U)))))))))))))
                    ? 0U : (0x1fU & (vlSelf->NPC__DOT__arb__DOT__io_imem_rdata 
                                     >> 0xfU)))));
    vlSelf->NPC__DOT__xbar__DOT__casez_tmp = ((4U & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                               ? ((2U 
                                                   & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                    ? 
                                                   ((IData)(vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0)
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   (6U 
                                                    | (((IData)(vlSelf->NPC__DOT___clint_rvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_rready)) 
                                                       | ((IData)(vlSelf->NPC__DOT___clint_bvalid) 
                                                          & (IData)(vlSelf->NPC__DOT__xbar__DOT__clint_bready)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                    ? 
                                                   ((IData)(vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0)
                                                     ? 0U
                                                     : 5U)
                                                    : 
                                                   (4U 
                                                    | (((IData)(vlSelf->NPC__DOT___uart_rvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_rready)) 
                                                       | ((IData)(vlSelf->NPC__DOT___uart_bvalid) 
                                                          & (IData)(vlSelf->NPC__DOT__xbar__DOT__uart_bready))))))
                                               : ((2U 
                                                   & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->NPC__DOT__xbar__DOT__c_state))
                                                    ? 
                                                   ((IData)(vlSelf->NPC__DOT__xbar__DOT____VdfgTmp_hbde7f97a__0)
                                                     ? 0U
                                                     : 3U)
                                                    : 
                                                   (2U 
                                                    | (((IData)(vlSelf->NPC__DOT___mem_rvalid) 
                                                        & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_rready)) 
                                                       | ((IData)(vlSelf->NPC__DOT___mem_bvalid) 
                                                          & (IData)(vlSelf->NPC__DOT__xbar__DOT__sram_bready)))))
                                                   : (IData)(vlSelf->NPC__DOT__xbar__DOT___n_state_T_9)));
    vlSelf->NPC__DOT__clint__DOT__nw_state = ((IData)(vlSelf->NPC__DOT__clint__DOT__cw_state)
                                               ? ((IData)(vlSelf->NPC__DOT__clint__DOT__cw_state) 
                                                  & (~ (IData)(vlSelf->NPC__DOT__clint__DOT__AXI_B_fire)))
                                               : (IData)(vlSelf->NPC__DOT__clint__DOT__AXI_AWW_fire));
    vlSelf->NPC__DOT__clint__DOT__nr_state = ((IData)(vlSelf->NPC__DOT__clint__DOT__cr_state)
                                               ? ((IData)(vlSelf->NPC__DOT__clint__DOT__cr_state) 
                                                  & (~ (IData)(vlSelf->NPC__DOT__clint__DOT__AXI_R_fire)))
                                               : (IData)(vlSelf->NPC__DOT__clint__DOT__AXI_AR_fire));
    vlSelf->NPC__DOT__uart__DOT__nr_state = ((IData)(vlSelf->NPC__DOT__uart__DOT__cr_state)
                                              ? ((IData)(vlSelf->NPC__DOT__uart__DOT__cr_state) 
                                                 & (~ (IData)(vlSelf->NPC__DOT__uart__DOT__AXI_R_fire)))
                                              : (IData)(vlSelf->NPC__DOT__uart__DOT__AXI_AR_fire));
    vlSelf->NPC__DOT__uart__DOT__nw_state = ((IData)(vlSelf->NPC__DOT__uart__DOT__cw_state)
                                              ? ((IData)(vlSelf->NPC__DOT__uart__DOT__cw_state) 
                                                 & (~ (IData)(vlSelf->NPC__DOT__uart__DOT__AXI_B_fire)))
                                              : (IData)(vlSelf->NPC__DOT__uart__DOT__AXI_AWW_fire));
    vlSelf->NPC__DOT__mem__DOT__nr_state = ((IData)(vlSelf->NPC__DOT__mem__DOT__cr_state)
                                             ? ((IData)(vlSelf->NPC__DOT__mem__DOT__cr_state) 
                                                & (~ (IData)(vlSelf->NPC__DOT__mem__DOT__AXI_R_fire)))
                                             : (IData)(vlSelf->NPC__DOT__mem__DOT__AXI_AR_fire));
    vlSelf->NPC__DOT__mem__DOT__nw_state = ((IData)(vlSelf->NPC__DOT__mem__DOT__cw_state)
                                             ? ((IData)(vlSelf->NPC__DOT__mem__DOT__cw_state) 
                                                & (~ (IData)(vlSelf->NPC__DOT__mem__DOT__AXI_B_fire)))
                                             : (IData)(vlSelf->NPC__DOT__mem__DOT__AXI_AWW_fire));
    vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_br_target 
        = vlSelf->NPC__DOT__core__DOT___exu_io_br_target;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_br_target 
        = vlSelf->NPC__DOT__core__DOT___exu_io_br_target;
    vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_14 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp)) 
                                    << (0x1fU & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)));
    vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp;
    vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_3 
        = (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
           == vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_31 
        = (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
           + vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0 
        = VL_LTS_III(32, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17 
        = (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
           < vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0);
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata 
        = ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
            ? vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp
            : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                ? (vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata 
                   | vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp)
                : ((3U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                    ? ((~ vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp) 
                       & vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata)
                    : ((4U == (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_cmd))
                        ? 0xbU : 0U))));
    vlSelf->NPC__DOT__xbar__DOT__n_state = vlSelf->NPC__DOT__xbar__DOT__casez_tmp;
    vlSelf->NPC__DOT__xbar__DOT___GEN_1 = (2U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN = (0U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_0 = (1U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_5 = (6U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_3 = (4U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_2 = (3U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__xbar__DOT___GEN_4 = (5U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp));
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_in_bits_id2exe_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT___idu_io_pipe_out_bits_id2exe_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_op1_data 
        = vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_op1_data;
    vlSelf->NPC__DOT__core__DOT___exu_io_br_flg = (1U 
                                                   & ((0xbU 
                                                       == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                       ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_3)
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                        ? 
                                                       (~ (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_3))
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                         ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0)
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                          ? 
                                                         VL_GTES_III(32, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
                                                          : 
                                                         ((0xfU 
                                                           == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                           ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17)
                                                           : 
                                                          ((~ (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17)) 
                                                           & (0x10U 
                                                              == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun)))))))));
    vlSelf->NPC__DOT__core__DOT___exu_io_alu_out = 
        ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
          ? vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_31
          : ((2U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
              ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                 - vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
              : ((3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                  ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                     & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
                  : ((4U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                      ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                         | vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
                      : ((5U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                          ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                             ^ vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0)
                          : ((6U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                              ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                                 << (0x1fU & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0))
                              : ((7U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                  ? (vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp 
                                     >> (0x1fU & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0))
                                  : ((8U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                      ? VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp, 
                                                       (0x1fU 
                                                        & vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp_0))
                                      : ((9U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                          ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT____VdfgTmp_hffab811e__0)
                                          : ((0xaU 
                                              == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                              ? (IData)(vlSelf->NPC__DOT__core__DOT__exu__DOT___br_flg_T_17)
                                              : ((0x11U 
                                                  == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                  ? 
                                                 (0xfffffffeU 
                                                  & vlSelf->NPC__DOT__core__DOT__exu__DOT___alu_out_T_31)
                                                  : 
                                                 ((0x12U 
                                                   == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_exe_fun))
                                                   ? vlSelf->NPC__DOT__core__DOT__idu__DOT__casez_tmp
                                                   : 0U))))))))))));
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT___wbu_io_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_csr_wdata;
    vlSelf->NPC__DOT__xbar__DOT__casez_tmp_0 = ((4U 
                                                 & (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state))
                                                  ? (IData)(vlSelf->NPC__DOT___clint_rresp)
                                                  : (IData)(vlSelf->NPC__DOT___uart_rresp))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state))
                                                  ? (IData)(vlSelf->NPC__DOT___mem_rresp)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->NPC__DOT__xbar__DOT__n_state))
                                                   ? 
                                                  (1U 
                                                   == (IData)(vlSelf->NPC__DOT__xbar__DOT__sr))
                                                   : 0U)));
    vlSelf->NPC__DOT__xbar__DOT___GEN_9 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN) 
                                           | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_0));
    vlSelf->NPC__DOT__xbar__DOT___GEN_6 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_5) 
                                           | (7U == (IData)(vlSelf->NPC__DOT__xbar__DOT__casez_tmp)));
    vlSelf->NPC__DOT__xbar__DOT___GEN_8 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1) 
                                           | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_2));
    vlSelf->NPC__DOT__xbar__DOT___GEN_7 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3) 
                                           | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_4));
    if (vlSelf->NPC__DOT__core__DOT___exu_io_br_flg) {
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_br_flg = 1U;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_br_flg = 1U;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__pc_next 
            = vlSelf->NPC__DOT__core__DOT___exu_io_br_target;
    } else {
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_br_flg = 0U;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_br_flg = 0U;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__io_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_in_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT___exu_io_pipe_out_bits_exe2ls_alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__exu__DOT__alu_out 
            = vlSelf->NPC__DOT__core__DOT___exu_io_alu_out;
        vlSelf->NPC__DOT__core__DOT__ifu__DOT__pc_next 
            = ((IData)(vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg)
                ? vlSelf->NPC__DOT__core__DOT___exu_io_alu_out
                : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_87)
                    ? vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mtvec
                    : ((IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT___csignals_T_89)
                        ? vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_mepc
                        : ((IData)(4U) + vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc))));
    }
    if ((0U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))) {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 
            = (((- (IData)((1U & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata));
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 
            = (0xffU & vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata);
    } else if ((1U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))) {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 
            = (((- (IData)((1U & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                  >> 0xfU)))) << 8U) 
               | (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                           >> 8U)));
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 
            = (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                        >> 8U));
    } else if ((2U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))) {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 
            = (((- (IData)((1U & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                  >> 0x17U)))) << 8U) 
               | (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                           >> 0x10U)));
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 
            = (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                        >> 0x10U));
    } else {
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1 
            = (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                            >> 0x1fU))) << 8U) | (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                                  >> 0x18U));
        vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2 
            = (0xffU & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                        >> 0x18U));
    }
    vlSelf->NPC__DOT__core__DOT__csr__DOT__csr_ext__DOT__W3_data 
        = vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_wdata;
    vlSelf->NPC__DOT__xbar__DOT___GEN_11 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_4) 
                                            | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_6));
    vlSelf->NPC__DOT__xbar__DOT___GEN_14 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9) 
                                            | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_8));
    vlSelf->NPC__DOT__xbar__DOT___GEN_10 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_9) 
                                            | ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_1) 
                                               | ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_2) 
                                                  | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_7))));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp 
        = ((4U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
            ? ((2U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                ? 0U : ((1U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                         ? (0xffffU & (((3U == (3U 
                                                & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out)) 
                                        | (2U == (3U 
                                                  & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out)))
                                        ? (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                           >> 0x10U)
                                        : vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata))
                         : (IData)(vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_2)))
            : ((2U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                ? ((1U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                    ? 0U : vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata)
                : ((1U & (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_mem_op))
                    ? ((3U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                        ? (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                         >> 0x10U))
                        : ((2U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                            ? (((- (IData)((vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                             >> 0x10U))
                            : ((((1U == (3U & vlSelf->NPC__DOT__core__DOT___exu_io_alu_out))
                                  ? (- (IData)((1U 
                                                & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                                   >> 0xfU))))
                                  : (- (IData)((1U 
                                                & (vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata 
                                                   >> 0xfU))))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->NPC__DOT__arb__DOT__io_dmem_rdata))))
                    : vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp_1)));
    vlSelf->NPC__DOT__xbar__DOT___GEN_12 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_3) 
                                            | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_11));
    vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data 
        = ((1U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel))
            ? vlSelf->NPC__DOT__core__DOT__lsu__DOT__casez_tmp
            : ((IData)(vlSelf->NPC__DOT__core__DOT___exu_io_jmp_flg)
                ? ((IData)(4U) + vlSelf->NPC__DOT__core__DOT__ifu__DOT__reg_pc)
                : ((3U == (IData)(vlSelf->NPC__DOT__core__DOT__idu__DOT__io_pipe_out_bits_id2exe_wb_sel))
                    ? vlSelf->NPC__DOT__core__DOT__csr__DOT__io_csr_rdata
                    : vlSelf->NPC__DOT__core__DOT___exu_io_alu_out)));
    vlSelf->NPC__DOT__xbar__DOT___GEN_13 = ((IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_2) 
                                            | (IData)(vlSelf->NPC__DOT__xbar__DOT___GEN_12));
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_pipe_in_bits_ls2wb_wb_data 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT___wbu_io_gpr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT___lsu_io_pipe_out_bits_ls2wb_wb_data 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT__wbu__DOT__io_gpr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_wdata 
        = vlSelf->NPC__DOT__core__DOT__lsu__DOT__io_pipe_out_bits_ls2wb_wb_data;
    vlSelf->NPC__DOT__core__DOT__gpr__DOT__gpr_ext__DOT__W0_data 
        = vlSelf->NPC__DOT__core__DOT__gpr__DOT__io_gpr_wdata;
}

void VNPC___024root___nba_sequent__TOP__0(VNPC___024root* vlSelf);

void VNPC___024root___eval_nba(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VNPC___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VNPC___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VNPC___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VNPC___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VNPC___024root___eval_triggers__ico(VNPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__ico(VNPC___024root* vlSelf);
#endif  // VL_DEBUG
void VNPC___024root___eval_triggers__act(VNPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__act(VNPC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__nba(VNPC___024root* vlSelf);
#endif  // VL_DEBUG

void VNPC___024root___eval(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VNPC___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VNPC___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel/single_cycle_riscv32i/vsrc/NPC.sv", 58, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VNPC___024root___eval_ico(vlSelf);
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
            VNPC___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VNPC___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel/single_cycle_riscv32i/vsrc/NPC.sv", 58, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VNPC___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VNPC___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel/single_cycle_riscv32i/vsrc/NPC.sv", 58, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VNPC___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VNPC___024root___eval_debug_assertions(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
