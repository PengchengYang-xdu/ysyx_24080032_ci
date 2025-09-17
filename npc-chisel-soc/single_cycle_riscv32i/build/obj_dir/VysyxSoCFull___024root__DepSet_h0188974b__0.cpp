// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf);

bool VysyxSoCFull___024root___eval_phase__ico(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VysyxSoCFull___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VysyxSoCFull___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__6(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__7(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__17(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__8(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__9(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__10(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__11(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__12(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__13(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__14(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__15(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__16(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__17(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x24ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0xc00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x1400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x2400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x3000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x600ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0xa00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x1cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0xc5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x3400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0xe00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x3cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x3e04ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__17(vlSelf);
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__temp;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt;
    if (vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp = 0U;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt = 8U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss)))) {
            if (vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN) {
                __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp 
                    = ((0xfeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__temp) 
                                 << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
            } else if (vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN_0) {
                __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp 
                    = (0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__temp) 
                                >> 1U));
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) 
                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN)))))) {
            __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt 
                = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt) 
                           - (IData)(1U)));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__temp = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__temp;
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__cnt;
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ wdata, CData/*7:0*/ wstrb);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0x38U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd)) 
         & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT____Vcellinp__psramChiselHelper__wen))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_write_TOP(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr, vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata, 
                                                                                ((8U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))
                                                                                 ? 3U
                                                                                 : 
                                                                                (2U 
                                                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt)))));
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h3c752a69_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h8e122c26_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h1f774532_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h68b33978_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_haef0bfdf_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h21577928_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h8c529d24_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h54996b5e_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
    CData/*2:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*2:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*3:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
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
    CData/*5:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*1:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0;
    IData/*31:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*1:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    SData/*13:0*/ __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
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
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    // Body
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)) 
                                                  & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out)))
                                                  ? 
                                                 (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o 
        = ((~ (IData)(vlSelfRef.reset)) & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable) 
                                            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel)) 
                                           & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((1U 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                     | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))
                                                  ? 
                                                 (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                  (3U 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos)))
                                                  : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelfRef.reset) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                                 & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                      >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                      >> 2U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (((
                                                   ((1U 
                                                     == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_rise)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                      >> 1U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck_qpi 
        = (1U & ((~ (IData)(vlSelfRef.reset)) & (((2U 
                                                   == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                                  & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n)))
                                                  ? 
                                                 (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck_qpi))
                                                  : 
                                                 ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                                   : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    __Vtableidx5 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.reset)))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__int_o 
        = VysyxSoCFull__ConstPool__TABLE_h3c752a69_0
        [__Vtableidx5];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o 
        = ((IData)(vlSelfRef.reset) || (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out)) 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one)) 
                                                   | (((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))) 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one)) 
                                                    | ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out))) 
                                                   | (((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go)) 
                                                      & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n_qpi 
        = ((IData)(vlSelfRef.reset) | ((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                                           : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (((6U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
                                                       & (6U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r))) 
                                                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                                                         >> 2U))));
    __Vtableidx8 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o) 
                     << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w) 
                                << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o) 
                                           << 1U) | (IData)(vlSelfRef.reset))));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_h8e122c26_0
         [__Vtableidx8])) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q 
            = VysyxSoCFull__ConstPool__TABLE_h1f774532_0
            [__Vtableidx8];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_h8e122c26_0
         [__Vtableidx8])) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q 
            = VysyxSoCFull__ConstPool__TABLE_h68b33978_0
            [__Vtableidx8];
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 2U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 4U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x2774U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count = 0U;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = 2U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
    } else {
        if ((0U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x185U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 1U;
        } else {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
            }
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_ack_w) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) {
            __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_read_data_w;
            __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip)
                         ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len))
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len)
                             : 0x80U)));
        if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT____Vcellinp__asic__spi_miso)
                                                : (
                                                   vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip = 1U;
        } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__last)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                    & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt 
            = ((0x320U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt))
                ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ctrl_sel) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite)) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
                                   | (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dcd) 
                                        << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ri) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dsr) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__cts)))) 
                                      ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dcd_c) 
                   << 7U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ri_c) 
                              << 6U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dsr_c) 
                                         << 5U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__cts_c) 
                                                   << 4U)))));
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__brc_value;
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__valid_o))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
        if ((((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck)) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi)));
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count = 0U;
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count)));
                __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
                    = (0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count) 
                                - (IData)(1U)));
                __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w;
                        __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                        __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((0x32U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                        = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q
                            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_write_data_w);
                }
            }
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_ack_w) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__valid_o))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_ack_w) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__valid_o)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__valid_o))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr)));
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__accept_o))) {
            __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_in_r;
            __VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
            __VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr)));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__accept_o)) 
             & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__valid_o))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__accept_o))) 
                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__valid_o)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        if (((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ie) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit)) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o = 1U;
        } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o = 0U;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                         >> 6U));
        }
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ss_sel) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite)) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata);
            }
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun = 0U;
        } else if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun = 1U;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun = 0U;
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun = 1U;
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
                if ((9U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
                        } else {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w))) 
                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 0U;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                        = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? 7U : 4U);
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 5U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                }
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 3U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((0x32U != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((0x28U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 2U : (((0x14U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))
                                 ? 1U : ((0xaU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                                          ? 0U : 7U)));
                if ((0x28U != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    if ((1U & (~ ((0x14U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                  | (0x1eU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                        if ((0xaU != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                               | (0xfU & ((IData)(1U) 
                                          << (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w))));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
             & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r;
        }
        if (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        }
        if (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        }
        if ((((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o)) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w))) {
            if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axlen 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__axtype))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
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
                            & (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr) 
                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
            }
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awready_o))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wready_o))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q 
                    = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast)));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awaddr;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
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
                            & (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr) 
                              & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awaddr;
            }
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen) 
                            - (IData)(1U)));
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_araddr;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
            if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr;
            } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axtype))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                        ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                 ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                          ? 0xfU : 
                                         ((7U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__axlen))
                                           ? 0x1fU : 0x3fU))));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr 
                        & (~ vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                       | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr) 
                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
            } else {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout 
                    = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__addr);
            }
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__4__Vfuncout;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count = 0U;
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count = 0U;
    } else if ((2U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count)));
            VL_WRITEF_NX("%c",0,8,vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
            Verilated::runFlushCallbacks();
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
                = (0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF_NX("%c",0,8,vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
        Verilated::runFlushCallbacks();
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3U] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    if (__VdlySet__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__VdlyDim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0] 
            = __VdlyVal__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_mosi 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_mosi 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__mosi_pad_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out;
    vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit 
        = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[1U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[2U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_out[3U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U] 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync 
        = (0x60U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid 
        = ((0x90U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt)) 
           & (0x310U >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_one 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ie 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xcU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 8U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xaU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xbU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 9U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len 
        = (0x7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                 >> 0xdU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n 
        = (1U & ((IData)(vlSelfRef.reset) | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    __Vtableidx6 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.reset))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_haef0bfdf_0
        [__Vtableidx6];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n 
        = (1U & ((IData)(vlSelfRef.reset) | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__byte_index 
        = (3U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                  >> 1U) - (IData)(2U)));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe 
            = (8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout 
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
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe 
            = (0xeU > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout 
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__FINAL_COUNT)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_set_en 
        = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
            << 7U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                                                   && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rdata_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rdata_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__data_out_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_done 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi) 
           == ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__FINAL_COUNT)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__a 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpra 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [2U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word3 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [3U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [4U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [5U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word6 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [6U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [7U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word8 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [8U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word9 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [9U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word10 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xaU];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word11 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xbU];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word12 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xcU];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word13 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xdU];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word14 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xeU];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__word15 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [0xfU];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit 
        = (0U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                  [0U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [1U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                          [3U] | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [4U] 
                                                  | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [5U] 
                                                     | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [6U] 
                                                        | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [7U] 
                                                           | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                              [8U] 
                                                              | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                 [9U] 
                                                                 | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                    [0xaU] 
                                                                    | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                       [0xbU] 
                                                                       | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                          [0xcU] 
                                                                          | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                             [0xdU] 
                                                                             | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__data_out_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid 
        = (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr] 
                 >> 4U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr] 
                 >> 5U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__accept_o 
        = (4U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_spi_irq_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_int_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__int_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o;
    vlSelfRef.__Vtableidx3 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h21577928_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dtr_pad_o 
        = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rts_pad_o 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                 >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                 >> 4U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.externalPins_uart_rx));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_read_data_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_read_data_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_read_data_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sck 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_overrun 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                                                   && (1U 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                                          >> 1U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__overrun;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_cke 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cke 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_cke 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_cke_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_cke_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cke = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_output_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_output_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_ack_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_ack_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_ack_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__cmd_comb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q;
    vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ras = (1U 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                      >> 2U));
    vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cas = (1U 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                      >> 1U));
    vlSelfRef.ysyxSoCFull__DOT___asic_sdram_we = (1U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q));
    vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cs = (1U 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                     >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_ba 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ba 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_ba 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_ba_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_ba_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_prio_w 
        = (1U & ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                     | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_prio_w 
        = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__a 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpra 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                                                   && (1U 
                                                       & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                                          >> 2U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))) 
                                                   && (1U 
                                                       & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)))));
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__mosi = vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi;
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_mosi 
        = vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__last_clk 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__last_bit;
    vlSelfRef.externalPins_vga_hsync = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_hsync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_hsync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_hsync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__hsync 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_hsync;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid)
            ? (0x3ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__x_cnt) 
                         - (IData)(0x91U))) : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__go 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__go 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__go;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_negedge 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tx_negedge)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__lsb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_negedge 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__neg_edge)
             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__clk_out)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__len 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0 
        = ((0x80U & ((~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len)))) 
                     << 7U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__char_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss 
        = (0xffU & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                       & ((- (IData)(((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip) 
                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))) 
                          | (- (IData)((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ass)))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__douten 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__done 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_set_en) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_error_bit 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_error_bit 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__error_bit) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__overrun));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__valid_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_id_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rlast_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rlast_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_last_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__valid_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_write_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__valid_o));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_read_w 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__valid_o) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__accept_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__dtr_pad_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dtr_pad_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__rts_internal 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rts_pad_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__rtsn 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rts_pad_o)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_read_data_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_read_data_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__neg_edge 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__pos_edge 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__s_clk 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__sclk_pad_o;
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_sck 
        = vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck;
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__sck = vlSelfRef.ysyxSoCFull__DOT___asic_spi_sck;
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__pop 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_cke 
            = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cke;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_out_en_o 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_out_en_o 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en)
                ? 2U : 0U);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals 
            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dcd) 
                << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ri) 
                           << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dsr) 
                                      << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__cts))));
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w;
        if ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_divider_sel) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite)) 
             & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata));
            }
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tip;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__pop 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_pop;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_cke 
            = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cke;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_data_out_en_o 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_out_en_o 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dout_en;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate;
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0U;
                    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error)
                                ? 4U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 4U;
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                        if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 4U;
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 2U;
                        }
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 2U;
                            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 6U;
                        }
                        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 9U;
                } else {
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 0xaU;
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 8U;
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 7U;
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate 
                        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if ((1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                           & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error))))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate = 1U;
                }
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__break_error 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_ack_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_ack_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_ras 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ras;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_ras 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ras;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_ras 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ras;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_ras_o 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ras;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_ras_o 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ras;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_ras 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ras;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_cas 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cas;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cas 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cas;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_cas 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cas;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_cas_o 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cas;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_cas_o 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cas;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_cas 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cas;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_we 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_we;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_we 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_we;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_we 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_we;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_we_o 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_we;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_we_o 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_we;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_we = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_we;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_cs = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cs;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_cs 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cs;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_cs 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cs;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_cs 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cs;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_cs_o 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cs;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_cs_o 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cs;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__dout 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid) 
             & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awready_o))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
        } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arready_o))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
        }
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                    if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 4U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = ((0x10U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U))) 
                                           && (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                        : ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U)) 
                                           || (1U & 
                                               (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 4U;
                            }
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 2U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 5U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate = 0U;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_count 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__count;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_addr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__lsb) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                        - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_hfdaa4487_0_0) 
                        - ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                        - (IData)(1U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
            = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx_negedge)
                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                         : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                            - (IData)(1U))));
    }
    vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__spi_ss = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ss 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss_pad_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss;
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset = 
        (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss));
    vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_ss) 
                 >> 7U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count) 
              >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelfRef.reset)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__valid_o) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_write_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__valid_o) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_is_read_w));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback)
            ? ((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                        << 2U)) | ((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 3U))))
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__modem_inputs));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dcd_c 
        = (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ri_c 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0) 
                 >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dsr_c 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0) 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__cts_c 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_1_0) 
                 >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__data_in_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_read_data_i;
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__clock 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__enable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__divider 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cke 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_cke;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cke 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_cke;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rstate;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__di 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                    >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_1 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__push_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_ack_i;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ras 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_ras;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ras 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_ras;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cas 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_cas;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cas 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_cas;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_we 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_we;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_we 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_we;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__pop 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tstate)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelfRef.reset)) & ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
    } else {
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                          << 8U));
            }
        }
        if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)))) {
            if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__ss = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_ss 
        = vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_rise 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_rise 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_rise 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_rise 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_rise 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__douten 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rvalid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rvalid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo_reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rx_reset;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cke 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cke;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cke 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cke;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cke 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cke;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cke 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cke;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__count)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ras 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ras;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ras 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ras;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ras 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ras;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ras 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ras;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cas 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cas;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cas 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cas;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cas 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cas;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cas 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cas;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_we 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_we;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_we 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_we;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_we 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_we;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_we 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_we;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__fifo_reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tx_reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_push;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bvalid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bvalid_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_pulse;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__we 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__push;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lcr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lcr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.__Vtableidx4 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_h8c529d24_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.__Vtableidx7 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_h54996b5e_0
        [vlSelfRef.__Vtableidx7];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__sync_dat_o));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__enable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__enable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__push;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__brc_value 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                    >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__loopback) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__srx_pad_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
    vlSelfRef.externalPins_uart_tx = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_uart_tx 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__uart_tx 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__uart_tx 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__stx_pad_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__uart_tx;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__rdata_save;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd;
    if (vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__c_state = 0U;
    } else {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cnt)));
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1 
            = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_2 
            = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_3 
            = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_4 
            = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_5 
            = (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_6 
            = (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__n_state));
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_7 
            = ((((((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_0) 
                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)) 
                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_2)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_3)) 
                | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_4)) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_5));
        if (vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN) {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
            __Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
            __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata = 0U;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_8 = 0xc721443004ULL;
            if (vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_0) {
                vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                    = ((0xfeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___di_buf_din)));
            } else if (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1) {
                vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                    = ((0xf0U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 4U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___di_buf_din));
            }
            if ((1U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_0) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)) 
                          | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_2)))))) {
                __Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                    = ((0xfffff0U & (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr 
                                     << 4U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___di_buf_din));
            }
            vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___wdata_T_1 
                = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_save)) 
                                            << ((0x27U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(5U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt)))))
                                                 ? 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_8 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(5U) 
                                                                * 
                                                                (7U 
                                                                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt)))))))
                                                 : 0U)));
            __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata 
                = ((((- (IData)((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_7))))) 
                     & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_6)))) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___wdata_T_1)) 
                   | vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata);
        }
        if ((1U & (~ ((((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN) 
                        | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)) 
                      | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_2))))) {
            if (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_3) {
                __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save 
                    = vlSelfRef.ysyxSoCFull__DOT__psram__DOT___psramChiselHelper_rdata;
            } else if (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_4) {
                __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save 
                    = (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__rdata_save 
                       << 4U);
            } else if (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_5) {
                __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save = 0U;
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_7)) 
                      | (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__unnamedblk1__DOT___GEN_6)))))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt)));
        }
        vlSelfRef.ysyxSoCFull__DOT__psram__DOT__c_state 
            = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__n_state;
    }
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt 
        = __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata = __Vdly__ysyxSoCFull__DOT__psram__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr = __Vdly__ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__rdata_save 
        = __Vdly__ysyxSoCFull__DOT__psram__DOT__rdata_save;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__wstrb 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))
            ? 0xfU : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))
                       ? 3U : (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata_shiftcnt))));
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__wdata 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__addr 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__di_buf__DOT__dout 
        = (0xfU & (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__rdata_save 
                   >> 0x1cU));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__qpi_en 
        = (((((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT___GEN_0)) 
             & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cnt))) 
            & (0x1aU == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd))) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__qpi_en));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(IData/*31:0*/ id, IData/*31:0*/ bank_addr, IData/*31:0*/ row_addr, IData/*31:0*/ col_addr, IData/*31:0*/ wdata, CData/*7:0*/ wstrb);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr)))) {
        if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__wdata, (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__wstrb));
        }
    }
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr)))) {
        if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__wdata, (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__wstrb));
        }
    }
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr)))) {
        if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__wdata, (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__wstrb));
        }
    }
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr)))) {
        if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state))) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_write_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__wdata, (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__wstrb));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T_1));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T_1));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1));
    if ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_3 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_3 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_3 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_3 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_3 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
    }
    if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_2 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_2 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_2 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_2 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_2 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
    }
    if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_1 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_1 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_1 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_1 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_1 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
    }
    if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_0 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_0 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_0 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_0 
            = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T)
                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                           : ((0x33U >= (0x3fU & ((IData)(0xdU) 
                                                  * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                               ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                          >> (0x3fU 
                                              & ((IData)(0xdU) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                               : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_0 
            = (0x1ffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk2__DOT___col_addr_T_2)
                          ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)
                          : ((0x23U >= (0x3fU & ((IData)(9U) 
                                                 * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba))))
                              ? (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                         >> (0x3fU 
                                             & ((IData)(9U) 
                                                * (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba)))))
                              : 0U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
        = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_3)) 
            << 0x27U) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_2)) 
                          << 0x1aU) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_1) 
                                                        << 0xdU) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__row_addr_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
        = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_3)) 
            << 0x27U) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_2)) 
                          << 0x1aU) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_1) 
                                                        << 0xdU) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__row_addr_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
        = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_3)) 
            << 0x27U) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_2)) 
                          << 0x1aU) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_1) 
                                                        << 0xdU) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__row_addr_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
        = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_3)) 
            << 0x27U) | (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_2)) 
                          << 0x1aU) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_1) 
                                                        << 0xdU) 
                                                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__row_addr_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
        = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_3)) 
            << 0x1bU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_2) 
                                          << 0x12U) 
                                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_1) 
                                             << 9U) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__col_addr_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
        = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_3)) 
            << 0x1bU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_2) 
                                          << 0x12U) 
                                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_1) 
                                             << 9U) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__col_addr_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
        = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_3)) 
            << 0x1bU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_2) 
                                          << 0x12U) 
                                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_1) 
                                             << 9U) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__col_addr_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
        = (((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_3)) 
            << 0x1bU) | (QData)((IData)((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_2) 
                                          << 0x12U) 
                                         | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_1) 
                                             << 9U) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__col_addr_0))))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active;
    if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wstrb = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__c_state = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt 
            = (7U & (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en_0) 
                        & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__c_state))) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_7)) 
                      & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen)))
                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen) 
                         - (IData)(1U)) : (((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt)) 
                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0) 
                                               != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen)))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt) 
                                               - (IData)(1U))
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active 
            = (0xfU & ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd))
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active) 
                           | ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5)))
                        : (((- (IData)((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd)))) 
                            | (~ ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5)))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13)
                      ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode) 
                          >> 4U) - (IData)(1U)) : (
                                                   ((0U 
                                                     != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt) 
                                                       != 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode) 
                                                           >> 4U))))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode) 
                                                    >> 4U))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wdata 
            = (vlSelfRef.ysyxSoCFull__DOT___io_dq_wire 
               >> 0x10U);
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wstrb 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__c_state 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb;
        if (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T_1)) 
             | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr 
                = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba;
        }
        if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode 
                = (0x1fffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_12 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen_cnt));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_active 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__wdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wstrb;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__wstrb 
        = (3U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__wstrb)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_7 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_bank_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__mode))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_1 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_12)
              ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13) 
                 << 1U) : 3U) << 6U) | ((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__caslate_cnt))
                                           ? 1U : 2U) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_12)
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13) 
                                                       << 1U))
                                                      : 1U) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_13)
                                                       ? 2U
                                                       : 
                                                      (3U 
                                                       & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___n_state_T_7))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_1) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__c_state), 1U))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wen 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_ren 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en_0;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip1_io_out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en_0;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en_0;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active;
    if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wstrb = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__c_state = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt 
            = (7U & (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en_0) 
                        & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__c_state))) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_7)) 
                      & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen)))
                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen) 
                         - (IData)(1U)) : (((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt)) 
                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0) 
                                               != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen)))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt) 
                                               - (IData)(1U))
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active 
            = (0xfU & ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd))
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active) 
                           | ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5)))
                        : (((- (IData)((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd)))) 
                            | (~ ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5)))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13)
                      ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode) 
                          >> 4U) - (IData)(1U)) : (
                                                   ((0U 
                                                     != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt) 
                                                       != 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode) 
                                                           >> 4U))))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode) 
                                                    >> 4U))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wdata 
            = (0xffffU & vlSelfRef.ysyxSoCFull__DOT___io_dq_wire);
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wstrb 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__c_state 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb;
        if (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1)) 
             | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr 
                = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba;
        }
        if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode 
                = (0x1fffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_12 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen_cnt));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_active 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__wdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wstrb;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__wstrb 
        = (3U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__wstrb)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_7 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_bank_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__mode))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_1 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_12)
              ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13) 
                 << 1U) : 3U) << 6U) | ((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__caslate_cnt))
                                           ? 1U : 2U) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_12)
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13) 
                                                       << 1U))
                                                      : 1U) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_13)
                                                       ? 2U
                                                       : 
                                                      (3U 
                                                       & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___n_state_T_7))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_1) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__c_state), 1U))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wen 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_ren 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en_0;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip0_io_out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en_0;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en_0;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active;
    if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wstrb = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__c_state = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt 
            = (7U & (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en_0) 
                        & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__c_state))) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_7)) 
                      & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen)))
                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen) 
                         - (IData)(1U)) : (((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt)) 
                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0) 
                                               != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen)))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt) 
                                               - (IData)(1U))
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active 
            = (0xfU & ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd))
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active) 
                           | ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5)))
                        : (((- (IData)((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd)))) 
                            | (~ ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__unnamedblk1__DOT___GEN_5)))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13)
                      ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode) 
                          >> 4U) - (IData)(1U)) : (
                                                   ((0U 
                                                     != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt) 
                                                       != 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode) 
                                                           >> 4U))))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode) 
                                                    >> 4U))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wdata 
            = (vlSelfRef.ysyxSoCFull__DOT___io_dq_wire 
               >> 0x10U);
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wstrb 
            = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__c_state 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb;
        if (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T_1)) 
             | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr 
                = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba;
        }
        if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode 
                = (0x1fffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_12 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen_cnt));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_active 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__wdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wstrb;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__wstrb 
        = (3U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__wstrb)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_7 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_bank_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__mode))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_1 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_12)
              ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13) 
                 << 1U) : 3U) << 6U) | ((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__caslate_cnt))
                                           ? 1U : 2U) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_12)
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13) 
                                                       << 1U))
                                                      : 1U) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_13)
                                                       ? 2U
                                                       : 
                                                      (3U 
                                                       & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___n_state_T_7))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_1) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__c_state), 1U))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_wen 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_ren 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en_0;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip1_io_out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en_0;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en_0;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active;
    if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wdata = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wstrb = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__c_state = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode = 0U;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt 
            = (7U & (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en_0) 
                        & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__c_state))) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_7)) 
                      & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen)))
                      ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen) 
                         - (IData)(1U)) : (((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt)) 
                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0) 
                                               != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen)))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt) 
                                               - (IData)(1U))
                                            : (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active 
            = (0xfU & ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd))
                        ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active) 
                           | ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5)))
                        : (((- (IData)((2U != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd)))) 
                            | (~ ((IData)(1U) << (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__unnamedblk1__DOT___GEN_5)))) 
                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt 
            = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13)
                      ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode) 
                          >> 4U) - (IData)(1U)) : (
                                                   ((0U 
                                                     != (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt)) 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt) 
                                                       != 
                                                       (7U 
                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode) 
                                                           >> 4U))))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode) 
                                                    >> 4U))));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wdata 
            = (0xffffU & vlSelfRef.ysyxSoCFull__DOT___io_dq_wire);
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wstrb 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__c_state 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd 
            = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb;
        if (((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T)) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1)) 
             | (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr 
                = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba;
        }
        if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode 
                = (0x1fffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_12 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen_cnt));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_active 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__wdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wstrb 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wstrb;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__wstrb 
        = (3U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__wstrb)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_7 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_bank_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen 
        = (0xffU & ((IData)(1U) << (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__mode))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_1 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_12)
              ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13) 
                 << 1U) : 3U) << 6U) | ((((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__caslate_cnt))
                                           ? 1U : 2U) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_12)
                                                      ? 
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_7)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13) 
                                                       << 1U))
                                                      : 1U) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_13)
                                                       ? 2U
                                                       : 
                                                      (3U 
                                                       & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___n_state_T_7))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_1) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__c_state), 1U))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_wen 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__n_state));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_ren 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en_0;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip0_io_out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en_0;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en_0;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__13\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc = 0x30000000U;
    } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu_io_pipe_in_valid_r) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__pc_next;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_out_bits_if2id_reg_pc 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_imem_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_out_bits_if2id_reg_pc 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_tag 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
           >> 5U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_offset 
        = (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_index 
        = (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
                 >> 3U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__issdram_raddr 
        = ((0x9fffffffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc) 
           & (3U != (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
                     >> 0x1eU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_imem_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__addr_align 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__reg_pc 
           - (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__req_offset));
}

extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h5b4a5e91_0;
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_write_data_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_wlast)
                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0))
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_wlast)
                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
              >> 1U));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_arid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awid;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awburst;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_arburst;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_awlen;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_arlen;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu_io_pipe_in_valid_r 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu_io_pipe_in_valid_r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_bits_last 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                  ? (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                             >> 0x24U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2fU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 0x24U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_1 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2fU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 0x24U)));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___anonIn_awready_T) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0) 
              >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_in_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___ifu_io_pipe_in_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__in_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__io_pipe_in_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu_io_pipe_in_valid_r;
    vlSelfRef.__Vtableidx1 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__out_valid) 
                               << 8U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___idu_io_pipe_in_ready) 
                                          << 7U) | 
                                         (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__rready) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_rvalid) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__arvalid) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT___icache_io_in_arready) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu_io_pipe_in_valid_r) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__c_state))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp 
        = VysyxSoCFull__ConstPool__TABLE_h5b4a5e91_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awaddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_araddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_bits_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_wdeq_q_io_deq_bits_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_id 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_8_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_id 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_3) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_burst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_burst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arburst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arlen 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN 
        = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__n_state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_1 
        = (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awaddr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awaddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_araddr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_araddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_enq_bits_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wlast_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_id 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_id 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_burst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awburst_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_burst 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arburst_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arburst;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_bits_len 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awlen_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awecho_real_last 
        = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_bits_len 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arlen_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arlen;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arecho_real_last 
        = (1U & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT___GEN_1) 
           | (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__ifu__DOT__casez_tmp)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awaddr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awaddr_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_araddr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_araddr_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wlast_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wlast_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_wvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_wvalid_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arid_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awid_i;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awvalid = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awvalid = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_len_w 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awlen;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_awvalid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_awvalid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awvalid = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_len_w 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid)
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arlen)
                : 0U);
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awburst_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awburst_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arburst_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arburst_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awlen_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awlen_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awecho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awecho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arlen_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arlen_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arecho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arecho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arecho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arecho_real_last;
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_len_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_len_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_len_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_len_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__csr__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__reset 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__reset;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_idle)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_idle)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_arvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_arvalid_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lmrom_auto_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_awvalid_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_awvalid_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last 
        = (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__ren 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read_TOP(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_araddr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata);
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata 
            = vlSelfRef.__Vtask_ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__mrom_read__1__rdata;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__mrom__DOT__rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata;
        vlSelfRef.__VdfgRegularize_hd87f99a1_1_68 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_awready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_wready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r;
        vlSelfRef.__VdfgRegularize_hd87f99a1_1_68 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___is_write_T)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2 
        = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                    >> 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3 
        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
           >> 0x18U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_68) 
              >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_68) 
              >> 1U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgRegularize_h456d727f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1)
                     ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                        >> 8U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_68)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_addr 
        = (0x7ffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                       >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr 
        = (((0x3fffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                          >> 2U)) << 2U) | 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr 
        = (0xffffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                        >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr 
        = (0x1fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 
        = (2U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                        >> 0x1cU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___io_in_prdata_T 
        = (0U == (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr 
        = (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0 
        = (0x1ffffU & (0x10002U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                   >> 0xcU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
        = (0x1ffffU & (0x10011U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                   >> 0xcU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN 
        = (0x1ffffU & (0x10001U ^ (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                   >> 0xcU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0xcU))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
        = (0x3fffffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 
        = (0U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                        >> 0x1cU)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state) 
                       << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
            << 2U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__size 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0xffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_68))
                     ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata
                     : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_1) 
                         & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4) 
                                       & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                                       : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
                                           & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_68) 
                                               >> 3U) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size))))
                                           ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte3)
                                           : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgRegularize_hde7f411e_2_4) 
                                               & (2U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte2)
                                               : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT 
        = (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en)
                     ? ((IData)(7U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U))
                     : ((IData)(0xdU) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_out_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr)
                     ? ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr)
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata 
                            >> 0x18U) : (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_paddr)
                         ? (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata 
                            >> 8U) : vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_pwdata)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_addr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0 
                                                 >> 0xdU)) 
                                          | ((4U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_0)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
                                                 >> 0xdU)) 
                                          | ((4U & 
                                              (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1 
                                               >> 2U)) 
                                             | (3U 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN_1)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x10U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                             >> 0x19U)) | ((8U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN 
                                                  >> 0xdU)) 
                                           | ((4U & 
                                               (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                >> 0xeU)) 
                                              | (3U 
                                                 & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___GEN))))) 
           | (3U == (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                           >> 0x1cU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_5 
        = (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr 
                 - (0x3ffffff8U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
        = ((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
               << 8U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__W0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_5_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_psel_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_err_o)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pslverr)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pslverr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_pready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0 
        = ((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___offset_T_5 
        = ((QData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_5)) 
           << 3U);
    __Vtemp_2[0U] = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_3;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    VL_SHIFTL_WWI(95,95,6, __Vtemp_3, __Vtemp_2, (0x38U 
                                                  & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_5 
                                                     << 3U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___nodeIn_prdata_T_1[2U] 
        = (0x7fffffffU & __Vtemp_3[2U]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_0 
        = ((0x10000fffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN) 
           & (0x10002000U > vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_1 
        = (0x2fffffffU < vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_1 
        = (((0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
                     << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full) 
                                 << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state))) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_1) 
               << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                 | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                    >> 1U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_mask 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__line 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__W0_en 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__W0_en;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_psel = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_psel = 1U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata 
            = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
                & (4U == (0xfU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_sw)
                : 0U);
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_psel = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_psel = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
            & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT___io_in_prdata_T)))
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_0)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pslverr) 
           << 1U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgRegularize_hc00137df_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_1)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rvalid;
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1)))) 
                        | (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                                  >> 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1))))) 
                    & (((4U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2) 
                               << 2U)) | ((2U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full) 
                                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                                                 << 1U)) 
                                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full))) 
                       | ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___readys_filter_T_3)) 
                          | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___GEN_2))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__wb_dat_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__di 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_3_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_4_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pslverr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_we_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_re_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb 
            = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9)
                ? 0x3540U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5)
                              ? 0x3440U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7) 
                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3))
                                            ? 1U : 
                                           ((1U & (
                                                   (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1)) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T)))
                                             ? 0U : 
                                            (0x7ffffffU 
                                             & ((IData)(0x3000000U) 
                                                + (0xffffffU 
                                                   & vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_1) 
                  | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_3) 
                     | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5) 
                        | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_7) 
                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_paddr_T_12)
                ? 0x10001000U : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_9) 
                                  | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_pwrite_T_5))
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
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb 
            = (0xfU & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) 
           | ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___mspi_io_in_penable_T_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__stb_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
            >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__io_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__io_in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__auto_in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwrite 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_paddr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_adr_i 
        = (0x1fU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                    >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_2) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_we_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pwrite;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pstrb 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_psel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_penable 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_penable) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_psel));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_rresp)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r)
                        : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id)
                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_bresp)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__p_in 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_pstrb;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_stb_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_psel;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_cyc_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__in_penable;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_divider_sel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
           & (0x14U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ctrl_sel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
           & (0x10U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_ss_sel 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
           & (0x18U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel 
        = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
             & (0xcU == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr))) 
            << 3U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                        & (8U == (0x1cU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr))) 
                       << 2U) | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                   & (4U == (0x1cU 
                                             & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr))) 
                                  << 1U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h150067cf_0_0) 
                                            & (0U == 
                                               (0x1cU 
                                                & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_recho_real_last 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_0) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                 | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___GEN 
                    >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid), 1U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_6) 
                 >> (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__byte_sel 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_sel_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel) 
           & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_pwrite))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_recho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_recho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_recho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_recho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_recho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_becho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_becho_real_last 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid;
}

extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_h3ecd08d1_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__dpo 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out 
        = ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__dpo 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__h_valid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__v_valid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_read) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rlast 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN_0) 
               == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_len));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0 
            = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state)) 
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
                                                          & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index_in)), 4U)))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rlast 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr 
        = (0x7ffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_h_addr) 
                       + ((IData)(0x280U) * (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___vgaChiselHelper_v_addr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__is_write)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_bvalid_T) 
               & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state)))
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN 
        = (0x24U | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___io_in_bvalid_T)
                       ? 0U : 3U) << 6U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_counter_index) 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__burst_len)))) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid) 
                                                   | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid))
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid)
                                                    ? 1U
                                                    : 2U)
                                                   : 0U)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__accept_o) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_prio_w) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_awvalid) 
               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__accept_o) 
                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_prio_w) 
                    | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_arvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_en)
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
                                                     ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                      >> 4U)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? 
                                                       ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                        >> 4U)
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                          >> 0x14U)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                           >> 0x10U)
                                                           : 
                                                          ((0xeU 
                                                            == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                            ? 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                            >> 0x1cU)
                                                            : 
                                                           (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
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
                                                    ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                     >> 4U)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                       >> 4U)
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? 
                                                         (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                          >> 0x10U)
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                           >> 0x1cU)
                                                           : 
                                                          (vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                           >> 0x18U)))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)) 
              & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT___GEN_2) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_ack_o;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat_o;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready 
            = (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__state));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata 
            = (VL_SHIFTL_III(32,32,6, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_3, 
                             (0x38U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_5 
                                       << 3U))) | VL_SHIFTR_III(32,32,6, vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_3, 
                                                                (0x3fU 
                                                                 & ((IData)(0x20U) 
                                                                    - 
                                                                    (0x38U 
                                                                     & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____VdfgRegularize_h5805738f_0_5 
                                                                        << 3U))))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                         >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[0U]
            : ((1U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                             >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[1U]
                : ((2U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                 >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[2U]
                    : ((3U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                     >> 2U))) ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__rx[3U]
                        : ((4U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                         >> 2U))) ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                             >> 2U)))
                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT____Vcellinp__mspi__in_paddr 
                                                 >> 2U)))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__data_out 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o 
        = (0xffU & ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                     ? ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                         ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                             : 0U)) : ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                        ? ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_adr))
                                            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)
                                                ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlab)
                                                ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                   >> 3U))))));
    vlSelfRef.externalPins_vga_valid = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_addr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
        = ((0x4afffU >= vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__Memory
           [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____Vcellinp__buffer_ext__R0_addr]
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid) 
            << 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__n_state 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT___GEN) 
                 >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__c_state), 1U))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__read_active_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__rd_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__wr_w 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_2
                : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_h86c3254d_0_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
            : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_0_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lspi__DOT__auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_prdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
            ? (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o) 
                << 0x18U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o) 
                              << 0x10U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__wb_dat_o))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_data 
        = (0xffffffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
                        >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT___buffer_ext_R0_data 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r 
        = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
                    >> 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g 
        = (0xffU & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data 
                    >> 8U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b 
        = (0xffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__buffer_ext__DOT__R0_data);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_rd_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__wr_w)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_5)
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_addr_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__addr_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_bank_w 
        = (3U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                 >> 0xaU));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__ack 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ack_o) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate))) {
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck 
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
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n_qpi;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((8U > (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__cnt_qpi)))));
    } else if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__sck;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout;
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__ce_n;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_doe))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__sck;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_dout;
        vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__ce_n;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0xfU & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_doe))));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_1_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__auto_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_prdata
                        : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                   ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_prdata
                                   : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                              ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                              : 0U) 
                                            | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                : 0U)))));
    vlSelfRef.externalPins_vga_r = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_r = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_r 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_r;
    vlSelfRef.externalPins_vga_g = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_g 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_g = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_g 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_g 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_g;
    vlSelfRef.externalPins_vga_b = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b;
    vlSelfRef.ysyxSoCFull__DOT__externalPins_vga_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__vga_b = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__vga_bundle_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vgaChiselHelper__DOT__vga_b 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__io_vga_b;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rvalid 
            = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)
                   : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__c_state))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rvalid 
            = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10)) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_12)
                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid)
                   : ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state)) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__c_state))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid 
            = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_10) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid) 
                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_bvalid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN)
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_h3c4a64d2_0_3) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid))
            : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT____VdfgRegularize_h3c4a64d2_0_4) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)))) 
                    & (((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                               << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
                     | (1U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                               >> 1U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)))) 
                    & (((2U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                               << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3)))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_wr_o)) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__ram_rd_o));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_out_2_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__auto_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready;
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_70 = (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready)) 
                                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                                                 | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___luart_auto_in_pready)) 
                                                     & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                                                    | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lpsram_auto_in_pready)) 
                                                        & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                                                       | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready)) 
                                                           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                                                          | (((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                                              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                                             | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready)) 
                                                                & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)))))));
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__io_sck 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__clock 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__psram_sck 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_sck 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_sck 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__sck 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_sck;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__io_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__psram_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_ce_n 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__ce_n 
        = vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__lsr_mask;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__reset_status 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__lsr_mask;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_in_prdata_T) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_prdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__rdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__n_state 
            = (2U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_pready)) 
                     << 1U));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_prdata 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__n_state 
            = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__c_state))
                ? ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_70)
                    ? 1U : 2U) : ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__c_state)) 
                                  & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_14 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__out_rready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rvalid_0));
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
                  >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bvalid));
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
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_wr_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready 
        = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_70)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_out_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_in_prdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_prdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeOut_penable)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_io_in_prdata
            : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___icache_wdata_T_8 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT___in_rdata_T_14;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_1_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_rready)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_out_bready)) 
              | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rlast)) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h54426eaf_1_1))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_bready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__auto_anon_in_pready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rdata
             : 0U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                        : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_rdata
                                  : 0U)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_rvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_rvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rresp_o)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rlast)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_1_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_1_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_1 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_bvalid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_bvalid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__io_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__auto_in_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__pop_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__pop_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bresp_o)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
             ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                       ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_bid)
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
               : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_out_0_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata
             : 0U) | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_io_in_rdata
                       : 0U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_rready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_11 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_2 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast));
    vlSelfRef.__Vtableidx2 = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_io_axi4_rvalid) 
                               << 8U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid) 
                                          << 7U) | 
                                         (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___core_io_imem_arvalid) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid) 
                                               << 4U) 
                                              | ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                                                     ? 2U
                                                     : 
                                                    (3U 
                                                     & (- (IData)((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2)))))) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state)))))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp 
        = VysyxSoCFull__ConstPool__TABLE_h3ecd08d1_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_0_T_6 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_1_T_6 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_2_T_6 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_3_T_6 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_4_T_6 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_5_T_6 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_6_T_6 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_6 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_8_T_6 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_9_T_6 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_10_T_6 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_11_T_6 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_12_T_6 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_13_T_6 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_14_T_6 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_6 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____VdfgRegularize_hb7083124_6_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___lmrom_auto_in_arready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_arready))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__in_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_5 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_5 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_5 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_5 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_5 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_5 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_5 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_5 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_5 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_5 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_5 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_5 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_5 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_5 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_5 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_5 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_0_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_7 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_0_T_5 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_1_T_5 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_2_T_5 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_3_T_5 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_4_T_5 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_5_T_5 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_6_T_5 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_5 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_8_T_5 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_9_T_5 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_10_T_5 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_11_T_5 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_12_T_5 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_13_T_5 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_14_T_5 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_5 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
           & (0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__auto_anon_in_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rdata 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_2)
            ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_7 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state))
            ? ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__isimem)
                ? 0U : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN_0)
                         ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata
                         : ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___n_state_T_2)
                             ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_io_axi4_rdata
                             : 0U))) : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__c_state))
                                                  ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata
                                                  : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___clint_io_axi4_rdata)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_rready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_rready_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_6 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_6 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_6 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_6 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_6 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_6 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_6 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_6 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_6 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_6 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_6 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_6 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_6 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_6 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_6 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_6 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgRegularize_h3f4aebb8_12_2));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__n_state 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__R0_en 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_2_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__axi_bready_i 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__inport_bready_i;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bresp 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bresp;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_bid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_bid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_wvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgRegularize_h66ac2f4c_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__auto_master_out_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_imem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_imem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_7;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__casez_tmp_7;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rlast 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rlast;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_arready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arecho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
           & (0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_wready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__auto_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAWOI_in_0_awready_T_4 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4ram_auto_in_awready)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__io_soc_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_master_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__icache__DOT__io_out_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_imem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_dmem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_arready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_arready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_1__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_2__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_3__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_4__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_5__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_6__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_7__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_8__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_9__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_10__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_11__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_12__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_13__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_14__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_15__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_last) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsWOI_in_0_wready_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAWOI_in_0_awready_T_4) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__io_dmem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_enq_ready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___wcounter_T 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgRegularize_h84ce0f54_3_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__auto_anon_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgRegularize_h60d1478f_0_0));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__lsu__DOT__io_dmem_dmem_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core__DOT__exu__DOT__io_dmem_rdata;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_out_wready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_in_wready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_wready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_wready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__auto_out_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__auto_in_awready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_0_T_2 
        = ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_1_T_2 
        = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_2_T_2 
        = ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_3_T_2 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_4_T_2 
        = ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_5_T_2 
        = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_6_T_2 
        = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_7_T_2 
        = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_8_T_2 
        = ((8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_9_T_2 
        = ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_10_T_2 
        = ((0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_11_T_2 
        = ((0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_12_T_2 
        = ((0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_13_T_2 
        = ((0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_14_T_2 
        = ((0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_2 
        = ((0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (8U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xaU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xbU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xcU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xdU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xeU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_enq_valid 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
           & (0xfU == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awecho_real_last) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_16__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_17__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_18__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_19__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_20__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_21__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_22__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_23__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_24__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_25__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_26__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_27__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_28__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_29__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_30__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__io_enq_valid 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____Vcellinp__Queue1_BundleMap_31__io_enq_valid;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_awready) 
               & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_awready) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN = 
        ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss)) 
         & (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt)));
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN_0 
        = (1U & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss)) 
                 & (~ (IData)((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__cnt))))));
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_miso 
        = (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) 
                 | ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN)) 
                    & ((~ (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT___GEN_0)) 
                       | (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__temp)))));
    vlSelfRef.ysyxSoCFull__DOT___bitrev_io_miso = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__io_miso;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cnt = vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cnt;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd = vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__cmd 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT___n_state_T_7 
        = (0x35U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(IData/*31:0*/ id, IData/*31:0*/ bank_addr, IData/*31:0*/ row_addr, IData/*31:0*/ col_addr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1fffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4)
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__busrtlen) 
                                     - (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__bank_addr)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_out_en_0) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__10__rdata);
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__10__rdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip1_io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dq_o;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1fffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4)
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__busrtlen) 
                                     - (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__bank_addr)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en_0) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__12__rdata);
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__12__rdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip0_io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dq_o;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1fffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4)
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__busrtlen) 
                                     - (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__bank_addr)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en_0) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__14__rdata);
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_read__14__rdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__rdata);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT___chip1_io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dq_o;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_out_en_0) 
           & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_out_en_0));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__data_in_buf__DOT__out_en 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT____Vcellinp__data_in_buf__out_en;
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h17cf0364_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN 
        = (1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q = 0U;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q 
                        = (0xfU & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q)
                                    : (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w))));
                } else if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0x3bffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r)) 
                          << 0xaU));
            }
        } else if ((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x3bffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                } else {
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_col_w;
                    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x3bffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                }
            } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            } else {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_col_w;
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x3bffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            }
        } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                = ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_row_w)
                    : 0U);
        } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        } else if ((0x32U != vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            if ((0x28U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x400U | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            } else if ((1U & (~ ((0x14U == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0xaU == vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 0x20U : 0U);
            }
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q 
            = ((0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r))
                ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_ba = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___GEN 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___GEN 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___GEN 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelfRef.__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dqm 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_dqm 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_dqm 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_dqm 
        = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 2U));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_dqm 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_dqm 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_dqm 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_dqm_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_dqm_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q;
    vlSelfRef.ysyxSoCFull__DOT___asic_sdram_dqm = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_ba 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_ba;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__sdram_a 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__sdram_bundle_a 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__sdram_a 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__sdram_addr_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_addr_o 
        = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_a 
        = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                      >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_a 
        = (0x1fffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                      >> 0U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___bank0_io_cs_T_1 
        = (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
               >> 0xdU)) | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_sdram_cs));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_dqm 
        = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_dqm;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_a = vlSelfRef.ysyxSoCFull__DOT___asic_sdram_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_a 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_a 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_a 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_a 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_a;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cs 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___bank0_io_cs_T_1;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___bank0_io_cs_T_1) 
            << 3U) | (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__bank1__io_cs 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT___bank0_io_cs_T_1) 
           ^ (0U != (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_dqm 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_dqm;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_dqm 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__io_dqm;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_cs 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cs;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__io_cs 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__io_cs;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT__cmd_comb 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cs 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__bank1__io_cs;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT____Vcellinp__bank1__io_cs) 
            << 3U) | (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelfRef.__Vtableidx9 = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h17cf0364_0
        [vlSelfRef.__Vtableidx9][0U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h17cf0364_0
        [vlSelfRef.__Vtableidx9][1U];
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h17cf0364_0
        [vlSelfRef.__Vtableidx9][2U];
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___row_addr_T 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___row_addr_T;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip1__DOT___col_addr_T_1 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___col_addr_T_1;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__io_cs 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cs;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__io_cs 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__io_cs;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT__cmd_comb 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T 
        = (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T 
        = (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1 
        = (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT__cmd_comb));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___row_addr_T 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___row_addr_T;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip1__DOT___col_addr_T_1 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank1__DOT__chip0__DOT___col_addr_T_1;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__6(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr 
        = ((0x33U >= (0x3fU & ((IData)(0xdU) * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1fffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_2 
                                  >> (0x3fU & ((IData)(0xdU) 
                                               * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4 
        = ((0x23U >= (0x3fU & ((IData)(9U) * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))
            ? (0x1ffU & (IData)((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_3 
                                 >> (0x3fU & ((IData)(9U) 
                                              * vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr)))))
            : 0U);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_row_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr 
        = (0x1ffU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0) 
                      == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen))
                      ? (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4)
                      : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_4) 
                         + (0xffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__busrtlen) 
                                     - (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT___GEN_0))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT____Vcellinp__sdramChiselHelper__sdram_col_addr;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata = 0U;
    if ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__active) 
               >> (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__bank_addr)))) {
        if (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_out_en_0) {
            VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read_TOP(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__id, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__bank_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__row_addr, vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__col_addr, vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__8__rdata);
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata 
                = vlSelfRef.__Vtask_ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_read__8__rdata;
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o 
        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__rdata);
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT___chip0_io_dq_o 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__sdramChiselHelper__DOT__sdram_rdata 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__bank0__DOT__chip0__DOT__io_dq_o;
}
