// ARRAYS
#include <stdio.h>

int main()
{
    float prices[3] = {9.99, 1.99, 4.99};

    printf("The price is %.2f \n", prices[1]); // 1.99

    float total;

    for (int i = 0; i < 3; i++)
    {
        total += prices[i];
    }

    printf("The total price is %.2f \n", total); // 16.97

    return 0;
}

// The price is 1.99
// The total price is 16.97
