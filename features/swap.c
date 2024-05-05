#include <stdio.h>

// prototype, we need to declare function before main
void swap(int *a, int *b);

int main(void)
{
    int x = 2;
    int y = 3;

    printf("x is equal to %i, y is equal to %i \n", x, y);

    // pass the address location of x and y
    swap(&x, &y);

    printf("x is equal to %i, y is equal to %i \n", x, y);

    return 0;
}

// swap the address of pointer *a, *before
// you need to use pointers if you want to pass variables to functions and back
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
