#include <stdio.h>

// FACTORIAL OF 3 IS 3 * 2 * 1 = 6
int factorial(int num);

int main(void)
{
    int a = 5;

    printf("The factorial of %d is %d \n", a, factorial(a)); // 120

    return 0;
}

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1)); // RECURSIVE FUNCTION
    }
}

// The factorial of 5 is 120
