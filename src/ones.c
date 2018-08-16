#include <stdio.h>

int main(void) {
  int i = 0, ones[3];

  while (i < 3) {
    ones[i++] = 1; // ++i does not work
  }

  for (i = 0; i < 3; i++) {
    printf("%d: %d\n", i, ones[i]);
  }

  return 0;
}