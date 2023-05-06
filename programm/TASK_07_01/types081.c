#include <stdio.h>

int main(int argc, char **argv) { 
  int i;
  int sz0, sz1, sz2, sz3, sz4, sz5, sz6;

  // вычисляем размер в байтах переменной i 
  sz0 = sizeof(i);

  // вычисляем размер в байтах типа int 
  sz1 = sizeof(int);
  sz2 = sizeof(signed char);
  sz3 = sizeof(unsigned char);
  sz4 = sizeof(short int);
  sz5 = sizeof(long int);
  sz6 = sizeof(long long int);

  printf("sz0 = %d\n", sz0);
  printf("sz1 = %d\n", sz1);
  printf("sz2 = %d\n", sz2);
  printf("sz3 = %d\n", sz3);
  printf("sz4 = %d\n", sz4);
  printf("sz5 = %d\n", sz5);
  printf("sz6 = %d\n", sz6);

  return 0; 
}