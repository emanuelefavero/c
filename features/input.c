#include <stdio.h>

int main() {
  // * input
  // fgets() is used to read a string from the user
  char a[100];

  printf("Enter you name: ");
  fgets(a, 100, stdin);
  printf("you entered: %s \n", a);

  // You can also use scanf() to read single word strings
  // TIP: For multiple word input, use fgets() since scanf() stops at the first
  // space
  char b[100];

  printf("Enter your last name: ");
  scanf("%s", b);
  printf("Your last name is: %s \n", b);

  // * Multiple inputs
  // You can use scanf() to read multiple inputs
  char name[100];
  int age;

  printf("Enter your name and age: ");
  scanf("%s %d", name, &age);
  // TIP: scanf() needs the address of the variable,
  // Name is an array so it's already an address

  printf("Your name is %s and you are %d years old \n", name, age);

  return 0;
}
