#include <stdio.h>
#include <stdbool.h>

// Given 2 arrays, create a function that let's a user know (true/false) whether these two arrays contain any common items

// O(n)
bool itemInCommon(int array1[], int size1, int array2[], int size2) {
  int hashTable[1000] = {0};

  for (int i = 0; i < size1; i++) {
    hashTable[array1[i]] = 1;
  }

  for (int i = 0; i < size2; i++) {
    if (hashTable[array2[i]]) {
      return true;
    }
  }

  return false;
}

int main() {
  // DATA
  int array1[] = {1, 2, 3};
  int array2[] = {2, 4, 6};

  // TIP: The division sizeof(array1) / sizeof(array1[0]) calculates how many times the size of a single element can fit into the total size of the array, effectively giving you the number of elements in the array. It is a common idiom in C.
  int size1 = sizeof(array1) / sizeof(array1[0]);
  int size2 = sizeof(array2) / sizeof(array2[0]);

  
  // * OUTPUT
  bool result = itemInCommon(array1, size1, array2, size2);
  printf("%s\n", result ? "true" : "false"); // true
}
