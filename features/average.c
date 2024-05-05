#include <stdio.h>

int main() {

  // * Find the average age
  int ages[3] = {23, 25, 30};

  int length = sizeof(ages) / sizeof(ages[0]);
  int total = 0;

  for (int i = 0; i < length; i++) {
    total += ages[i];
  }

  printf("The average age is %d \n", total / length); // 26

  return 0;
}
