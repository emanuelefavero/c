#include <stdio.h>
#include <stdlib.h>

// * Dynamic memory - struct
typedef struct {
  char *name;
  int age;
} User;

int main() {
  // Allocate
  User *user = malloc(sizeof(User));
  if (user == NULL) {
    printf("Memory allocation failed \n");
    return 1;
  }

  // Populate
  user->name = "John";
  user->age = 25;

  // Access
  printf("%s %d \n", user->name, user->age); // John 25

  // Deallocate
  free(user);
  user = NULL;

  return 0;
}
