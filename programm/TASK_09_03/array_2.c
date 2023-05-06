#include <stdio.h>

int main(int argc, char *argv[]) {
  // Создадим и проанализируем трехмерный массив 
  int A[2][3][4] = {
    {
      {111, 112, 113, 114}, 
      {121, 122, 123, 124}, 
      {131, 132, 133, 134}
    }, 
    {
      {211, 212, 213, 214}, 
      {221, 222, 223, 224}, 
      {231, 232, 233, 234}
    } 
  };

  // Определим размер и вычислим размеренности массива 
  int size = sizeof(A);
  int d1 = sizeof(A) / sizeof(A[0]);
  int d2 = sizeof(A[0]) / sizeof(A[0][0]);
  int d3 = sizeof(A[0][0]) / sizeof(A[0][0][0]);
  
  printf("size = %d, d1 = %d, d2 = %d, d3 = %d\n", size, d1, d2, d3);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 4; k++) {
        printf("%d ", A[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0; 
}