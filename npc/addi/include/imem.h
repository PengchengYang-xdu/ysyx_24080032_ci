#ifndef IMEM_H  
#define IMEM_H  

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
  
uint32_t *init_imem(size_t num);
uint32_t imem_read(uint32_t* memory, uint32_t addr);
  
#endif
