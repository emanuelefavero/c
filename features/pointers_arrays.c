#include <stdio.h>

int main(void) {
  // * Pointers and Arrays
  // Pointers can be used to access elements of an array

  // Before we start, let's print the memory address of each element in an array
  int a[3] = {1, 2, 3};
  for (int i = 0; i < 3; i++) {
    printf("%p \n", &a[i]);
  }

  /*
   * Output:
   * 0x7ffeeb1f1a50
   * 0x7ffeeb1f1a54
   * 0x7ffeeb1f1a58
   */

  // NOTE: The memory address of each element is 4 bytes apart (see the last 2
  // digits of the memory address) since each element is an integer (4 bytes)

  // In C, the name of an array, is a pointer to the first element of the array
  printf("%p \n", a);     // 0x7ffeeb1f1a50
  printf("%p \n", &a[0]); // 0x7ffeeb1f1a50

  // So we can work with pointers to access elements of an array
  int *p = a;
  printf("%d \n", *p); // 1

  // We can also use pointer arithmetic to access other elements
  printf("%d \n", *(p + 1)); // 2
  printf("%d \n", *(p + 2)); // 3

  // * Loop through an array using pointers
  int b[3] = {4, 5, 6};
  int *pb = b;

  for (int i = 0; i < 3; i++) {
    printf("%d \n", *(pb + i)); // 4 5 6
  }

  // * Change the value of an element using pointers
  int c[3] = {7, 8, 9};
  int *pc = c;

  // change the value of the first element
  *pc = 10;
  printf("%d \n", c[0]); // 10

  // change the value of the second element
  *(pc + 1) = 11;
  printf("%d \n", c[1]); // 11

  // TIP: Using pointers can be more efficient than using array indexes for
  // large arrays and 2D arrays

  // TIP: You can also use pointers to access strings
  char name[] = "John";
  char *pname = name;

  printf("%c \n", *pname);       // J
  printf("%c \n", *(pname + 1)); // o

  // * Pointers and 2D arrays
  int d[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int *pd = d[0];

  for (int i = 0; i < 6; i++) {
    printf("%d ", *(pd + i)); // 1 2 3 4 5 6
  }

  printf("\n");

  return 0;
}
