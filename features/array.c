#include <stdio.h>

int main() {
  // * ARRAYS
  int nums[3] = {1, 2, 3};
  printf("%d \n", nums[0]); // 1

  // * Dynamic array
  int nums2[] = {1, 2, 3};
  int length = sizeof(nums2) / sizeof(nums2[0]);

  for (int i = 0; i < length; i++) {
    printf("%d \n", nums2[i]); // 1 2 3
  }

  // * Add element to array
  int nums3[10] = {1, 2, 3};
  int current_length = 3;
  int new_element = 4;

  if (current_length < 10) {
    nums3[current_length] = new_element;
    current_length++;
  }

  for (int i = 0; i < current_length; i++) {
    printf("%d \n", nums3[i]); // 1 2 3 4
  }

  return 0;
}

// The price is 1.99
// The total price is 16.97
