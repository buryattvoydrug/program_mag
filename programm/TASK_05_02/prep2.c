#include <stdio.h>
// Определяем константу HELLO_STR 

int main(int argc, char *argv[]){ 
  #ifdef HELLO_STR
    printf(HELLO_STR);
  #endif
  return 0; 
}