#include <stdio.h>

int main(void) {
  FILE *fp = fopen("open_file.c", "r");

  int c;
  while ((c = getc(fp)) != EOF) {
    putc(c, stdout);
  }
  printf("\n");
  fclose(fp);
  return 0;
}