#include <stdbool.h>
#include <stdio.h>

int main(void) {
  // * Boolean
  // Boolean in C are not a built in type and must be included from stdbool.h
  bool a = true;
  bool b = false;

  if (a) {
    printf("a is true\n"); // a is true
  }

  printf("%d\n", a); // 1
  printf("%d\n", b); // 0

  printf("%s\n", a ? "true" : "false"); // true

  // --------------------------------------------

  // TIP: It is more common to use 1 for true and 0 for false or compare values
  // directly

  int age = 21;

  // Use 1 for true
  if (1) {
    printf("1 is true\n");
  }

  // Use 0 for false
  if (0) {
    printf("0 is true\n");
  }

  // Compare directly
  if (age >= 18) {
    printf("You are an adult\n");
  }

  return 0;
}
