#ifndef __MEM_H__
#define __MEM_H__

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <common.h>

#define RESET_VECTOR 0x80000000
#define REGNUM 32

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

uint8_t* guest_to_host(paddr_t paddr);
word_t paddr_read(paddr_t addr);
void paddr_write(paddr_t addr, word_t data);

void get_reg();
void isa_reg_display();
word_t isa_reg_str2val(const char *s, bool *success);

#endif
