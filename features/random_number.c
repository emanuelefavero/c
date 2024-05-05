#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int r = (rand() % 10) + 1; // generate random num between 1 and 10

    printf("%d \n", r);

    if (r > 5) {
        printf("Number is greater than 5 \n");
    }

    else if (r < 5) {
        printf("Number is lower than 5 \n");
    }

    else if (r == 5) {
        printf("Number is equal to 5 \n");
    }

    return 0;
}
