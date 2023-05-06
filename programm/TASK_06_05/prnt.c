#include <stdio.h> 
// В файле stdio.h задекларирована функция printf()

int main(int argc, char **argv) {
  int a = 5; 
  // Заводим локальную переменную типа int, значение
  // которой далее выведем на экран
  float f = 1.2345;

  printf("a = %d\n", a);
  printf("f = %f\n", f);

  printf("f = %10.5f\n", f);

  printf("a = %d, \t f = %10.5f\n", a, f);

  printf("-1 в восьмиричном -> %o\n", -1);
  printf("-1 в шестнадцатеричном -> %u\n", -1);

  return 0;
}