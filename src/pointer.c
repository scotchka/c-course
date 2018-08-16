#include <stdio.h>

int main(void) {
  int x;
  int *p;

  p = &x;
  x = 42;

  printf("address %p contains %d\n", p, *p);
  return 0;
}