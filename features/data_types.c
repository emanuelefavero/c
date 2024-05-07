#include <stdio.h>

int main() {
  int a = 10;
  float b = 12.50;
  long c = 1234567890;
  char lettera = 'A';
  char parola[] = "Ciao";
  char *parola2 = "Ciao"; // you can also use a pointer to create a string
  const char FRASE[100] = "io sto bene e tu?";

  // POINTERS
  int *pointer = &a; // pointer to a

  printf("%d \n", a);       // double (integer)
  printf("%i \n", a);       // integer
  printf("%.2f \n", b);     // float with 2 digits
  printf("%ld \n", c);      // long
  printf("%c \n", lettera); // char
  printf("%s \n", parola);  // string
  printf("%s \n", parola2); // string
  printf("%s \n", FRASE);   // string

  // PRINT POINTERS
  printf("%d \n", *pointer); // 10
  printf("%p \n", pointer);  // 0x7ffeeb0b0a2c
  printf("%p \n", &a);       // 0x7ffeeb0b0a2c

  // PRINT MEMORY SIZE
  printf("Size of int: %lu bytes\n", sizeof(a));           // 4 bytes
  printf("Size of float: %lu bytes\n", sizeof(b));         // 4 bytes
  printf("Size of long: %lu bytes\n", sizeof(c));          // 8 bytes
  printf("Size of char: %lu bytes\n", sizeof(lettera));    // 1 byte
  printf("Size of string: %lu bytes\n", sizeof(parola));   // 5 bytes
  printf("Size of pointer: %lu bytes\n", sizeof(pointer)); // 8 bytes

  return 0;
}

// TIP: If you try to assign multiple characters to a char variable, only the
// last one will be stored
// TIP: Floating point numbers can also store scientific notation (e.g. 1.2e3).
// Meaning 1.2 * 10^3
