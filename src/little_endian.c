#include <stdio.h>

int main(void) {

  unsigned long n = 256 * 256;
  unsigned char *p = (unsigned char *)&n;

  int i;
  for (i = 0; i < sizeof n; i++) {
    printf("%d ", *(p + i));
  }

  printf("\n");
  return 0;
}