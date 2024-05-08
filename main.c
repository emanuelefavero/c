#include <stdio.h>

int main() {
  int n = -28;

  // * If else
  if (n > 0 && n <= 100) {
    printf("n is a number between 1 and 100 \n");
  } else if (n <= 0 && n >= -100) {
    printf("n is a number between -100 and 0 \n");
  } else {
    printf("n is not a number between -100 and 100 \n");
  }

  if (!(n == 4)) {
    printf("n is NOT equal to 4 \n");
  }

  // * Ternary operator
  int x = 5;

  (x == 5) ? printf("x is equal to 5 \n") : printf("x is NOT equal to 5 \n");

  // * Check if x is even or odd
  (x % 2 == 0) ? printf("x is even \n") : printf("x is odd \n");

  return 0;
}

// TIP: Use `cpace main.c` to run the code with auto compile
