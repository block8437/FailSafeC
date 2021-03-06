/*
   This file is automatically generated.
 */

/**
 * @file math/exp2.test.c
 */
#include <math.h>
#include <float.h>
#include <stdio.h>
#include <stdint.h>
#include "common.h"

#ifndef NAN
#define NAN (0.0f/0.0f)
#endif

#ifndef INF
#define INF (1.0f/0.0f)
#endif

#define ABS_FLOAT       fabsf
#define ABS_DOUBLE      fabs
#define ABS_LONG_DOUBLE fabsl

#define TOLERANCE_FLOAT       0x1p-20
#define TOLERANCE_DOUBLE      0x1p-50
#define TOLERANCE_LONG_DOUBLE 0x1p-60

#define RET_MINIMUM_FLOAT       0x1p-126
#define RET_MINIMUM_DOUBLE      0x1p-1022
#define RET_MINIMUM_LONG_DOUBLE 0x1p-16382

#define max(a, b) ((a > b) ? a : b)

#define CMP_FLOAT(x, t) \
  static int compare_##x(t actual, t expected) { \
    if (isnan(actual) && isnan(expected)) \
      return 1; \
    else if (isinf(actual) && isinf(expected)) \
      return ((actual > (t)0.0) == (expected > (t)0.0)); \
    else \
      return (ABS_##x(actual - expected) < max(ABS_##x(expected * TOLERANCE_##x), RET_MINIMUM_##x)); \
  }

#define CMP_INT(x, t) \
  static int compare_##x(t actual, t expected) { return (actual == expected); }

CMP_FLOAT(FLOAT, float)
CMP_FLOAT(DOUBLE, double)
/* CMP_FLOAT(LONG_DOUBLE, long double) */

CMP_INT(INT, int)
CMP_INT(LONG, long)
CMP_INT(LONG_LONG, long long)

#define _CMP(t, a, e) compare_##t(a, e)
#define CMP(t, a, e) _CMP(t, a, e)

/**
 * @testname exp2_2
 * @testfor exp2
 */
TEST_CASE(exp2_2)
{

  static struct {
    double a;

  } args[] = {
    { 0x0p+0 },
    { -0x0p+0 },
    { 0x1p+0 },
    { -0x1p+0 },
    { 0x1p-1022 },
    { -0x1p-1022 },
    { 0x1.fffffffffffffp+1023 },
    { -0x1.fffffffffffffp+1023 },
    { INF },
    { -INF },
    { NAN },
    { NAN },
    { 0x1.ccccccccccccdp-1 },
    { 0x1.199999999999ap+0 },
    { -0x1.ccccccccccccdp-1 },
    { -0x1.199999999999ap+0 },

  };
  static struct {
    double e;

  } expected[] = {
    { 0x1p+0 } ,
    { 0x1p+0 } ,
    { 0x1p+1 } ,
    { 0x1p-1 } ,
    { 0x1p+0 } ,
    { 0x1p+0 } ,
    { INF } ,
    { 0x0p+0 } ,
    { INF } ,
    { 0x0p+0 } ,
    { NAN } ,
    { NAN } ,
    { 0x1.ddb680117ab12p+0 } ,
    { 0x1.125fbee250664p+1 } ,
    { 0x1.125fbee250664p-1 } ,
    { 0x1.ddb680117ab12p-2 } ,

  };
  int i;
  int ok = 1;
  for (i = 0; i < sizeof(args) / sizeof(args[0]); ++i) {

    double result = exp2(args[i].a


                                );

    if (!CMP(DOUBLE, result, expected[i].e)

        ) {
      fprintf(stderr,
              "exp2(%.16e"


              ")\n",
              args[i].a

              );

      fprintf(stderr,
              "returned: %.16e, expected: %.16e\n",
              result,
              expected[i].e
              );

      ok = 0;
    }
  }
  TEST(ok);
}
