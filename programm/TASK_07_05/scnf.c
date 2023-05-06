#include <stdio.h> // В файле stdio.h задекларирована функция scanf()
int main(int argc, char **argv) {
  
  double i; // Заводим локальную переменную типа int 
  int ret;
  ret = scanf("%lf", &i); // Считываем из стандартного потока переменную 
  // типа double. Если все прошло успешно, то
  // scanf() вернет 1 (одно присвоение), если // нет, то ноль
  if(ret == 1){
    printf("i = %lf\n", i); // Выводим на экран считанное значение
  } else { 
    printf("Ошибка!\n");
    return 1; 
  }
  
  return 0; 
}