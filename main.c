#include <stdio.h>

int main() {

  // * for loop
  for (int i = 0; i < 5; i++) {
    printf("%d \n", i);
  }
  // 0 1 2 3 4

  // * break
  for (int i = 0; i < 5; i++) {
    if (i == 3) {
      break;
    }

    printf("%d \n", i);
  }
  // 0 1 2

  // * continue
  for (int i = 0; i < 4; i++) {
    if (i == 2) {
      printf("hey \n");
      continue;
    } else {
      printf("%d\n", i);
    }
  }
  // 0 1 hey 3

  return 0;
}

// TIP: Use `cpace main.c` to run the code with auto compile
