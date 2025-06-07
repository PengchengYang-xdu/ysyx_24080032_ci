#include <stdint.h>
#include <bootloader.h>
#include <klib.h>
#include <klib-macros.h>
#include <am.h>

void _trm_init();

void fsbl() __attribute__((section(".text.fsbl")));
void ssbl(volatile char *src) __attribute__((section(".text.ssbl"), noinline));

extern char _fsbl_start, _fsbl_end;
extern char _ssbl_start, _ssbl_end;
extern char _data_start, _data_end;
extern char _text_start, _text_end;
extern char _rodata_start, _rodata_end;
extern char _bss_start, _bss_end;

void bss_clr(){
    volatile char *dest = &_bss_start;
    while (dest < &_bss_end)
        *dest++ = 0;
}

// void fsbl(){
//     volatile char *src = &_fsbl_end;
//     volatile char *dest = &_ssbl_start;
//     while(dest < &_ssbl_end)
//         *dest++ = *src++;
//     // printf("fsbl done\n");
//     ssbl(src);
// }

// void ssbl(volatile char *src){
//     volatile char *dest = &_text_start;
//     while(dest < &_data_end)
//         *dest++ = *src++;
//     bss_clr();
//     // printf("bootloader done\n");
//     _trm_init();
// }

void fsbl() {
    char *csrc = &_fsbl_end;
    char *cdest = &_ssbl_start;
    size_t len = &_ssbl_end - &_ssbl_start;

    // 优先按4字节搬
    uint32_t *src = (uint32_t *)csrc;
    uint32_t *dest = (uint32_t *)cdest;
    size_t aligned_len = len & ~0x3;

    for (size_t i = 0; i < aligned_len; i += 4) {
        *dest++ = *src++;
    }

    // 搬运尾部不足4字节
    csrc = (char *)src;
    cdest = (char *)dest;
    for (size_t i = aligned_len; i < len; i++) {
        *cdest++ = *csrc++;
    }

    ssbl(&_ssbl_start);
}

void ssbl(volatile char *src) {
    char *csrc = (char *)src;
    char *cdest = &_text_start;
    size_t len = &_data_end - &_text_start;

    uint32_t *psrc = (uint32_t *)csrc;
    uint32_t *pdest = (uint32_t *)cdest;
    size_t aligned_len = len & ~0x3;

    for (size_t i = 0; i < aligned_len; i += 4) {
        *pdest++ = *psrc++;
    }

    // 尾部不足4字节处理
    csrc = (char *)psrc;
    cdest = (char *)pdest;
    for (size_t i = aligned_len; i < len; i++) {
        *cdest++ = *csrc++;
    }

    bss_clr();
    _trm_init();
}