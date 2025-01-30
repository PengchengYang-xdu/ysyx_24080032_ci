// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VNPC__Syms.h"
#include "VNPC___024root.h"

// Parameter definitions for VNPC___024root
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__mem__DOT__sr_BeforeAXI_AR_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__mem__DOT__sr_BeforeAXI_R_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__mem__DOT__s_BeforeAXI_AWW_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__mem__DOT__s_BeforeAXI_B_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__uart__DOT__sr_BeforeAXI_AR_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__uart__DOT__sr_BeforeAXI_R_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__uart__DOT__s_BeforeAXI_AWW_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__uart__DOT__s_BeforeAXI_B_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__clint__DOT__sr_BeforeAXI_AR_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__clint__DOT__sr_BeforeAXI_R_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__clint__DOT__s_BeforeAXI_AWW_Fire;
constexpr CData/*0:0*/ VNPC___024root::NPC__DOT__clint__DOT__s_BeforeAXI_B_Fire;
constexpr IData/*31:0*/ VNPC___024root::NPC__DOT__clint__DOT__ADDR;


void VNPC___024root___ctor_var_reset(VNPC___024root* vlSelf);

VNPC___024root::VNPC___024root(VNPC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNPC___024root___ctor_var_reset(this);
}

void VNPC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VNPC___024root::~VNPC___024root() {
}
