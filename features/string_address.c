#include <stdio.h>

int main(void)
{
    char a[] = "Ciao";
    // strings act like pointers when given %p instead of %s
    printf("%p \n", a);
    // use &VARIABLENAME[NUMBER], &a[0] to get address of specific digit
    printf("%p \n", &a[1]);

    //  pointer to address the third character of string a
    char *p = &a[2];
    printf("%p \n", p);

    // as you can see the character addresses are in sequence

    return 0;
}
