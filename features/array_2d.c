#include <stdio.h>

int main(void) {
  // 2D array
  int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

  // Accessing elements
  printf("%d \n", a[0][2]); // 5

  // Print all elements
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", a[i][j]); // 1 2 3 4 5 6
    }
    printf("\n");
  }
}
