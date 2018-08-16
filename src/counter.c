#include <stdio.h>

int counter() {
  static int n = 0;
  ++n;
  return n;
}

int main(void) {
  printf("%d\n", counter());
  printf("%d\n", counter());
  printf("%d\n", counter());

  return 0;
}