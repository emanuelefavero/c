#include <stdio.h>

int main(void)
{
    // a string is equal to a pointer
    char *a = "ciao";

    printf("%s \n", a);
    printf("%p \n", a);

    char b[] = "ciao";
    printf("%s \n", b);

    return 0;
}
