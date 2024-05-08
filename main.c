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

  // * Add (push) element to array
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

  // * Remove (pop) element from array
  int nums4[10] = {1, 2, 3, 4, 5};
  int current_length2 = 5;

  if (current_length2 > 0) {
    current_length2--;
  }

  for (int i = 0; i < current_length2; i++) {
    printf("%d \n", nums4[i]); // 1 2 3 4
  }

  // * Update element to array at specific index
  int nums5[10] = {1, 2, 3};
  nums5[1] = 20;

  for (int i = 0; i < 3; i++) {
    printf("%d \n", nums5[i]); // 1 20 3
  }

  // * Remove element from array at specific index
  int nums6[10] = {1, 2, 3, 4, 5};
  int current_length3 = 5;
  int index = 2;

  // Shift elements to the left starting from the index
  for (int i = index; i < current_length3; i++) {
    nums6[i] = nums6[i + 1];
  }

  current_length3--;

  for (int i = 0; i < current_length3; i++) {
    printf("%d \n", nums6[i]); // 1 2 4 5
  }

  // * Insert element to array at specific index
  int nums7[10] = {1, 2, 3, 4, 5};
  int current_length4 = 5;
  int index2 = 2;

  // Shift elements to the right starting from the index
  for (int i = current_length4; i > index2; i--) {
    nums7[i] = nums7[i - 1];
  }

  nums7[index2] = 10;
  current_length4++;

  for (int i = 0; i < current_length4; i++) {
    printf("%d \n", nums7[i]); // 1 2 10 3 4 5
  }

  return 0;
}

// TIP: Use `cpace main.c` to run the code with auto compile
