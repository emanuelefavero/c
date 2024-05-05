// strcmp
// c can not compare strings like numbers (example: if (n == 2))
// so strcmp is used for comparing srtings
#include <stdio.h>
#include <string.h> // string.h needed for strcmp

int main(void)
{
    char *names[4] = {"Bill", "Charlie", "Fred", "George"};

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "George") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}

// strcmp retuns 0 if the string compares
// return a negative number (example: -1) if the string compared is lower on the ascii code
// return a positive number if the string compared is higher on the ascii code
