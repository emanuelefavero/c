#include <stdio.h>
#include <stdlib.h>

int main() {
  // * Dynamic memory - array
  // Allocation with hard error handling (exit on failure)
  int size = 3;
  int *array = malloc(size * sizeof(int));
  if (array == NULL) {
    printf("Memory allocation failed \n");
    return 1;
  }

  // Populate the array
  array[0] = 1;
  array[1] = 2;
  array[2] = 3;

  // Reallocation with soft error handling (print message on failure)
  size = 5;
  array = realloc(array, size * sizeof(int));
  if (array == NULL) {
    printf("Memory reallocation failed \n");
  } else {
    printf("Memory reallocation successful \n");
    array[3] = 4;
    array[4] = 5;
  }

  // Access the array
  printf("%d \n", array[4]); // 5

  // Deallocate
  free(array);
  array = NULL;

  return 0;
}
