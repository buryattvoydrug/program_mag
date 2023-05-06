#include <stdio.h>
// math.h - заголовочный файл стандартной библиотеки простых
// математических операций. В этом заголовочном фале задекларирована // функция sqrtf()
#include <math.h>
// Макрос HYPOTENUSE с двумя аргументами для вычисления гипотенузы // прямоугольного треугольника
#define HYPOTENUSE(X, Y) sqrtf(X*X + Y*Y)

int main(int argc, char *argv[]){
  float x = 3.0;
  float y = 4.0;
  // Вычисляем значение гипотенузы при помощи макроса 
  float hyp = HYPOTENUSE(x, y);
  // Выводим на экран вычисленное значение
  // Синтаксис printf. Вместо %f будет подставлен аргумент hyp // типа float
  printf("hypotenuse = %f\n", hyp);
  return 0; 
}