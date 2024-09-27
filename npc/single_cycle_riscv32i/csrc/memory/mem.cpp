/***************************************************************************************
deigned by ypc
***************************************************************************************/

#include <mem.h>
#include <common.h>
#include <circuit.h>
#include <debug.h>

static uint8_t *pmem = NULL;

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }

void init_mem() {
    pmem = (uint8_t *)malloc(CONFIG_MSIZE);
    assert(pmem);
}

static word_t pmem_read(paddr_t addr) {
  word_t ret = *(uint32_t *)guest_to_host(addr);  // 直接读取32位数据
  return ret;
}

static void pmem_write(paddr_t addr, word_t data) {
  *(uint32_t *)guest_to_host(addr) = data;  // 直接写入32位数据
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, top->rootp -> ysyx_24080032_riscv32i__DOT__PC);
}

extern "C" int paddr_read(int addr) {
    if(in_pmem(addr))
        return pmem_read(addr);
    out_of_bound(addr);
    return 0;
}

extern "C" void paddr_write(paddr_t addr, word_t data) {
    if(in_pmem(addr))
        { pmem_write(addr, data); return; }
    out_of_bound(addr);
}