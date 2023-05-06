#include <stdio.h>

#define PASSWD 1234 // Константа с паролем

int main(int argc, char *argv[]) {
  int passwd = 4321;
  // int passwd;

  // scanf("%d", &passwd);
  // &passwd указатель на переменную passwd

  // Сравниваем значение переменное passwd c ожидаемым значением, 
  // заданным макроопределением PASSWD
  if(passwd == PASSWD){
    printf("Welcome\n");
  
    return 0; 
  }
  
  printf("Access denied!\n");
  
  return 1; 
  }