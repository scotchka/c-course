#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  static int acc = 1;

  if (argc < 2) {
    printf("error: need argument\n");
    return 0;
  }

  int n = atoi(argv[1]);

  if (n <= 1) {
    printf("%d\n", acc);
    return 1;
  } else {
    acc = n * acc;
    sprintf(argv[1], "%d", --n);
    return main(argc, argv);
  }
}