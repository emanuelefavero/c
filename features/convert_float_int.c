#include <math.h>
#include <stdio.h>

int main() {

  // * Convert float to int
  float num = 2.5;
  int a = (int)num;
  int b = floor(num);
  int c = ceil(num);
  int d = round(num);

  printf("%d \n", a); // 2
  printf("%d \n", b); // 2
  printf("%d \n", c); // 3
  printf("%d \n", d); // 3

  // * Convert int to float
  int num2 = 2;
  float e = (float)num2;

  printf("%f \n", e); // 2.000000

  return 0;
}
