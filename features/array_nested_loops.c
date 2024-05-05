#include <stdio.h>

int main(void)
{
    int a[2][3] = {
        {4, 8, 5},
        {3, 2, 7}}; // ALWAYS USE SEMICOLON ; AFTER DECLARATION, EVEN WITH {}

    for (int k = 0; k < 2; k++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[k][j]);
        }
    }

    printf("\n");

    return 0;
}

// 4 8 5 3 2 7
