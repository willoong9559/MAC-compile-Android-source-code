/*
 * Copyright (c) 2000-2010 Apple Inc.
 * All rights reserved.
 */

#ifndef _KERNEL_STDINT_H_
#define _KERNEL_STDINT_H_


#include <machine/types.h>

#if __LP64__
#define __WORDSIZE 64
#else
#define __WORDSIZE 32
#endif

/* from ISO/IEC 988:1999 spec */

/* 7.18.1.1 Exact-width integer types */
                                         /* int8_t is defined in <machine/types.h> */
                                         /* int16_t is defined in <machine/types.h> */
                                         /* int32_t is defined in <machine/types.h> */
                                         /* int64_t is defined in <machine/types.h> */
typedef u_int8_t              uint8_t;   /* u_int8_t is defined in <machine/types.h> */
typedef u_int16_t            uint16_t;   /* u_int16_t is defined in <machine/types.h> */
typedef u_int32_t            uint32_t;   /* u_int32_t is defined in <machine/types.h> */
typedef u_int64_t            uint64_t;   /* u_int64_t is defined in <machine/types.h> */


/* 7.18.1.2 Minimum-width integer types */
typedef int8_t           int_least8_t;
typedef int16_t         int_least16_t;
typedef int32_t         int_least32_t;
typedef int64_t         int_least64_t;
typedef uint8_t         uint_least8_t;
typedef uint16_t       uint_least16_t;
typedef uint32_t       uint_least32_t;
typedef uint64_t       uint_least64_t;


/* 7.18.1.3 Fastest-width integer types */
typedef int8_t            int_fast8_t;
typedef int16_t          int_fast16_t;
typedef int32_t          int_fast32_t;
typedef int64_t          int_fast64_t;
typedef uint8_t          uint_fast8_t;
typedef uint16_t        uint_fast16_t;
typedef uint32_t        uint_fast32_t;
typedef uint64_t        uint_fast64_t;


/* 7.18.1.4 Integer types capable of holding object pointers */
                                        /* intptr_t is defined in <machine/types.h> */
                                        /* uintptr_t is defined in <machine/types.h> */


/* 7.18.1.5 Greatest-width integer types */
typedef long long                intmax_t;
typedef unsigned long long      uintmax_t;

/* 7.18.2 Limits of specified-width integer types:
 *   These #defines specify the minimum and maximum limits
 *   of each of the types declared above.
 */


/* 7.18.2.1 Limits of exact-width integer types */
#define INT8_MAX         127
#define INT16_MAX        32767
#define INT32_MAX        2147483647
#define INT64_MAX        9223372036854775807LL

#define INT8_MIN          -128
#define INT16_MIN         -32768
   /*
      Note:  the literal "most negative int" cannot be written in C --
      the rules in the standard (section 6.4.4.1 in C99) will give it
      an unsigned type, so INT32_MIN (and the most negative member of
      any larger signed type) must be written via a constant expression.
   */
#define INT32_MIN        (-INT32_MAX-1)
#define INT64_MIN        (-INT64_MAX-1)

#define UINT8_MAX         255
#define UINT16_MAX        65535
#define UINT32_MAX        4294967295U
#define UINT64_MAX        18446744073709551615ULL

/* 7.18.2.2 Limits of minimum-width integer types */
#define INT_LEAST8_MIN    INT8_MIN
#define INT_LEAST16_MIN   INT16_MIN
#define INT_LEAST32_MIN   INT32_MIN
#define INT_LEAST64_MIN   INT64_MIN

#define INT_LEAST8_MAX    INT8_MAX
#define INT_LEAST16_MAX   INT16_MAX
#define INT_LEAST32_MAX   INT32_MAX
#define INT_LEAST64_MAX   INT64_MAX

#define UINT_LEAST8_MAX   UINT8_MAX
#define UINT_LEAST16_MAX  UINT16_MAX
#define UINT_LEAST32_MAX  UINT32_MAX
#define UINT_LEAST64_MAX  UINT64_MAX

