#include <stdio.h>

int fib(int n) {
  if (n <= 2)
    return 1;

  return fib(n - 1) + fib(n - 2);
}

int main(void) {
  int n = 1;

  while (n <= 10) {
    printf("%d ", fib(n));
    n++;
  }
  printf("\n");
}