// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNPC__SYMS_H_
#define VERILATED_VNPC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNPC.h"

// INCLUDE MODULE CLASSES
#include "VNPC___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VNPC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNPC* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNPC___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_NPC;
    VerilatedScope __Vscope_NPC__arb;
    VerilatedScope __Vscope_NPC__clint;
    VerilatedScope __Vscope_NPC__core;
    VerilatedScope __Vscope_NPC__core__csr;
    VerilatedScope __Vscope_NPC__core__csr__csr_ext;
    VerilatedScope __Vscope_NPC__core__exu;
    VerilatedScope __Vscope_NPC__core__gpr;
    VerilatedScope __Vscope_NPC__core__gpr__gpr_ext;
    VerilatedScope __Vscope_NPC__core__idu;
    VerilatedScope __Vscope_NPC__core__idu__ebreak;
    VerilatedScope __Vscope_NPC__core__ifu;
    VerilatedScope __Vscope_NPC__core__lsu;
    VerilatedScope __Vscope_NPC__core__wbu;
    VerilatedScope __Vscope_NPC__mem;
    VerilatedScope __Vscope_NPC__uart;
    VerilatedScope __Vscope_NPC__xbar;
    VerilatedScope __Vscope_TOP;

    // CONSTRUCTORS
    VNPC__Syms(VerilatedContext* contextp, const char* namep, VNPC* modelp);
    ~VNPC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
