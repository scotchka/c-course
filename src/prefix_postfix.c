#include <stdio.h>

int main(void) {
  char x = 'a';

  printf("%c\n", ++x);
  printf("%c\n", x);

  printf("%c\n", x++);
  printf("%c\n", x);

  return 0;
}
