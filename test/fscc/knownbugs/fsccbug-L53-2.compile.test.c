#ifdef __GNUC__
#define __fsc_attribute__(x)
#endif

struct __fsc_attribute__((named "test_foo")) foo *func(void);

struct __fsc_attribute__((named "test_foo")) foo {
  int n;
} x;

int main(int argc, char **argv){
  return 0;
}
