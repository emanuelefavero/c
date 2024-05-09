#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* MATH LIBRARY
NOTE: The functions of the math library typically return float values, double
values or same as the input type
// TIP: As a rule of thumb the mathematical functions that operate on floating
point numbers are in math.h, and the ones that operate on integers are in
stdlib.h (like abs)
*/

int main() {

  // * Square root
  printf("%.1f \n", sqrt(16)); // 4.0

  // * Round a number
  printf("%.1f \n", round(3.4)); // 3.0
  printf("%.1f \n", round(3.5)); // 4.0

  printf("%.1f \n", ceil(3.4));  // 4.0
  printf("%.1f \n", floor(3.5)); // 3.0

  // * Power
  printf("%d \n", ((int)pow(2, 3))); // 8

  // * Absolute value
  printf("%d \n", abs(-4)); // 4

  // * Random number
  printf("%d \n", rand() % 10);       // 0-9
  printf("%d \n", (rand() % 10) + 1); // 1-10

  // * Constants
  printf("%.2f \n", M_PI); // 3.14
  printf("%.2f \n", M_E);  // 2.72

  // * Other functions
  printf("%.2f \n", exp(1));    // 2.72
  printf("%.2f \n", log(2));    // 0.69
  printf("%.2f \n", log10(10)); // 1.00
  printf("%.2f \n", sin(180));  // -0.80
  printf("%.2f \n", cos(180));  // -0.60
  printf("%.2f \n", tan(45));   // 1.62
  printf("%.2f \n", asin(1));   // 1.57
  printf("%.2f \n", acos(1));   // 0.00
  printf("%.2f \n", atan(1));   // 0.79
  printf("%.1f \n", cbrt(9));   // 2.1

  return 0;
}
