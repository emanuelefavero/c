#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strcpy, strcat

int main() {
  // * Dynamic memory - string
  // Allocate
  int length = 5;
  char *string = malloc(length * sizeof(char));
  if (string == NULL) {
    printf("Memory allocation failed \n");
    return 1;
  }

  // Populate
  strcpy(string, "Hello");

  // Reallocation
  length = 10;
  string = realloc(string, length * sizeof(char));
  if (string == NULL) {
    printf("Memory reallocation failed \n");
  } else {
    printf("Memory reallocation successful \n");
    strcat(string, " World"); // append
  }

  // Access
  printf("%s \n", string); // Hello World

  // Deallocate
  free(string);
  string = NULL;

  return 0;
}
