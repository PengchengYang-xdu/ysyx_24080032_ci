#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdbool.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// Helper function to convert integer to string
static void itoa(int value, char *str, int base, bool is_unsigned) {
  char *p = str;
  char buffer[32];
  int pos = 0;
  unsigned int uvalue = value;

  if (value == 0) {
    *p++ = '0';
    *p = '\0';
    return;
  }

  if (value < 0 && !is_unsigned) {
    *p++ = '-';
    uvalue = -value;
  }

  while (uvalue > 0) {
    int digit = uvalue % base;
    buffer[pos++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
    uvalue /= base;
  }

  for (int i = pos - 1; i >= 0; i--) {
    *p++ = buffer[i];
  }

  *p = '\0';
}

static int vsprintf_internal(char *out, size_t n, const char *fmt, va_list ap) {
  const char *p = fmt;
  char *out_start = out;
  size_t remaining = n;
  
  while (*p && remaining > 1) {  // 避免溢出
    if (*p == '%') {
      p++;
      if (*p == '\0') break;
      switch (*p) {
        case 'd': {
          int value = va_arg(ap, int);
          char buffer[32];
          itoa(value, buffer, 10, false);
          int len = strlen(buffer);
          if (remaining > len) {
            strcpy(out, buffer);
            out += len;
            remaining -= len;
          } else {
            strncpy(out, buffer, remaining - 1);  // 防止超出缓冲区
            out += remaining - 1;
            remaining = 1;
          }
          break;
        }
        case 'x': {
          int value = va_arg(ap, int);
          char buffer[32];
          itoa(value, buffer, 16, true);
          int len = strlen(buffer);
          if (remaining > len) {
            strcpy(out, buffer);
            out += len;
            remaining -= len;
          } else {
            strncpy(out, buffer, remaining - 1);
            out += remaining - 1;
            remaining = 1;
          }
          break;
        }
        case 'u': {
          unsigned int value = va_arg(ap, unsigned int);
          char buffer[32];
          itoa(value, buffer, 10, true);
          int len = strlen(buffer);
          if (remaining > len) {
            strcpy(out, buffer);
            out += len;
            remaining -= len;
          } else {
            strncpy(out, buffer, remaining - 1);
            out += remaining - 1;
            remaining = 1;
          }
          break;
        }
        case 's': {
          const char *str = va_arg(ap, const char *);
          int len = strlen(str);
          if (remaining > len) {
            strcpy(out, str);
            out += len;
            remaining -= len;
          } else {
            strncpy(out, str, remaining - 1);
            out += remaining - 1;
            remaining = 1;
          }
          break;
        }
        case 'c': {
          char c = (char)va_arg(ap, int);
          if (remaining > 1) {
            *out++ = c;
            remaining--;
          }
          break;
        }
        default:
          if (remaining > 1) {
            *out++ = *p;
            remaining--;
          }
          break;
      }
    } else {
      if (remaining > 1) {
        *out++ = *p;
        remaining--;
      }
    }
    p++;
  }
  
  if (remaining > 0) {
    *out = '\0';
  }
  
  return out - out_start;
}











int printf(const char *fmt, ...) {
  char buffer[1024];
  va_list args;
  va_start(args, fmt);
  int ret = vsprintf_internal(buffer, sizeof(buffer), fmt, args);
  va_end(args);
  putstr(buffer);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  return vsprintf_internal(out, (size_t)-1, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  int ret = vsprintf(out, fmt, args);
  va_end(args);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  int ret = vsprintf_internal(out, n, fmt, args);
  va_end(args);
  return ret;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  return vsprintf_internal(out, n, fmt, ap);
}

#endif