#include <stdio.h>
#include "glbl.h"

extern int glb_var;

int main(int argc, char **argv) {
  printf("1. glb_var = %d\n", glb_var);
  
  // вызываем функцию увеличивающую glb_var на единицу.
  printf("2. glb_var = %d\n", glb_var);
  
  int tmp = my_inc(3);
  printf("%d\n", tmp);

  return 0; 
}