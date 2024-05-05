#include <stdio.h>

int main()
{
    // string
    char x[] = "ciao";
    printf("%s \n", x);

    // get string user input with fgets(VAR, LONG, stdin)
    // remember to declare variable beforehand
    char name[50];
    printf("what's your name: ");
    fgets(name, 50, stdin);
    printf("hi, %s \n", name);

    // string output, print string variable to the srcreen with fputs(VAR, stdout)
    char city[50];
    printf("what's your favorite city: ");
    fgets(city, 50, stdin);
    printf("your favorite city is ");
    fputs(city, stdout);

    return 0;
}
