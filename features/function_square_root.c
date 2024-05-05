#include <stdio.h>

// declaration
int squareroot(int num);

int main()
{
    int x = 144;
    int result = squareroot(x);
    printf("The square root of %d is %d \n", x, result);

    return 0;
}

// definition
int squareroot(int num)
{
    int a = 1;

    do
    {
        a = a + 1;
    } while (a * a != num);

    return (a);
}
