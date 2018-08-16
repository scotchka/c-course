#include <stdio.h>

int main(void) {
  int arr[] = {5, 4, 3, 2, 1};
  int *p;

  p = &arr[0];
  printf("%d\n", *(p + 2));

  p = arr;
  printf("%d\n", *(p + 2));
  printf("%d\n", *(arr + 2));
  printf("%d\n", p[2]);

  return 0;
}