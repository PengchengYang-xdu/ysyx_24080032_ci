/***************************************************************************************
deigned by ypc
***************************************************************************************/

#include <circuit.h>
#include <mem.h>
#include <common.h>
#include <utils.h>

Vysyx_24080032_riscv32i *top = init_top();

void single_cycle(){
    top->clk = 1;
    top->eval();
	dump_wave();

	if(top->rst_n)
		itrace_init(top->rootp -> ysyx_24080032_riscv32i__DOT__PC, top->rootp -> ysyx_24080032_riscv32i__DOT__Instr);

	top->clk = 0;
    top->eval();
    dump_wave();
}

void reset(int i) {
	top->rst_n = 0; 
 	while (i -- > 0)
        single_cycle();
	top->rst_n = 1; 
}

static void exec_once(){
	single_cycle();
}

void cpu_exec(uint32_t n){
	while(n > 0){
		exec_once();
		get_reg();
		n--;
	}
}

static void statistic() {
  
}

extern "C" void npc_trap(){
	dump_wave();
	close_wave();
	bool success;
	int code = isa_reg_str2val("a0",&success);
	if(code == 0)
		printf("\033[1;32mHIT GOOD TRAP\033[0m at pc = 0x%x\n", top->rootp -> ysyx_24080032_riscv32i__DOT__NextPC);
	else
		printf("\033[1;31mHIT BAD TRAP\033[0m at pc = 0x%x\nexit code = %d\n",top->rootp -> ysyx_24080032_riscv32i__DOT__NextPC, code);
	itrace_init(top->rootp -> ysyx_24080032_riscv32i__DOT__NextPC, top->rootp -> ysyx_24080032_riscv32i__DOT__Instr);
	display_inst();
	statistic();
	exit(0);
}

void assert_fail_msg() {
//   isa_reg_display();
  statistic();
}