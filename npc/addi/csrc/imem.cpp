#include <stdlib.h>
#include <stdint.h>
#include <string.h>

static const uint32_t img[] = {
    0x00500113,
    0x00C00193,
    0xFF718393,
    0x0023E233,
    0x0041F2B3,
    0x004282B3,
    0x02728863,
    0x0041A233,
    0x00020463,
    0x00000293,
    0x0023A233,
    0x005203B3,
    0x402383B3,
    0x0471AA23,
    0x06002103,
    0x005104B3,
    0x008001EF,
    0x00100113,
    0x00910133,
    0x0221A023,
    0x00210063
    // 0x00100073//ebreak
};

uint32_t *init_imem(size_t num){
    uint32_t* memory = (uint32_t*)malloc(num * sizeof(uint32_t));
    memcpy(memory, img, sizeof(img));
    if(memory == NULL) exit(0);
    return memory;
}

uint32_t imem_read(uint32_t* memory, uint32_t addr){
    return memory[(addr - 0x00000000) / 4];
}
