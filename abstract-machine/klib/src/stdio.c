#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdbool.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// // Helper function to convert integer to string
// static void itoa(int value, char *str, int base, bool is_unsigned) {
//   char *p = str;
//   char buffer[32];
//   int pos = 0;
//   bool is_negative = false;

//   if (value == 0) {
//     *p++ = '0';
//     *p = '\0';
//     return;
//   }

//   if (value < 0 && !is_unsigned) {
//     is_negative = true;
//     value = -value;
//   }

//   while (value > 0) {
//     int digit = value % base;
//     buffer[pos++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
//     value /= base;
//   }

//   if (is_negative) {
//     *p++ = '-';
//   }

//   for (int i = pos - 1; i >= 0; i--) {
//     *p++ = buffer[i];
//   }

//   *p = '\0';
// }

// static int vsprintf_internal(char *out, size_t n, const char *fmt, va_list ap) {
//   const char *p = fmt;
//   char *out_start = out;
//   size_t remaining = n;
  
//   while (*p) {
//     if (*p == '%') {
//       p++;
//       if (*p == '\0') break;

//       switch (*p) {
//         case 'd': { // Integer
//           int value = va_arg(ap, int);
//           char buffer[32];
//           itoa(value, buffer, 10, false);
//           int len = strlen(buffer);
//           if (remaining > len) {
//             strcpy(out, buffer);
//             out += len;
//             remaining -= len;
//           }
//           break;
//         }
//         case 'x': { // Hexadecimal
//           int value = va_arg(ap, int);
//           char buffer[32];
//           itoa(value, buffer, 16, true);
//           int len = strlen(buffer);
//           if (remaining > len) {
//             strcpy(out, buffer);
//             out += len;
//             remaining -= len;
//           }
//           break;
//         }
//         case 'u': { // Unsigned integer
//           unsigned int value = va_arg(ap, unsigned int);
//           char buffer[32];
//           itoa(value, buffer, 10, true);
//           int len = strlen(buffer);
//           if (remaining > len) {
//             strcpy(out, buffer);
//             out += len;
//             remaining -= len;
//           }
//           break;
//         }
//         case 's': { // String
//           const char *str = va_arg(ap, const char *);
//           int len = strlen(str);
//           if (remaining > len) {
//             strcpy(out, str);
//             out += len;
//             remaining -= len;
//           }
//           break;
//         }
//         case 'c': { // Character
//           char c = (char)va_arg(ap, int);
//           if (remaining > 1) {
//             *out++ = c;
//             remaining--;
//           }
//           break;
//         }
//         default:
//           if (remaining > 1) {
//             *out++ = *p;
//             remaining--;
//           }
//           break;
//       }
//     } else {
//       if (remaining > 1) {
//         *out++ = *p;
//         remaining--;
//       }
//     }
//     p++;
//   }
  
//   if (remaining > 0) {
//     *out = '\0';
//   }
  
//   return out - out_start;
// }

// int printf(const char *fmt, ...) {
//   char buffer[1024];
//   va_list args;
//   va_start(args, fmt);
//   int ret = vsprintf_internal(buffer, sizeof(buffer), fmt, args);
//   va_end(args);
//   putstr(buffer); // Assuming `putstr` outputs string to console
//   return ret;
// }

// int vsprintf(char *out, const char *fmt, va_list ap) {
//   return vsprintf_internal(out, (size_t)-1, fmt, ap);
// }

// int sprintf(char *out, const char *fmt, ...) {
//   va_list args;
//   va_start(args, fmt);
//   int ret = vsprintf(out, fmt, args);
//   va_end(args);
//   return ret;
// }

// int snprintf(char *out, size_t n, const char *fmt, ...) {
//   va_list args;
//   va_start(args, fmt);
//   int ret = vsprintf_internal(out, n, fmt, args);
//   va_end(args);
//   return ret;
// }

// int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
//   return vsprintf_internal(out, n, fmt, ap);
// }

static void reverse(char *s, int len) {
  char *end = s + len - 1;
  char tmp;
  while (s < end) {
    tmp = *s;
    *s = *end;
    *end = tmp;
  }
}

/* itoa convert int to string under base. return string length */
static int itoa(int n, char *s, int base) {
  assert(base <= 16);

  int i = 0, sign = n, bit;
  if (sign < 0) n = -n;
  do {
    bit = n % base;
    if (bit >= 10) s[i++] = 'a' + bit - 10;
    else s[i++] = '0' + bit;
  } while ((n /= base) > 0);
  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  reverse(s, i);

  return i;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list pArgs;
  va_start(pArgs, fmt);
  char *start = out;
  
  for (; *fmt != '\0'; ++fmt) {
    if (*fmt != '%') {
      *out = *fmt;
      ++out;
    } else {
      switch (*(++fmt)) {
      case '%': *out = *fmt; ++out; break;
      case 'd': out += itoa(va_arg(pArgs, int), out, 10); break;
      case 's':
        char *s = va_arg(pArgs, char*);
        strcpy(out, s);
        out += strlen(out);
        break;
      }
    }
  }
  *out = '\0';
  va_end(pArgs);

  return out - start;
}
#endif