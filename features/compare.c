#include <stdio.h>
#include <string.h>

int main(void)
{

    // COMPARE STRINGS
    char a[100];
    char b[100];
    printf("write a word: \n");
    scanf("%s", a);
    printf("write another word: \n");
    scanf("%s", b);

    // to be compared, strings need strcmp() == 0
    if (strcmp(a, b) == 0)
    {
        printf("those words are the same \n");
    }
    else
    {
        printf("those words are different \n");
    }

    // COMPARE INTEGERS
    int x;
    int y;
    printf("write a number: \n");
    scanf("%i", &x);
    printf("write another number: \n");
    scanf("%i", &y);

    // integers can be compared with just ==
    if (x == y)
    {
        printf("those numbers are the same \n");
    }
    else
    {
        printf("those numbers are different \n");
    }

    return 0;
}
