#include <stdio.h>

int main() {
    int a = 10;
    float b  = 12.50;
    char lettera = 'A';
    char parola[] = "Ciao";
    char *parola2 = "Ciao"; // you can also use a pointer to create a string
    const char FRASE[100] = "io sto bene e tu?";

    // POINTERS
    int *pointer = &a; // pointer to a

    printf("%d \n", a); // double (integer)
    printf("%i \n", a); // integer
    printf("%.2f \n", b); // float with 2 digits
    printf("%c \n", lettera); // char
    printf("%s \n", parola); // string
    printf("%s \n", parola2); // string
    printf("%s \n", FRASE); // string

    // PRINT POINTERS
    printf("%d \n", *pointer); // 10
    printf("%p \n", pointer); // 0x7ffeeb0b0a2c

    return 0;
}
