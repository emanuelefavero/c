#include <stdio.h>

int main(void)
{
    int a = 2;
    // POINTERS, DECLARED WITH *var
    // POINT TO THE HEX MEMORY ADDRESS OF A VARIABLE
    int *b = NULL;
    b = &a;

    // * is known as the dereference operator and is necessary to declare a pointer, while & is necessary to reference n

    printf("%p \n", &a); // prints hex address of variable a
    printf("%p \n", b);  // prints hex address of variable a thru pointer b

    return 0;
}

// 0x16d8176c8
// 0x16d8176c8
