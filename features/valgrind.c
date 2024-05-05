// valgrind, tool to detect memory errors
// TO RUN: valgrind ./a.out
// (DOESN'T RUN ON MAC OS M1)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(4); // 4 bytes available

    // valgrind will detect if we use too many bytes
    s[0] = 'H';  // byte 1
    s[1] = 'I';  // byte 2
    s[2] = '!';  // byte 3
    s[3] = '\0'; // byte 4

    printf("%s \n", s);

    // and will also check if we free the bytes we took
    free(s);

    // RUNNING valgrind it should say:
    // no leaks are possible

    return 0;
}
