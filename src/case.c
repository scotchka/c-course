#include <stdio.h>

int main(void) {
  int n = 2;

  switch (n) {
  case 1:
    printf("one\n");
  case 2:
    printf("two\n");
  case 3:
    printf("three\n");
    break;
  case 4:
    printf("four\n");
  }

  return 0;
}