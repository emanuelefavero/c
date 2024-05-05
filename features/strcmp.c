// strcmp
// c can not compare strings like numbers (example: if (n == 2))
// so strcmp is used for comparing srtings
#include <stdio.h>
#include <string.h> // include strcmp()

int main(void)
{
    char lettera = 'a';        // single quotes, single character
    char parola[100] = "ciao"; // double quotes, string

    if (lettera == 'a')
    {
        // do this
        printf("%c \n", lettera); // string
    }
    if (!strcmp("ciao", parola)) // USE !strcmp() TO COMPARE STRINGS
    {
        // do this
        printf("%s \n", parola); // string
    }

    return 0;
}
