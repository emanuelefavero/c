#include <stdio.h>

// * Enums
// Enums are used to create a list of named integer constants
enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

// * You can also assign values to enums
enum Colors { RED = 1, GREEN = 2, BLUE = 3 };

// * Switch statements are often used with enums
void printColor(enum Colors color) {

  switch (color) {
  case RED:
    printf("Red\n");
    break;

  case GREEN:
    printf("Green\n");
    break;

  case BLUE:
    printf("Blue\n");
    break;

  default:
    printf("Unknown color\n");
    break;
  }
}

// * You can also define enums with typedef
typedef enum {
  JAN = 1,
  FEB, // 2, the rest of the values will be incremented by 1
  MAR,
  APR,
  MAY,
  JUN,
  JUL,
  AUG,
  SEP,
  OCT,
  NOV,
  DEC
} Month;

int main() {
  // * Call enums
  enum Weekday today = MONDAY;
  printf("Today is %d \n", today); // 0, by default enums start at 0

  enum Colors color = GREEN;
  printColor(color);                     // Green
  printf("Color value is %d \n", color); // 2, because we assigned 2 to GREEN

  Month month = DEC;
  printf("Month is %d \n", month); // 12

  return 0;
}
