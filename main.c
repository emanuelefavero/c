#include <stdio.h>
#include <string.h>

/*
* Structures
struct allows to create custom related data structure
similar to Javascript objects.
NOTE: C Structures cannot have methods
*/

typedef struct {
  char *name;
  int age;
} User;

int main() {
  User user;
  user.name = "John";
  user.age = 25;
  printf("Name: %s, Age: %d \n", user.name, user.age); // Name: John, Age: 25

  // Assign values directly
  User user2 = {"Jane", 30};
  printf("Name: %s, Age: %d \n", user2.name, user2.age); // Name: Jane, Age: 30

  // Copying values
  User user3 = user2;
  printf("Name: %s, Age: %d \n", user3.name, user3.age); // Name: Jane, Age: 30

  // Modify values
  user3.name = "Jack";
  printf("Name: %s, Age: %d \n", user3.name, user3.age); // Name: Jack, Age: 30

  return 0;
}

/*
TIP: You can't assign a string directly to a char array in structs so there are
3 ways to do it:
1. Use a pointer to a string (we did this in the example above): `char *name;`
2. Define the string when you define the struct: `char name[20];` + `User user =
{"John", 25};`
3. Use strcpy: `char name[20];` + `strcpy(user.name, "John");`
*/

// TIP: Use `cpace main.c` to run the code with auto compile
