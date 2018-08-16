#include <stdio.h>

void print_array(int *p, int len) {
  int i;
  for (i = 0; i < len; ++i)
    printf("%d ", p[i]);
  printf("\n");
}

int main(void) {
  int arr[] = {5, 4, 3, 2, 1};
  print_array(arr, 5);

  return 0;
}