/* 7.18.2.3 Limits of fastest minimum-width integer types */
#define INT_FAST8_MIN     INT8_MIN
#define INT_FAST16_MIN    INT16_MIN
#define INT_FAST32_MIN    INT32_MIN
#define INT_FAST64_MIN    INT64_MIN

#define INT_FAST8_MAX     INT8_MAX
#define INT_FAST16_MAX    INT16_MAX
#define INT_FAST32_MAX    INT32_MAX
#define INT_FAST64_MAX    INT64_MAX

#define UINT_FAST8_MAX    UINT8_MAX
#define UINT_FAST16_MAX   UINT16_MAX
#define UINT_FAST32_MAX   UINT32_MAX
#define UINT_FAST64_MAX   UINT64_MAX

/* 7.18.2.4 Limits of integer types capable of holding object pointers */

#if __WORDSIZE == 64
#define INTPTR_MIN	  INT64_MIN
#define INTPTR_MAX	  INT64_MAX
#else
#define INTPTR_MIN        INT32_MIN
#define INTPTR_MAX        INT32_MAX
#endif

#if __WORDSIZE == 64
#define UINTPTR_MAX	  UINT64_MAX
#else
#define UINTPTR_MAX       UINT32_MAX
#endif

/* 7.18.2.5 Limits of greatest-width integer types */
#define INTMAX_MIN        INT64_MIN
#define INTMAX_MAX        INT64_MAX

#define UINTMAX_MAX       UINT64_MAX

/* 7.18.3 "Other" */
#if __WORDSIZE == 64
#define PTRDIFF_MIN	  INT64_MIN
#define PTRDIFF_MAX	  INT64_MAX
#else
#define PTRDIFF_MIN       INT32_MIN
#define PTRDIFF_MAX       INT32_MAX
#endif

/* We have no sig_atomic_t yet, so no SIG_ATOMIC_{MIN,MAX}.
   Should end up being {-127,127} or {0,255} ... or bigger.
   My bet would be on one of {U}INT32_{MIN,MAX}. */

#if __WORDSIZE == 64
#define SIZE_MAX	  UINT64_MAX
#else
#define SIZE_MAX          UINT32_MAX
#endif

#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1
#define RSIZE_MAX         (SIZE_MAX >> 1)
#endif

#ifndef WCHAR_MAX
#  ifdef __WCHAR_MAX__
#    define WCHAR_MAX     __WCHAR_MAX__
#  else
#    define WCHAR_MAX     0x7fffffff
#  endif
#endif

/* WCHAR_MIN should be 0 if wchar_t is an unsigned type and
   (-WCHAR_MAX-1) if wchar_t is a signed type.  Unfortunately,
   it turns out that -fshort-wchar changes the signedness of
   the type. */
#ifndef WCHAR_MIN
#  if WCHAR_MAX == 0xffff
#    define WCHAR_MIN       0
#  else
#    define WCHAR_MIN       (-WCHAR_MAX-1)
#  endif
#endif

#define WINT_MIN	  INT32_MIN
#define WINT_MAX	  INT32_MAX

#define SIG_ATOMIC_MIN	  INT32_MIN
#define SIG_ATOMIC_MAX	  INT32_MAX

/* 7.18.4 Macros for integer constants */
#define INT8_C(v)    (v)
#define INT16_C(v)   (v)
#define INT32_C(v)   (v)
#define INT64_C(v)   (v ## LL)

#define UINT8_C(v)   (v ## U)
#define UINT16_C(v)  (v ## U)
#define UINT32_C(v)  (v ## U)
#define UINT64_C(v)  (v ## ULL)

#define INTMAX_C(v)  (v ## LL)
#define UINTMAX_C(v) (v ## ULL)


#endif /* _KERNEL_STDINT_H_ */
