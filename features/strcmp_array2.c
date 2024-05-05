#include <stdio.h>
#include <string.h>

int main(void)
{
    char *names[2] = {"Brian", "David"};
    char *numbers[2] = {"+1-222-495-2000", "+1-252-468-9050"};

    char person_to_find[10] = "David";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], person_to_find) == 0)
        {
            printf("found %s's number: %s \n", names[i], numbers[i]);
            return 0;
        }
    }
    printf("%s not found \n", person_to_find);
    return 1;
}
