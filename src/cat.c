#include <stdio.h>

int main(void) {

  struct cat {
    char *name;
    char *greeting;
    int hunger;
  } grumpy;

  grumpy.name = "Grumpy";
  grumpy.greeting = "Meh";
  grumpy.hunger = 80;

  printf("%s, I am %s. My hunger is %d.\n",
          grumpy.greeting, grumpy.name, grumpy.hunger);

  struct cat bub = {"Lil Bub", "Meow", 50};
  printf("%s, I am %s. My hunger is %d.\n",
          bub.greeting, bub.name, bub.hunger);

  return 0;
}