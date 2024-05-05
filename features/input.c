#include <stdio.h>

int main() {
    char a[100];

    printf("Enter you name: ");

    // gets(a);
    fgets(a, 100, stdin);

    printf("you entered: %s \n", a);

    char b[100];

    printf("Enter your last name: ");
    scanf("%s", b);
    printf("Your last name is: %s \n", b);

    return 0;
}
