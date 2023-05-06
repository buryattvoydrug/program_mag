#include <stdio.h>

#define FALSE 0 
#define TRUE (!FALSE)

int main(int argc, char *argv[]) {
  float a[] = {9.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 1.0f, 0.0f};

  float tmp;
  unsigned int i, j;
  char flag;
  int len = sizeof(a) / sizeof(float);
  
  // Выводи массив
  for (i = 0; i < len; i++) {
    printf("%.3f\n", a[i]); 
    }
  printf("\n");
  
  // Пока массив не отсортирован 
  do {
    flag = FALSE;
  // Проходим по массиву. Если следующий элемент больше
  // предыдущего, то меняем их местами и по новой проверяем // массив
    for (i = 1; i < len; i++) {
      if (a[i] > a[i - 1]) { 
        tmp = a[i];
        a[i] = a[i - 1]; 
        a[i - 1] = tmp; 
        flag = TRUE;
      } 
    }
  } while(flag == TRUE);

  // Выводим отсортированный массив 
  for (i = 0; i <len; i++) {
    printf("%.3f\n", a[i]); 
  }
  
  return 0; 
}
