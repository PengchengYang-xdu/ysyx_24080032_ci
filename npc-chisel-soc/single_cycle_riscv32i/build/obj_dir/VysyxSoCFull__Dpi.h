// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:6460:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/npc-chisel-soc/single_cycle_riscv32i/vsrc/Ebreak.sv:7:30
    extern void npc_trap();
    // DPI import at /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:6481:30
    extern void psram_read(int addr, int* rdata);
    // DPI import at /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:6482:30
    extern void psram_write(int addr, int wdata, char wstrb);
    // DPI import at /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:6536:30
    extern void sdram_read(int id, int bank_addr, int row_addr, int col_addr, int* rdata);
    // DPI import at /home/yangpengcheng/ysyx/ysyx/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:6537:30
    extern void sdram_write(int id, int bank_addr, int row_addr, int col_addr, int wdata, char wstrb);

#ifdef __cplusplus
}
#endif

#endif  // guard
