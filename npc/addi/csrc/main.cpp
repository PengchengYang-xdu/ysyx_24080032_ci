/*未完成*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vysyx_24080032_riscv32i.h" //change filename to Vmodule.h
#include "verilated_vcd_c.h"

#include "svdpi.h"
#include "Vysyx_24080032_riscv32i__Dpi.h"

vluint64_t main_time = 0;
Vysyx_24080032_riscv32i *top = new Vysyx_24080032_riscv32i("top");
VerilatedVcdC *tfp = new VerilatedVcdC();

extern void ebreak()
{
  Verilated::gotFinish(true);
}

static void single_cycle(void) 
{
  if(!Verilated::gotFinish())
  {
    top->clk = 1; top->eval(); tfp->dump(main_time);  main_time++;
    top->clk = 0; top->eval(); tfp->dump(main_time);  main_time++;
  }
}

static void reset(void)
{
  top->rst_n = 0; single_cycle();
  top->rst_n = 1; single_cycle();
  single_cycle(); 
}

int main(void)
{
    Verilated::traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("ysyx_24080032_riscv32i.vcd");
  
    reset();
 
    while(!Verilated::gotFinish()){                                                                                                                                                                                                  
      single_cycle();
    }

    single_cycle();

    top->final();
    tfp->close();
    delete top;
    return 0;
}

