#include <stdio.h>

int main() {

  int a = 10;
  int *p = &a;
  int **q = &p;

  printf("a value: %d\n", a);        // 10
  printf("a address: %p\n", &a);     // 0x7ffeeb1b3a3c
  printf("p value: %p\n", p);        // 0x7ffeeb1b3a3c
  printf("p address: %p\n", &p);     // 0x7ffeeb1b3a40
  printf("q value: %p\n", q);        // 0x7ffeeb1b3a40
  printf("q address: %p\n", &q);     // 0x7ffeeb1b3a48
  printf("value at *p: %d\n", *p);   // 10
  printf("value at *q: %p\n", *q);   // 0x7ffeeb1b3a3c
  printf("value at **q: %d\n", **q); // 10

  return 0;
}

// TIP: Use `cpace 0.js` to run the code like nodemon
