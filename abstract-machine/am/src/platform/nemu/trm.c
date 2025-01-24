#include <am.h>
#include <nemu.h>

extern char _heap_start;
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}
void print_string(const char *str) {
    while (*str != '\0') {  // 遍历字符串直到遇到空字符
        putch(*str);        // 打印当前字符
        str++;              // 移动到下一个字符
    }
}

void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}

void _trm_init() {
    print_string(&_heap_start);
  int ret = main(mainargs);
  halt(ret);
}
