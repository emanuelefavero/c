#include <stdio.h>

int main() {
  // * string
  char greet[] = "ciao";
  printf("%s \n", greet);

  // * get string user input with fgets(VAR, LONG, stdin)
  char name[50];
  printf("what's your name: ");
  fgets(name, 50, stdin);
  printf("hi, %s \n", name);

  // * print string variable to the screen with fputs(VAR, stdout)
  // char city[50];
  // printf("what's your favorite city: ");
  // fgets(city, 50, stdin);
  // printf("your favorite city is ");
  // fputs(city, stdout);

  // * string length
  char str[] = "hello";
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  printf("string length is %d \n", len);

  int string_length =
      sizeof(str) / sizeof(str[0]) - 1; // ? -1 to exclude null character
  printf("string length is %d \n", string_length);

  // * modify string
  char a[10] = "hello";
  a[0] = 'j';
  printf("%s \n", a); // jello

  // * loop through string
  char b[] = "hola";

  // TIP: You can loop though a string by checking if the character is not null
  // ? \0 is the null character
  for (int i = 0; b[i] != '\0'; i++) {
    printf("%c \n", b[i]);
  }

  // * another way to define a string
  /*
  We can define a string by defining an array of characters and adding a null
  character at the end
  */
  char c[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  printf("%s \n", c);

  return 0;
}

// TIP: Use `cpace main.c` to run the code with auto compile
