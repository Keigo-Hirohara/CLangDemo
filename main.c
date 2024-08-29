#include <stdio.h>

struct user
{
  char name[8];
  int age;
  int *height;
};

int main(void)
{
  int height = 180;
  struct user hirokei = {"hirokei", 21, &height};

  struct user *pointerHirokei = &hirokei;

  printf("pointerHirokei.Name: %s\n", (*pointerHirokei).name);
  printf("pointerHirokei.Name use arrow: %s\n", pointerHirokei->name);

  printf("pointerHirokei.Height: %d\n", *(*pointerHirokei).height);
  printf("pointerHirokei.Height use arrow: %d\n", *pointerHirokei->height);

  return 0;
}