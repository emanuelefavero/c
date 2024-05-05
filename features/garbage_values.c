#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // create a pointer to an x variable
    int *x;

    // set up where (malloc) and how much (sizeof) memory is allocated to x
    x = malloc(sizeof(int));

    // assign int 42 to *x
    *x = 42;

    printf("%d \n", *x);

    return 0;
}

// allocating a variable ensures that any memory for that variable is reserved. If a variable is assigned but not allocated, it is said to have a garbage value, such that, certain data kept by some random set of the storage of the computer.
