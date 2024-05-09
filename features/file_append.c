#include <stdio.h>
#include <string.h>

int main() {
  // * Append text to a file
  FILE *file = fopen("file.txt", "a");
  fprintf(file, "Hello World \n");

  // Close the file
  fclose(file);

  return 0;
}
