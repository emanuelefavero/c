#include <stdio.h>

int main(void)
{
    // array
    double balance[3] = {23.2, 46.3, 18.1};

    for (int i = 0; i < 3; i++)
    {
        // print all array elements in 2 point float .00
        printf("%.2f \n", balance[i]);
    }

    return 0;
}
