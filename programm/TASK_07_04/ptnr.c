#include <stdio.h>

int main(int argc, char **argv) {
  int a = 5; // Инициализируем переменную типа int
  int *ptr = 0x0; // Инициализируем переменную указатель // на переменную типа int
  
  printf("1. ptr = 0x%X\n",ptr); // Выводим на экран текущее значение // указателя (он равен 0x0)
  ptr = &a; // Присваиваем указателю адрес, по которому лежит // переменная a
  
  printf("2. ptr = 0x%X\n", ptr); // Выводим на экран текущее значение // указателя
  printf("3. *ptr = %d\n", ptr); // Выводим на экран значение, которое //лежит по адресу ptr
  
  a++; // Изменим значение переменной a
  printf("4. *ptr = %d\n", ptr); // Выводим на экран значение, которое
  //лежит по адресу ptr
  return 0; 
}