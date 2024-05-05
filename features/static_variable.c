#include <stdio.h>

void hello();

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        hello();
    }

    return 0;
}

void hello()
{
    // STATIC VARIABLE, PREFERABLE THAN GLOBAL VARIABlES
    // REMAIN  IN MEMORY UNTIL PROGRAM ENDS, CANNOT BE CALLED OUTSIDE THIS FUNC.
    static int num_calls = 1;

    printf("Hello number %d \n", num_calls);
    num_calls++;
}

// Hello number 1
// Hello number 2
// Hello number 3
