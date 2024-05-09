#include <stdio.h>
#include <string.h>

int main() {
  // * Read file
  FILE *file = fopen("file.txt", "r");

  // Check if the file exists
  if (file != NULL) {

    // Store the content of the file in a string
    int size = 100;
    char content[size];
    fgets(content, size, file);

    // Print all lines of the file
    // TIP: feof is used to determine if the end of the file has been reached
    while (!feof(file)) {
      printf("%s", content);
      fgets(content, size, file);
    }
  } else {
    printf("File does not exist \n");
  }

  // Close the file
  fclose(file);

  return 0;
}
