#include <stdio.h>

int main() {
    int num = 2;

    switch(num) {
        case 2:
            printf("num is 2 \n");
            break;
        case 3:
        case 4:
            printf("num is 3 or 4 \n");
            break;
        default:
            printf("num is neither 2 nor 3 \n");
    }

    return 0;
}
