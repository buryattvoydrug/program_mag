#include <stdio.h>

int main(int argc, char **argv) { 
  int var = 5;
  printf("1. var = %d\n", var);
       
  {
    int var = 500;
    printf("1. var = %d\n", var); 
  }

  printf("1. var = %d\n", var);

  return 0; 
}