#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  // panic("Not implemented");
  char *str = out;
  const char *p = fmt;
  int len = 0;
  
  while (*p) {
    if (*p == '%') {
      p++;
      switch (*p) {
        case 'd': { // Handle integer
          int i = va_arg(ap, int);
          len += sprintf(str + len, "%d", i);
          break;
        }
        case 's': { // Handle string
          const char *s = va_arg(ap, const char*);
          while (*s) {
            str[len++] = *s++;
          }
          break;
        }
        case 'c': { // Handle char
          char c = (char)va_arg(ap, int);
          str[len++] = c;
          break;
        }
        default:
          str[len++] = *p;
          break;
      }
    } else {
      str[len++] = *p;
    }
    p++;
  }
  
  str[len] = '\0';
  return len;
}

int sprintf(char *out, const char *fmt, ...) {
  // panic("Not implemented");
  va_list args;
  va_start(args, fmt);
  int ret = vsprintf(out, fmt, args);
  va_end(args);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
