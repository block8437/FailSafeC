#define TEST_FUNC exp2

#define ARG_TYPE DOUBLE
#define RET_TYPE DOUBLE

#define ARGS { \
  { 0.0 }, \
  { -0.0 }, \
  { 1.0 }, \
  { -1.0 }, \
  { DBL_MIN }, \
  { -DBL_MIN }, \
  { DBL_MAX }, \
  { -DBL_MAX }, \
  { 1.0/0.0 }, \
  { -1.0/0.0 }, \
  { nan("") }, \
  { -nan("") }, \
  { 0.9 }, \
  { 1.1 }, \
  { -0.9 }, \
  { -1.1 }, \
}
