#include <stdio.h>

// declaration
int square(int num);

int main()
{
    int x = 5;

    // call
    int result = square(x);

    printf("%d squared is %d \n", x, result);

    return 0;
}

// definition
int square(int num)
{
    int y = num * num;

    return (y);
}
