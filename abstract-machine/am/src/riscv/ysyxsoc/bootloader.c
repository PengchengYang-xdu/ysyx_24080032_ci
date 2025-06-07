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







// void fsbl(){
//     // 以 4 字节单位搬移
//     uint32_t *src = (uint32_t *)&_fsbl_end;
//     uint32_t *dest = (uint32_t *)&_ssbl_start;

//     while ((char *)dest < &_ssbl_end)
//         *dest++ = *src++;

//     // printf("fsbl done\n");
//     ssbl((volatile char *)src);
// }

// void ssbl(volatile char *src){
//     uint32_t *psrc = (uint32_t *)src;
//     uint32_t *dest = (uint32_t *)&_text_start;

//     while ((char *)dest < &_data_end)
//         *dest++ = *psrc++;

//     bss_clr();
//     // printf("bootloader done\n");
//     _trm_init();
// }






void fsbl() {
    // 4 字节为单位搬运 .ssbl 段
    uint32_t *src = (uint32_t *)&_fsbl_end;
    uint32_t *dest = (uint32_t *)&_ssbl_start;

    // 计算按 4 字节搬移的结束位置
    while ((char *)dest + 4 <= &_ssbl_end)
        *dest++ = *src++;

    // 处理剩余不足 4 字节的部分
    char *csrc = (char *)src;
    char *cdest = (char *)dest;
    while (cdest < &_ssbl_end)
        *cdest++ = *csrc++;

    // 启动 ssbl 逻辑
    ssbl((volatile char *)cdest);
}

void ssbl(volatile char *src) {
    // 4 字节为单位搬运 .text/.rodata/.data 段
    uint32_t *psrc = (uint32_t *)src;
    uint32_t *dest = (uint32_t *)&_text_start;

    while ((char *)dest + 4 <= &_data_end)
        *dest++ = *psrc++;

    // 处理剩余不足 4 字节的部分
    char *csrc = (char *)psrc;
    char *cdest = (char *)dest;
    while (cdest < &_data_end)
        *cdest++ = *csrc++;

    bss_clr();

    _trm_init();
}