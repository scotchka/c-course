#include <stdio.h>
#include <unistd.h>

int main(void) {
  char buffer[BUFSIZ];
  int n;

  while ((n = read(0, buffer, BUFSIZ)) > 0)
    write(1, buffer, n);

  return 0;
}