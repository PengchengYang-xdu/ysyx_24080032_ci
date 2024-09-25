#include "../include/circuit.h"
#include "../include/memory.h"
#include "../include/common.h"
#include "../include/utils.h"

Vysyx_24080032_riscv32i *top;
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
static void statistic();
// void difftest_step();
#define MAX_INST_TO_PRINT 10
uint64_t g_nr_guest_inst = 0;
static bool g_print_step = false;
word_t pc, snpc, dnpc,inst , prev_pc;
static uint8_t opcode;

vluint64_t main_time = 0;

void single_cycle(){
	top->clk = 1;
    top->eval();
	#ifdef CONFIG_WAVE
	dump_wave(main_time);
	#endif

	top->clk = 0;
    top->eval();
	#ifdef CONFIG_WAVE
	dump_wave(main_time);
	#endif
}

void reset(int n) {
	top->rst_n = 0;
 	while (n -- > 0)
        single_cycle();
	top->rst_n = 1;
}

void assert_fail_msg() {
//   isa_reg_display();
  statistic();
}

void record_inst_trace(char *p, uint8_t *inst){
  char *ps = p;
  p += snprintf(p,128, "%#x:",prev_pc);
  int ilen = 4;
  int i;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  disassemble(p, ps+128-p, (uint64_t)prev_pc, inst, ilen);
}

// static void trace_and_difftest(){
// 	/* DiffTest */
// 	difftest_step();

// 	/* watchpoint check */
// 	extern int check_w();
//   	int no = check_w();
//   	if(no != 0){
//     	printf("NO.%d watchpoint has been trigger\n",no);
// 		return;
//   	}

// 	/* trace(1):instruction trace */
// 	char disasm_buf[128] = {0};
// 	record_inst_trace(disasm_buf,(uint8_t *)&inst);
// 	//print to stdout
// 	if(g_print_step) puts(disasm_buf);
// 	//print to log file
// 	log_write("%s\n", disasm_buf);

// 	#ifdef CONFIG_FTRACE
// 	/* trace(2):function trace*/
// 	extern char * elf_file;
// 	opcode = BITS(inst, 6, 0);
// 	if(opcode == JAL || opcode == JALR){
// 		ftrace_check(opcode ,prev_pc, dnpc, inst);
// 	}
// 	#endif

// }

/* cpu single cycle in exec */
static void exec_once(){
	single_cycle();
}

void cpu_exec(uint32_t n){
	//max inst to print to stdout
	g_print_step = (n < MAX_INST_TO_PRINT);
	while(n > 0){
		prev_pc = top->rootp -> ysyx_24080032_riscv32i__DOT__NextPC;
		snpc = pc + 4;
		exec_once();
		inst = top->rootp -> ysyx_24080032_riscv32i__DOT__Instr;
		pc = top->rootp -> ysyx_24080032_riscv32i__DOT__NextPC;
		dnpc = top->rootp -> ysyx_24080032_riscv32i__DOT__NextPC;
		get_reg();
		g_nr_guest_inst ++;
		#ifdef CONFIG_TRACE
		trace_and_difftest();
		#endif
		n--;
	}
}

static void statistic() {
  Log("total guest instructions = %lu", g_nr_guest_inst);
}

extern "C" void npc_trap(){
	dump_wave(main_time);
	close_wave();
	bool success;
	int code = isa_reg_str2val("$a0",&success);
	if(code == 0)
		printf("\033[1;32mHIT GOOD TRAP\033[0m");
	else
		printf("\033[1;31mHIT BAD TRAP\033[0m exit code = %d",code);
	printf(" trap in %#x\n",pc);
	statistic();
	exit(0);
}
