#ifndef __CIRCUIT_H__
#define __CIRCUIT_H__

#include <Vysyx_24080032_riscv32i___024root.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <svdpi.h>
#include <Vysyx_24080032_riscv32i__Dpi.h>
#include <Vysyx_24080032_riscv32i.h>

extern Vysyx_24080032_riscv32i *top;
static inline Vysyx_24080032_riscv32i* init_top() {
    return new Vysyx_24080032_riscv32i("top");
}

//circuit
void single_cycle();
void cpu_exec(uint32_t n);
void reset(int i);

//wave
void init_wave();
void dump_wave();
void close_wave();

#endif
