#include <stdio.h>

struct cat {
  char *name;
  char *greeting;
  int hunger;
};

void speak(struct cat *cp) {
  printf("%s, I am %s. My hunger is %d.\n",
          (*cp).greeting, cp->name, cp->hunger);
}

int main(void) {
  struct cat grumpy = {"Grumpy", "Meh", 80};
  struct cat *cp = &grumpy;

  speak(cp);

  return 0;
}
