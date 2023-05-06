#include <stdio.h> 
#include <math.h> 
#include "prep5.h"

int main(int argc, char *argv[]){ 
  float x = 3.0;
  float y = 4.0;
  float hyp = HYPOTENUSE(x, y);
  printf("hypotenuse = %f\n", hyp);
  return 0; 
}
