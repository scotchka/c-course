#include <stdio.h>

void string_copy(char *source, char *target) {
  while ((*source++ = *target++))
    ;
}

int main(void) {
  char original[] = "hello";
  char copy[6];
  string_copy(copy, original);
  printf("%s\n", copy);
  return 0;
}