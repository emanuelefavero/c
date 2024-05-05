#include <stdio.h>

int main() {
  // TIP: sizeof(array) / sizeof(array[0]) is a common way to get the size of an array in c. It works because sizeof(array) returns the size of the array in bytes, and sizeof(array[0]) returns the size of the first element of the array in bytes. Dividing the two gives you the number of elements in the array

  int array[] = {1, 2, 3};

  int size = sizeof(array) / sizeof(array[0]);

  printf("%i\n", size); // 3

  return 0;
  
}
