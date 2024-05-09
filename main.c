#include <stdio.h>

// * Declare (prototype)
void hello();
int sum(int x, int y);

int main() {
  // * Call
  hello(); // Hello World
  int a = 3;
  int b = 2;
  printf("%d \n", sum(a, b)); // 5

  return 0;
}

// * Define
void hello() { printf("Hello World \n"); }
int sum(int x, int y) { return x + y; }

/*
TIP: You could also just define the functions before the main function and avoid
the need to declare them. It is fine for small projects
TIP: In bigger projects, it is better to declare the functions in a header file.
@see functions_headers.c
*/

// TIP: Use `cpace main.c` to run the code with auto compile
