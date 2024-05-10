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

/*
TIP: The arrow operator `->` is for accessing struct members with pointers
TIP: When dealing with individual instances of a struct, there's typically no
need to use realloc. The size of a single struct instance is fixed and does not
change during the program's execution. Therefore, dynamic memory allocation and
reallocation are unnecessary in this scenario
*/
