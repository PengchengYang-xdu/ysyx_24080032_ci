#include <common.h>
#include <utils.h>
#include <device/map.h>

void display_dread(paddr_t addr, int len, IOMap *map) {
	printf("dtrace: read %10s at " FMT_PADDR ", len = %d\n",
		map->name, addr, len);
}

void display_dwrite(paddr_t addr, int len, word_t data, IOMap *map) {
	printf("dtrace: write %10s at " FMT_PADDR ",%d with " FMT_WORD "\n",
		map->name, addr, len, data);
}