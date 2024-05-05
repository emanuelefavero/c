#include <stdio.h>

int main() {

  // Copy the value of x to y using pointers
  int x = 10;
  int *pX = &x;
  int y = *pX;

  printf("x: %d, y: %d\n", x, y); // x: 10, y: 10

  // Copy the value of a to b without using pointers
  int a = 20;
  int b = a;

  printf("a: %d, b: %d\n", a, b); // a: 20, b: 20

  /*
  TIP: WHEN TO USE POINTERS:

  - When you need to modify the original variable through the function calls.
  - When managing data structures that require indirect access (like linked
  lists, trees, etc.). When dealing with arrays or strings where pointer
  arithmetic simplifies traversal and manipulation. When to Avoid Pointers:

  WHEN TO AVOID POINTERS:
  - For simple value copying where the additional complexity of pointers is
  unnecessary.
  - In situations where performance is critical, and the overhead of
  pointer dereferencing could be a concern.
  */

  return 0;
}
