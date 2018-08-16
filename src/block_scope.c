#include <stdio.h>

int main(void) {
  int x = 2;

  if (1) {
    int x = 3;
    printf("%d\n", x);
  }

  printf("%d\n", x);
  return 0;
}