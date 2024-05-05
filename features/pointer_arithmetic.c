#include <stdio.h>

int main() {
  int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // Pointer to the first element of the array
    
    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Increment the pointer to access the next element
    ptr++;
    printf("After ptr++, value at ptr: %d\n", *ptr);
    
    // Decrement the pointer to access the previous element
    ptr--;
    printf("After ptr--, value at ptr: %d\n", *ptr);
    
    // Adding an offset to the pointer
    ptr += 2; // Move two elements ahead
    printf("After ptr += 2, value at ptr: %d\n", *ptr);
    
    // Subtracting an offset from the pointer
    ptr -= 1; // Move one element back
    printf("After ptr -= 1, value at ptr: %d\n", *ptr);

  return 0;
}
