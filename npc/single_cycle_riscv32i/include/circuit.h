#ifndef __CIRCUIT_H__
#define __CIRCUIT_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/common.h"

#include "Vysyx_24080032_riscv32i.h" //change filename to Vmodule.h
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include "Vysyx_24080032_riscv32i__Dpi.h"
#include "Vysyx_24080032_riscv32i___024root.h"

extern Vysyx_24080032_riscv32i *top;
extern word_t inst,pc;

void single_cycle();
void cpu_exec(uint32_t n);
void reset(int n);

void init_wave();
void dump_wave(vluint64_t main_time);
void close_wave();
//some simulator action
#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog
#define SEXT(x, len) ({ struct { int64_t n : len; } __x = { .n = x }; (uint64_t)__x.n; })


#endif
