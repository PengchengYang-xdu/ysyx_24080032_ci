#include <verilator.h>

Vysyx_24080032_riscv32i *top = new Vysyx_24080032_riscv32i("top");
VerilatedVcdC *tfp = new VerilatedVcdC();

void init_wave(){
    Verilated::traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("ysyx_24080032_riscv32i.vcd");
} 
