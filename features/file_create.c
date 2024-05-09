#include <stdio.h>
#include <string.h>

int main() {
  // * Create a file
  FILE *file = fopen("file.txt", "w");

  // Or open an existing file. THe file will be created if it does not exist
  // FILE *file = fopen("file.txt", "a");

  // Close the file
  fclose(file);

  return 0;
}

// fclose(file_pointer); = CLOSE A FILE, EXAMPLE fclose(*file)
// remove (“file_name”); = DELETES A FILE
