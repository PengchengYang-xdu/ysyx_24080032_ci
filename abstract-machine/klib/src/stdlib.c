#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

// 定义一个静态的内存池
#define MEMORY_POOL_SIZE 1024 * 1024  // 1MB的内存池
static char memory_pool[MEMORY_POOL_SIZE];
static char *free_ptr = memory_pool;  // 指向下一个可用的内存位置

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
  // 对齐分配的内存大小，以确保分配的内存地址是对齐的
  size = (size + sizeof(size_t) - 1) & ~(sizeof(size_t) - 1);

  // 检查是否还有足够的内存可分配
  if (free_ptr + size > memory_pool + MEMORY_POOL_SIZE) {
    return NULL;  // 如果内存不足，返回 NULL
  }

  // 返回当前的 free_ptr，然后将其向后移动 size 个字节
  void *result = free_ptr;
  free_ptr += size;

  return result;
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  panic("Not implemented");
#endif
  return NULL;
}

void free(void *ptr) {
}

#endif
