// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__state;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__counter = 0;
    IData/*23:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->ysyxSoCFull__DOT__flash__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__counter = vlSelf->ysyxSoCFull__DOT__flash__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__state = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__data = vlSelf->ysyxSoCFull__DOT__flash__DOT__data;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0U;
        __Vdly__ysyxSoCFull__DOT__flash__DOT__counter = 0U;
    } else {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
                = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd) 
                             << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi));
            __Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
                = (0xffU & ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                             : 0U));
        } else {
            __Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
                = (0xffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))
                             ? ((0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                                 ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                                 : 0U) : ((IData)(1U) 
                                          + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))));
        }
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
            __Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__spi_bundle_mosi));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)))) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",
                   8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        __Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
        VL_WRITEF("[%0t] %%Error: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "");
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0U;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__flash__DOT__data 
            = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                 ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                 : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
               << 1U);
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = __Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = __Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = __Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = __Vdly__ysyxSoCFull__DOT__flash__DOT__state;
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__11\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__5__data;
    __Vtask_flash_read__5__data = 0;
    // Body
    if (vlSelf->ysyxSoCFull__DOT__flash__DOT__ren) {
        if (VL_LIKELY((3U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd)))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(vlSelf->ysyxSoCFull__DOT__flash__DOT__raddr, __Vtask_flash_read__5__data);
            vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
                = __Vtask_flash_read__5__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",
                       8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "");
        }
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata = vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__flash_cmd_i__DOT__data 
                                                     >> 0x18U))));
}

void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_7) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_ce_n))
            ? 1U : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en))
                     ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__c_state)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state = 
        (((9U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5)) 
          | ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5)) 
             | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))))
          ? ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en) 
             << 1U) : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                        ? (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                            == ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                                 ? 0x10U : 0x16U)) ? 8U
                            : 6U) : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                      ? (5U | (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                                                == 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                                                  ? 0x16U
                                                  : 0x1cU)) 
                                               << 1U))
                                      : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                          ? (4U | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                                                   == 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                                                     ? 0xfU
                                                     : 0x15U)))
                                          : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                                                  == 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                                                    ? 8U
                                                    : 0xeU))
                                                  ? 
                                                 ((0xebU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                                                   ? 4U
                                                   : 
                                                  ((0x38U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                                                    ? 6U
                                                    : 9U))
                                                  : 3U)
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                                  ? 
                                                 (2U 
                                                  | (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5))
                                                   ? 
                                                  ((8U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_7)
                                                     ? 0U
                                                     : 3U)
                                                    : 1U)
                                                   : 
                                                  (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT___n_state_T_5)))))))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__ren 
        = (4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN_0 = 
        (1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___GEN = (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psramChiselHelper__wen 
        = (1U & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_en)
                     ? ((8U < (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt)) 
                        & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)))
                     : ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cnt) 
                        >> 4U))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)) 
           | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__wen 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psramChiselHelper__wen;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__rdata = 0U;
    if (((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)))) {
        VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_read_TOP(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr, vlSelf->__Vtask_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_read__6__rdata);
        vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__rdata 
            = vlSelf->__Vtask_ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__psram_read__6__rdata;
    } else if (VL_UNLIKELY(((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__n_state)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psramChiselHelper__wen)) 
                             & (0xebU != (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) 
                            & (0x38U != (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `EBh`, `38h`, `35h` commands\n",
                   8,vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:8201: Assertion failed in %NysyxSoCFull.psram.psramChiselHelper\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 8201, "");
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__di_buf__DOT__out_en 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en;
    vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din 
        = ((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))) 
               | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__douten)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en)
                 ? 0xfU : 0U) & (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en)
                                   ? (vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata_save 
                                      >> 0x1cU) : 0U) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en)
                                     ? 0xfU : 0U))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__di_buf__out_en)
                  ? 0xfU : 0U)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___psramChiselHelper_rdata 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__psramChiselHelper__DOT__rdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT___io_dio_wire = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__wdata_save 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__di_buf__DOT__din 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__io_dio = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__psram_dio 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT___di_buf_din;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__di_buf__DOT__dio 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__io_dio;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_dio 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__psram_dio;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_bundle_dio;
}
