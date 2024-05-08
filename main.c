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

  if (index < current_length3 && current_length3 < 10) {
    // Shift elements to the left starting from the index
    for (int i = index; i < current_length3; i++) {
      nums6[i] = nums6[i + 1];
    }

    current_length3--;
  }

  for (int i = 0; i < current_length3; i++) {
    printf("%d \n", nums6[i]); // 1 2 4 5
  }

  // * Insert element to array at specific index
  int nums7[10] = {1, 2, 3, 4, 5};
  int current_length4 = 5;
  int index2 = 2;

  if (current_length4 < 10) {
    // Shift elements to the right starting from the index
    for (int i = current_length4; i > index2; i--) {
      nums7[i] = nums7[i - 1];
    }

    // Insert element at index
    nums7[index2] = 10;
    current_length4++;
  }

  for (int i = 0; i < current_length4; i++) {
    printf("%d \n", nums7[i]); // 1 2 10 3 4 5
  }

  // * Insert element to array at start
  int nums8[10] = {1, 2, 3};
  int current_length5 = 3;

  if (current_length5 < 10) {
    // Shift all elements to the right
    for (int i = current_length5; i > 0; i--) {
      nums8[i] = nums8[i - 1];
    }

    // Insert element at start
    nums8[0] = 100;
    current_length5++;
  }

  for (int i = 0; i < current_length5; i++) {
    printf("%d \n", nums8[i]); // 100 1 2 3
  }

  // * Remove element from array at start
  int nums9[10] = {1, 2, 3};
  int current_length6 = 3;

  if (current_length6 > 0) {
    // Shift all elements to the left
    for (int i = 0; i < current_length6; i++) {
      nums9[i] = nums9[i + 1];
    }

    current_length6--;
  }

  for (int i = 0; i < current_length6; i++) {
    printf("%d \n", nums9[i]); // 2 3
  }

  return 0;
}

// TIP: Use `cpace main.c` to run the code with auto compile
