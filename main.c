#include <stdio.h>

// c string standard library
#include <string.h>

int main() {
  // * strlen() - get string length
  char name[] = "john";
  printf("string length is %lu \n", strlen(name));

  // * strcat() - concatenate strings
  char a[20] = "hello ";
  char b[20] = "how are you";

  // dest, source
  strcat(a, b);

  printf("%s \n", a); // hello how are you
  printf("%s \n", b); // how are you, a is modified, b is not

  // * strcpy() - copy string to another
  char c[20] = "hey";
  char d[20];

  // dest, source
  strcpy(d, c);

  printf("%s \n", d); // hey

  // * strcmp() - compare strings
  char str1[] = "hello";
  char str2[] = "hello";

  // ? strcmp() returns 0 if strings are equal and non-zero if not
  if (strcmp(str1, str2) == 0) {
    printf("strings are equal \n");
  } else {
    printf("strings are not equal \n");
  }

  int result = strcmp(str1, str2);
  printf("result is %d \n", result);

  return 0;
}

// TIP: Use `cpace main.c` to run the code with auto compile
