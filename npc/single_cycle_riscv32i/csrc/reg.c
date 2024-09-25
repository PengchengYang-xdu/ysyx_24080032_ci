/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <svdpi.h>
#include "../include/circuit.h"
#include "../include/memory.h"

#define length 32 
uint32_t gpr[length];

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void get_reg(){
  for(int i=0; i < length; i++)
    gpr[i] = top->rootp -> ysyx_24080032_riscv32i__DOT__u_ysyx_24080032_regfile__DOT__rf[i];
}

void isa_reg_display() {
  for(int i = 0; i < length; i ++)
    printf("reg %s ---> %u ---- 0x%x\n", regs[i], gpr[i], gpr[i]);
}

uint32_t isa_reg_str2val(const char *s, bool *success) {
  *success = false;
  for(int i = 0; i < length; i ++)
    if(strcmp(s, regs[i]) == 0){
      *success = true;
      return gpr[i];
    }
  printf("reg not found!\n");
  return 0;
}
