#include <stdio.h>
#include <string.h>

int main(void)
{
    // declare string without declaring length, it will only take the length of the declared characters ciao = [4]
    char a[] = "Ciao";

    printf("%s \n", a);
    printf("Length of string a = %zu \n", strlen(a));

    return 0;
}
