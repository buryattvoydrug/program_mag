#include <stdio.h>

#define F(X) (X*X) // Опишем функцию при помощи макроса

int main(int argc, char **argv) {
  double x0 = -1.0; // Левая граница
  double x1 = 1.0; // Правая граница
  double h = 0.1; // Шаг по x
  double x = x0; // Текущее значение x 
  double f = F(x0); // Текущее значение функции

  // Пока x меньше x1 "вертимся" в цикле 
  while(x < x1){
    f = F(x);
    printf("f(%f) = %f\n", x, f);
    x = x + h; // увеличиваем x на h
  }

  // do {
  //   f = F(x);
  //   printf("f(%f) = %f\n", x, f);
  //   x = x + h; // увеличиваем x на h
  // } while(x < x1);

  // for (; x < x1; x += h) {
  //   float f = F(x);
  //   printf("f(%f) = %f\n", x, f);
  // }
  
  return 0; 
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// double f(double x) {
//     return pow(x, 3);
// }

// double integrate(double a, double b, int n) {
//     double h = (b - a) / n;
//     double sum = 0.0;
//     for (int i = 0; i < n; i++) {
//         double x = a + i * h;
//         sum += f(x) * h;
//     }
//     return sum;
// }

// int main(int argc, char const *argv[]) {
//     if (argc != 3) {
//         printf("Usage: %s a b\n", argv[0]);
//         return 1;
//     }
//     double a = atof(argv[1]);
//     double b = atof(argv[2]);
//     int n = 1000; // количество разбиений интервала (можно настраивать)
//     double result = integrate(a, b, n);
//     printf("Интеграл функции y=x^3 от %.2f до %.2f равен %.4f\n", a, b, result);
//     return 0;
// }