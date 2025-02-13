#ifndef _ICACHE_H_
#define _ICACHE_H_

#include <stdint.h>

#define uint unsigned int

#define SETS 16
#define WAYS 1
#define BLOCK_SIZE 4
#define POLICY RANDOM

//替换策略数据结构
typedef enum {
    FIFO,
    LRU,
    RANDOM
} ReplacementPolicy;

//iCache块数据结构
typedef struct {
    uint valid;
    uint32_t tag;
} iCacheBlock;

//iCache数据结构
typedef struct {
    iCacheBlock *blocks;
    uint sets;
    uint ways;
    ReplacementPolicy policy;
    
    int *lru_history;  // LRU历史记录
    uint *fifo_queue; // FIFO队列
} iCache;

iCache *init_icache(uint sets, uint ways, ReplacementPolicy policy);
int lookup_icache(iCache *cache, uint address, ReplacementPolicy policy);
uint get_tag(uint address, uint block_size, uint sets);
uint get_index(uint address, uint block_size, uint sets);
void free_cache(iCache *cache);


#endif
