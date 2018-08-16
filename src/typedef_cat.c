#include <stdio.h>

typedef struct cat {
  char *name;
  char *greeting;
  int hunger;
} Cat;

void speak(Cat *cp) {
  printf("%s, I am %s. My hunger is %d.\n",
        (*cp).greeting, cp->name, cp->hunger);
}

int main(void) {
  Cat grumpy = {"Grumpy", "Meh", 80};
  Cat *cp = &grumpy;

  speak(cp);

  return 0;
}
