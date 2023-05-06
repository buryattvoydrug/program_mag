#include <stdio.h>
// Определяем константу MY_DEF 
#define MY_DEF

int main(int argc, char *argv[]){ 
  #ifdef MY_DEF
    // Если MY_DEF определена, то препроцессор выбирает этот код
    printf("Hello world! MY_DEF is DEFINED.\n"); 
  #else
    printf("Hello world! MY_DEF is UNDEFINED.\n"); 
  #endif
  return 0; 
} 