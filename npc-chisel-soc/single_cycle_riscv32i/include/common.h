
#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

#include <assert.h>
#include <stdlib.h>

#include "config.h"
#include <cassert>
#include <cerrno>
#include <cinttypes>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <sys/time.h>
#include <unistd.h>

typedef int32_t sword_t;
typedef uint32_t word_t;
typedef uint32_t vaddr_t;
typedef uint32_t paddr_t;

#define FMT_WORD "0x%08x"
#define FMT_PADDR "0x%08x"

// #define CONFIG_MSIZE 0xf000000
// #define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0xfff
#define CONFIG_MBASE 0x20000000
#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)




#define FLASH_SIZE 0xfffffff
#define FLASH_BASE 0x30000000

#define PSRAM_SIZE 0x1fffffff
#define PSRAM_BASE 0x80000000

#define SDRAM_SIZE 0x1fffffff
#define SDRAM_BASE 0xa0000000




#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#ifdef WITH_DRAMSIM3
#include "cosimulation.h"
#endif

extern int assert_count;
extern const char *emu_path;

extern int signal_num;
void sig_handler(int signo);

typedef uint64_t rtlreg_t;
typedef uint64_t vaddr_t;
typedef uint16_t ioaddr_t;

extern bool sim_verbose;

int eprintf(const char *fmt, ...);

#define Info(...)           \
  do {                      \
    if (sim_verbose) {      \
      eprintf(__VA_ARGS__); \
    }                       \
  } while (0)

#define Assert(cond, ...)           \
  do {                              \
    if (!(cond)) {                  \
      fflush(stdout);               \
      fprintf(stderr, "\33[1;31m"); \
      fprintf(stderr, __VA_ARGS__); \
      fprintf(stderr, "\33[0m\n");  \
      assert(cond);                 \
    }                               \
  } while (0)

#define panic(...) Assert(0, __VA_ARGS__)

#define fprintf_with_pid(stream, ...)   \
  do {                                  \
    fprintf(stream, "(%d) ", getpid()); \
    fprintf(stream, __VA_ARGS__);       \
  } while (0)

#define printf_with_pid(...)               \
  do {                                     \
    fprintf_with_pid(stdout, __VA_ARGS__); \
  } while (0)

#define TODO() panic("please implement me")

// Initialize common functions, such as buffering, assertions, siganl handlers.
void common_init(const char *program_name);

// Some designs may raise assertions during the reset stage.
// Use common_init_without_assertion with common_enable_assert to manually control assertions.
void common_init_without_assertion(const char *program_name);
void common_enable_assert();

// Enable external log system
typedef int (*eprintf_handle_t)(const char *fmt, va_list ap);
extern "C" void common_enable_log(eprintf_handle_t h);

void common_finish();

uint32_t uptime(void);

extern "C" void xs_assert(long long line);
extern "C" void xs_assert_v2(const char *filename, long long line);
#endif // __COMMON_H



#endif
