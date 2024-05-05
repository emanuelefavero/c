#include <stdio.h>

int main() {
    int n = -28;

    if (n > 0 && n <= 100) {
        printf("n is a number between 1 and 100 \n");
    } else if (n <= 0 && n >= -100) {
        printf("n is a number between -100 and 0 \n");
    }

    if (!(n == 4)) {
        printf("n is NOT equal to 4 \n");
    }

    return 0;
}
