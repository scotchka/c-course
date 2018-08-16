#include <stdio.h>

int add_two(int n) { return n + 2; }

int triple(int n) { return n * 3; }

int main(void) {

  int (*fp)(int);

  fp = &add_two;
  printf("%d\n", (*fp)(42));

  fp = triple;
  printf("%d\n", fp(42));

  return 0;
}