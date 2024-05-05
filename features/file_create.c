#include <stdio.h>
#include <string.h>

int main(void) {
  // new variable type FILE from <stdio.h>
  // fopen() takes two args, the filename and the mode:
  // "r" = Opens a file for reading. The file must exist.
  // "w" = Creates an empty file for writing. If a file already exists, its
  // content is erased. "a" = Appends to a file. The file is created if it does
  // not exist.
  FILE *file = fopen("test.txt", "a");

  // exit program if something went wrong
  if (file == NULL) {
    return 1;
  }

  // fprintf() PRINTS TO A FILE, YOU HAVE TO PASS ONE MORE ARGUMENT, A POINTER
  // TO THE FILE.
  fprintf(file, "Ciao come va ");

  fclose(file);

  return 0;
}

// fclose(file_pointer); = CLOSE A FILE, EXAMPLE fclose(*file)
// remove (“file_name”); = DELETES A FILE
