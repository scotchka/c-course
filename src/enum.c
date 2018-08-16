#include <stdio.h>

int main(void) {
  enum fruits { APPLE, BERRY, CHERRY };
  printf("%d %d %d\n", APPLE, BERRY, CHERRY);
  return 0;
}