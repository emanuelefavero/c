#include <stdio.h>

// DECLARE FUNCTIONS
void hello();
int sum(int x, int y);

int main()
{
    // CALL FUNCTIONS
    hello();

    printf("%d \n", sum(3, 2));

    return 0;
}

// DEFINE FUNCTIONS
void hello()
{
    printf("Hello World \n");
}

int sum(int x, int y)
{
    int result = x + y;
    return result;
}

// Hello World
// 5
