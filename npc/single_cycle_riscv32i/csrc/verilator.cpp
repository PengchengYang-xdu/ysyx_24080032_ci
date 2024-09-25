#include "../include/common.h"
#include "Vysyx_24080032_riscv32i.h" //change filename to Vmodule.h
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include "Vysyx_24080032_riscv32i__Dpi.h"
#include "Vysyx_24080032_riscv32i___024root.h"

Vysyx_24080032_riscv32i *top = new Vysyx_24080032_riscv32i("top");
VerilatedVcdC *tfp = new VerilatedVcdC();

void init_wave(){
    Verilated::traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("ysyx_24080032_riscv32i.vcd");
} 

void dump_wave(vluint64_t main_time){
    tfp->dump(main_time);
    main_time++;
}

void close_wave(){
    top->final();
    tfp->close();
}