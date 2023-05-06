#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 
  int day = 5;
  // int day = atoi(argv[1]);
  
  // scanf("%d", &day);

  switch (day) {
  case 0:
    printf("Sunday\n");
    break;
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  default:
    printf("Saturday\n"); 
  }
  
  return 0; 
}
