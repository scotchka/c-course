#include <stdio.h>
#include <stdlib.h>

typedef struct cat {
  char *name;
  char *greeting;
  int hunger;
} Cat;

void speak(Cat *cp) {
  printf("%s, I am %s. My hunger is %d.\n",
          cp->greeting, cp->name, cp->hunger);
}
int main(void) {
  int i; for (i = 0; i < 3; i++) {
    Cat *cp;
    cp = (Cat *)malloc(sizeof(Cat));
    cp->name = "Grumpy"; cp->greeting = "Meh";
    cp->hunger = 15;

    speak(cp);
    free(cp);
  }
  return 0;
}
