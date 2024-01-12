#ifndef _LIMITS_H
#define _LIMITS_H
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CHAR_BIT 8
#define MB_LEN_MAX 2

#define CHAR_MIN (-0x7F - 1)
#define CHAR_MAX 0x7F
#define SCHAR_MIN CHAR_MIN
#define SCHAR_MAX CHAR_MAX
#define UCHAR_MAX 0xFF

#define SHRT_MIN (-0x7FFF - 1)
#define SHRT_MAX 0x7FFF
#define USHRT_MAX 0xFFFF

#define INT_MIN (-0x7FFFFFFF - 1)
#define INT_MAX 0x7FFFFFFF
#define UINT_MAX 0xFFFFFFFF

#define LONG_MIN (-0x7FFFFFFFL - 1)
#define LONG_MAX 0x7FFFFFFFL
#define ULONG_MAX 0xFFFFFFFFUL

#define LLONG_MIN (-0x7FFFFFFFFFFFFFFFLL - 1)
#define LLONG_MAX 0x7FFFFFFFFFFFFFFFLL
#define ULLONG_MAX 0xFFFFFFFFFFFFFFFFULL

#ifdef __cplusplus
}
#endif

#endif
