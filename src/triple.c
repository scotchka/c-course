#include <stdio.h>

void triple(int *p) { 
    *p = *p * 3;
}

int main(void) {
  int x = 5;
  triple(&x);
  printf("%d\n", x);

  return 0;
}