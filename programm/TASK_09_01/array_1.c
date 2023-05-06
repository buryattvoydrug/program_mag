#include <stdio.h>
#include<math.h>

int main(int argc, char *argv[]) { 
  int a[5] = {1, 2, 3, 4, 5};
  int la, le, i;
  
  // Вычислим размер элемента массива 
  le = sizeof(a[0]);
  printf("element size = %d\n", le);
  
  // Длина массива может быть вычислена функцией sizeof() 
  la = sizeof(a) / le;
  printf("Array length = %d\n", la);

  // Выведем на экран все элементы массива 
  for(i = 0; i < la; i++){
    printf("a[%d]= %d\n", i, a[i]); 
  }

  float sum = 0, sumSq = 0;
  for(int i=0; i < la; i++){
      sum += a[i];
      sumSq += pow(a[i], 2);
  }
  float mean = sum / la;
  float variance = (sumSq / la) - pow(mean, 2);
  
  printf("среднее = %f\n", mean);
  printf("дисперсия = %f\n", variance);
  


  return 0; 
}
