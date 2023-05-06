#include <stdio.h>
// Включаем собственный заголовочный файл (на жаргоне - хидер) prep4.h // в котором определим макрос HYPOTENUSE
#include <math.h>
#include "prep4.h"

int main(int argc, char *argv[]){ 
  float x = 3.0;
  float y = 4.0;
  float hyp = HYPOTENUSE(x, y);
  printf("hypotenuse = %f\n", hyp);
  return 0; 
}