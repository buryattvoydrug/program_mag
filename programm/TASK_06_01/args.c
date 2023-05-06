#include <stdio.h>

int main(int argc, char **argv) { 
  int i;
  // Выводим на экран число аргументов, передаваемых программе 
  printf("%d", argc);
  
  // В цикле выводим все аргументы, передаваемые программе 
  for (i=0; i < argc; i++){
    printf("%s", argv[i]); 
  }
  return 0; 
}