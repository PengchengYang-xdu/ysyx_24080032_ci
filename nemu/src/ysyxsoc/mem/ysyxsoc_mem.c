#include "../include/ysyxsoc_mem.h"

uint8_t *mrom = NULL;
uint8_t *sram = NULL;

void init_mrom(){
    mrom = malloc(MROM_SIZE);
    assert(mrom);
    Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", MROM_BASE, MROM_BASE + MROM_SIZE);
}

void init_sram(){
    sram = malloc(SRAM_SIZE);
    assert(sram);
    Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", SRAM_BASE, SRAM_BASE + SRAM_SIZE);
}







void init_ysyxsoc_mem(){
    init_mrom();
    init_sram();
    printf("init soc mem success!\n");
}


bool in_mrom(paddr_t addr){
    return addr - MROM_BASE < MROM_SIZE;
}

bool in_sram(paddr_t addr){
    return addr - SRAM_BASE < SRAM_SIZE;
}

