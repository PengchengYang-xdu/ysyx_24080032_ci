#ifndef _YSYXSOC_H_
#define _YSYXSOC_H_
#include <common.h>

extern uint8_t *mrom;
extern uint8_t *sram;

void init_ysyxsoc_mem();

bool in_mrom(paddr_t addr);
bool in_sram(paddr_t addr);
#endif