#include <stdio.h>

int main() {
  char *s = "HI!";

  // POINTER ARITHMETIC
  printf("%c \n", *s);
  printf("%c \n", *(s+1));
  printf("%c \n", *(s+2));

  // OUT OF BOUNDS - SEGMENTATION FAULT
  printf("%c \n", *(s+5000000));

  return 0;
}
