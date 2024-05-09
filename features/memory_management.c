#include <stdio.h>
#include <stdlib.h>

int main() {
  // * MEMORY MANAGEMENT
  // * Static memory
  int users[3] = {1, 2, 3};
  printf("%d \n", users[0]); // 1

  // * Dynamic memory
  // * Allocation
  // malloc
  int *users2 = malloc(3 * sizeof(int)); // ? malloc(size)

  // If memory allocation fails, print error message
  if (users2 == NULL) {
    printf("Memory allocation failed \n");
    return 1;
  }

  users2[0] = 1;
  users2[1] = 2;
  users2[2] = 3;
  printf("%d \n", users2[0]); // 1

  // calloc
  int *users3 = calloc(3, sizeof(int));
  users3[0] = 1;
  users3[1] = 2;
  users3[2] = 3;
  printf("%d \n", users3[0]); // 1

  // * Reallocation
  users2 = realloc(users2, 5 * sizeof(int)); // ? realloc(ptr, new_size)

  // Check if reallocation was successful
  if (users2 == NULL) {
    printf("Memory reallocation failed \n");
  } else {
    printf("Memory reallocation successful \n");

    users2[3] = 4;
    users2[4] = 5;
    printf("%d \n", users2[4]); // 5
  }

  // * Deallocate (free) memory
  free(users2);
  free(users3);
  users2 = NULL;
  users3 = NULL;

  // ? it is good practice to set the pointer to NULL after freeing it

  return 0;
}
