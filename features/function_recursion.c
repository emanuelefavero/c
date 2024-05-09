#include <stdio.h>

// * Recursion
int factorial(int num) {
  // Base case
  if (num == 1) {
    return 1;
  }

  return num * factorial(num - 1);
}

int main(void) {
  int a = 4;

  printf("The factorial of %d is %d \n", a, factorial(a)); // 24

  return 0;
}

// TIP: THE FACTORIAL OF 4 IS 4 * 3 * 2 * 1 = 24

// The factorial of 5 is 120
