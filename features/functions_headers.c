#include "utilities.h"
#include <stdio.h>

/*
FUNCTIONS IN HEADERS:
In big projects, it's common to have function prototypes (declarations) in
header files and the function definitions in source files.
@see utilities.h, utilities.c and this file
*/

int main() {

  // * Function calls
  hello();
  printf("%d \n", sum(2, 3));

  return 0;
}

/*
TIP: `cpace` will not work if functions are not defined in the same file. Use
`gcc` instead: `gcc -o main main.c utilities.c && ./main`

TIP: Both the main file and source file must be compiled together
*/
