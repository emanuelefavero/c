#include <stdio.h>

// c string standard library
#include <string.h>

int main()
{
    // strlen()
    char name[] = "ema";
    printf("the length of this string is %zu \n", strlen(name));

    // strcat()
    char a[20] = "ciao ";
    char b[20] = "come va";
    strcat(a, b);
    printf("%s \n", b);

    // strcpy(), COPY STRING TO ANOTHER
    char c[20] = "ciao";
    char d[20];
    // dest, source
    strcpy(d, c);
    printf("%s \n", d);

    return 0;
}
