#include <stdio.h>
#include <string.h>

int main() {

  // String concatenation
  char str[20] = "Hello";
  strcat(str, " World");

  printf("%s \n", str);

  return 0;
}

// TIP: Use `cpace main.c` to run the code with auto compile
