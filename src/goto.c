#include <stdio.h>

int main(void) {

  goto yay;

  printf("hello\n");

yay:
  printf("world\n");

  return 0;
}