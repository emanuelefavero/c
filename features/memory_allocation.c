#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // COPY VARIABLE a TO b
    char *a = "ciao";

    // ASK TO RESERVE MEMORY, MEMORY ALLOCATION
    // malloc = memory allocation, strlen = string length
    // we need to add + 1 for the null number
    // the null number tells the computer that the string ends
    char *b = malloc(strlen(a) + 1);

    // USE THIS IF STATEMENT (CHECK FOR NULL) ALONG WITH malloc() IN MORE COMPLEX PROGRAMS TO SAVE MEMORY
    // if (b == NULL)
    // {
    //     return 1;
    // }

    // COPY A STRING TO ANOTHER
    // dest, source
    strcpy(b, a);
    // ANOTHER LESS USED METHOD
    // for (int i = 0; i <= strlen(a); i++)
    // {
    //     b[i] = a[i];
    // }

    // uppercase first letter of b
    b[0] = toupper(b[0]);

    printf("a: %s \n", a);
    printf("b: %s \n", b);

    // RETURN THE MEMORY BACK, FREE MEMORY
    free(b);

    return 0;
}

// NOTE: EVERY TIME U USE malloc, U MUST USE free() to free memory
