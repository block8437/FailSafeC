/*
   This file is automatically generated.
 */

/**
 * @file math/scalblnf.test.c
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
 * @testname scalblnf_2
 * @testfor scalblnf
 */
TEST_CASE(scalblnf_2)
{

  static struct {
    float a;

    long a2;

  } args[] = {
    { 0x0p+0F, -254L },
    { 0x0p+0F, -127L },
    { 0x0p+0F, -1L },
    { 0x0p+0F, 0L },
    { 0x0p+0F, 1L },
    { 0x0p+0F, 127L },
    { 0x0p+0F, 254L },
    { -0x0p+0F, -254L },
    { -0x0p+0F, -127L },
    { -0x0p+0F, -1L },
    { -0x0p+0F, 0L },
    { -0x0p+0F, 1L },
    { -0x0p+0F, 127L },
    { -0x0p+0F, 254L },
    { 0x1p+0F, -254L },
    { 0x1p+0F, -127L },
    { 0x1p+0F, -1L },
    { 0x1p+0F, 0L },
    { 0x1p+0F, 1L },
    { 0x1p+0F, 127L },
    { 0x1p+0F, 254L },
    { -0x1p+0F, -254L },
    { -0x1p+0F, -127L },
    { -0x1p+0F, -1L },
    { -0x1p+0F, 0L },
    { -0x1p+0F, 1L },
    { -0x1p+0F, 127L },
    { -0x1p+0F, 254L },
    { 0x1p-126F, -254L },
    { 0x1p-126F, -127L },
    { 0x1p-126F, -1L },
    { 0x1p-126F, 0L },
    { 0x1p-126F, 1L },
    { 0x1p-126F, 127L },
    { 0x1p-126F, 254L },
    { -0x1p-126F, -254L },
    { -0x1p-126F, -127L },
    { -0x1p-126F, -1L },
    { -0x1p-126F, 0L },
    { -0x1p-126F, 1L },
    { -0x1p-126F, 127L },
    { -0x1p-126F, 254L },
    { 0x1.fffffep+127F, -254L },
    { 0x1.fffffep+127F, -127L },
    { 0x1.fffffep+127F, -1L },
    { 0x1.fffffep+127F, 0L },
    { 0x1.fffffep+127F, 1L },
    { 0x1.fffffep+127F, 127L },
    { 0x1.fffffep+127F, 254L },
    { -0x1.fffffep+127F, -254L },
    { -0x1.fffffep+127F, -127L },
    { -0x1.fffffep+127F, -1L },
    { -0x1.fffffep+127F, 0L },
    { -0x1.fffffep+127F, 1L },
    { -0x1.fffffep+127F, 127L },
    { -0x1.fffffep+127F, 254L },
    { INF, -254L },
    { INF, -127L },
    { INF, -1L },
    { INF, 0L },
    { INF, 1L },
    { INF, 127L },
    { INF, 254L },
    { -INF, -254L },
    { -INF, -127L },
    { -INF, -1L },
    { -INF, 0L },
    { -INF, 1L },
    { -INF, 127L },
    { -INF, 254L },
    { NAN, -254L },
    { NAN, -127L },
    { NAN, -1L },
    { NAN, 0L },
    { NAN, 1L },
    { NAN, 127L },
    { NAN, 254L },
    { NAN, -254L },
    { NAN, -127L },
    { NAN, -1L },
    { NAN, 0L },
    { NAN, 1L },
    { NAN, 127L },
    { NAN, 254L },
    { 0x1.ccccccp-1F, -254L },
    { 0x1.ccccccp-1F, -127L },
    { 0x1.ccccccp-1F, -1L },
    { 0x1.ccccccp-1F, 0L },
    { 0x1.ccccccp-1F, 1L },
    { 0x1.ccccccp-1F, 127L },
    { 0x1.ccccccp-1F, 254L },
    { 0x1.19999ap+0F, -254L },
    { 0x1.19999ap+0F, -127L },
    { 0x1.19999ap+0F, -1L },
    { 0x1.19999ap+0F, 0L },
    { 0x1.19999ap+0F, 1L },
    { 0x1.19999ap+0F, 127L },
    { 0x1.19999ap+0F, 254L },
    { -0x1.ccccccp-1F, -254L },
    { -0x1.ccccccp-1F, -127L },
    { -0x1.ccccccp-1F, -1L },
    { -0x1.ccccccp-1F, 0L },
    { -0x1.ccccccp-1F, 1L },
    { -0x1.ccccccp-1F, 127L },
    { -0x1.ccccccp-1F, 254L },
    { -0x1.19999ap+0F, -254L },
    { -0x1.19999ap+0F, -127L },
    { -0x1.19999ap+0F, -1L },
    { -0x1.19999ap+0F, 0L },
    { -0x1.19999ap+0F, 1L },
    { -0x1.19999ap+0F, 127L },
    { -0x1.19999ap+0F, 254L },

  };
  static struct {
    float e;

  } expected[] = {
    { 0x0p+0F } ,
    { 0x0p+0F } ,
    { 0x0p+0F } ,
    { 0x0p+0F } ,
    { 0x0p+0F } ,
    { 0x0p+0F } ,
    { 0x0p+0F } ,
    { -0x0p+0F } ,
    { -0x0p+0F } ,
    { -0x0p+0F } ,
    { -0x0p+0F } ,
    { -0x0p+0F } ,
    { -0x0p+0F } ,
    { -0x0p+0F } ,
    { 0x0p+0F } ,
    { 0x1p-127F } ,
    { 0x1p-1F } ,
    { 0x1p+0F } ,
    { 0x1p+1F } ,
    { 0x1p+127F } ,
    { INF } ,
    { -0x0p+0F } ,
    { -0x1p-127F } ,
    { -0x1p-1F } ,
    { -0x1p+0F } ,
    { -0x1p+1F } ,
    { -0x1p+127F } ,
    { -INF } ,
    { 0x0p+0F } ,
    { 0x0p+0F } ,
    { 0x1p-127F } ,
    { 0x1p-126F } ,
    { 0x1p-125F } ,
    { 0x1p+1F } ,
    { INF } ,
    { -0x0p+0F } ,
    { -0x0p+0F } ,
    { -0x1p-127F } ,
    { -0x1p-126F } ,
    { -0x1p-125F } ,
    { -0x1p+1F } ,
    { -INF } ,
    { 0x1p-126F } ,
    { 0x1.fffffep+0F } ,
    { 0x1.fffffep+126F } ,
    { 0x1.fffffep+127F } ,
    { INF } ,
    { INF } ,
    { INF } ,
    { -0x1p-126F } ,
    { -0x1.fffffep+0F } ,
    { -0x1.fffffep+126F } ,
    { -0x1.fffffep+127F } ,
    { -INF } ,
    { -INF } ,
    { -INF } ,
    { INF } ,
    { INF } ,
    { INF } ,
    { INF } ,
    { INF } ,
    { INF } ,
    { INF } ,
    { -INF } ,
    { -INF } ,
    { -INF } ,
    { -INF } ,
    { -INF } ,
    { -INF } ,
    { -INF } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { NAN } ,
    { 0x0p+0F } ,
    { 0x1.ccccdp-128F } ,
    { 0x1.ccccccp-2F } ,
    { 0x1.ccccccp-1F } ,
    { 0x1.ccccccp+0F } ,
    { 0x1.ccccccp+126F } ,
    { INF } ,
    { 0x0p+0F } ,
    { 0x1.199998p-127F } ,
    { 0x1.19999ap-1F } ,
    { 0x1.19999ap+0F } ,
    { 0x1.19999ap+1F } ,
    { 0x1.19999ap+127F } ,
    { INF } ,
    { -0x0p+0F } ,
    { -0x1.ccccdp-128F } ,
    { -0x1.ccccccp-2F } ,
    { -0x1.ccccccp-1F } ,
    { -0x1.ccccccp+0F } ,
    { -0x1.ccccccp+126F } ,
    { -INF } ,
    { -0x0p+0F } ,
    { -0x1.199998p-127F } ,
    { -0x1.19999ap-1F } ,
    { -0x1.19999ap+0F } ,
    { -0x1.19999ap+1F } ,
    { -0x1.19999ap+127F } ,
    { -INF } ,

  };
  int i;
  int ok = 1;
  for (i = 0; i < sizeof(args) / sizeof(args[0]); ++i) {

    float result = scalblnf(args[i].a

                                , args[i].a2


                                );

    if (!CMP(FLOAT, result, expected[i].e)

        ) {
      fprintf(stderr,
              "scalblnf(%.8eF"

              ", %ldL"


              ")\n",
              args[i].a

              , args[i].a2

              );

      fprintf(stderr,
              "returned: %.8eF, expected: %.8eF\n",
              result,
              expected[i].e
              );

      ok = 0;
    }
  }
  TEST(ok);
}
