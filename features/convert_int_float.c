#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 2;

    // casting = converting int to float
    // if the result can be a float use casting
    float z = (float)x / (float)y;

    printf("%f \n", z);
}

// 2.500000
