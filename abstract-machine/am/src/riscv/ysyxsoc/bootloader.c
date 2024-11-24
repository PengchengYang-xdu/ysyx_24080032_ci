#include <stdint.h>
#include <bootloader.h>
#include <am.h>
/* 符号由链接脚本提供 */
extern char _data_load_start, _data_start, _data_end;
extern char _bss_start, _bss_end;

void bootloader() {
    /* 复制数据段 */
    char *src = &_data_load_start;
    char *dest = &_data_start;
    while (dest < &_data_end) {
        *dest++ = *src++;
    }

    /* 清零 BSS 段 */
    dest = &_bss_start;
    while (dest < &_bss_end) {
        *dest++ = 0;
    }
}

void verify() {
    /* 验证数据段复制是否正确 */
    char *src = &_data_load_start;
    char *dest = &_data_start;
    while (dest < &_data_end) {
        if (*dest != *src) {
            halt(1); // 数据段错误
        }
        src++;
        dest++;
    }

    /* 验证 BSS 段是否清零 */
    dest = &_bss_start;
    while (dest < &_bss_end) {
        if (*dest != 0) {
            halt(1); // BSS 段错误
        }
        dest++;
    }

    /* 全部验证通过 */
    halt(0);
}