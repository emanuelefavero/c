#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char greet[] = "ciao";
    char name[] = "EMA";

    // UPPERCASE strings, toupper()
    for (int i = 0; greet[i]; i++)
    {
        greet[i] = toupper(greet[i]);
    }

    // LOWERCASE strings, tolower()
    for (int i = 0; name[i]; i++)
    {
        name[i] = tolower(name[i]);
    }

    // UPPERCASE first letter

    printf("%s %s \n", greet, name);

    return 0;
}
