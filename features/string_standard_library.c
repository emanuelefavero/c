#include <stdio.h>

// c string standard library
#include <string.h>

int main() {
  // strlen()
  char name[] = "john";
  printf("string length is %d \n", strlen(name));

  // strcat() - concatenate strings
  char a[20] = "hello ";
  char b[20] = "how are you";
  strcat(a, b);
  printf("%s \n", a); // hello how are you
  printf("%s \n", b); // how are you, a is modified, b is not

  // strcpy() - copy string to another
  char c[20] = "hey";
  char d[20];
  // dest, source
  strcpy(d, c);
  printf("%s \n", d); // hey

  return 0;
}
