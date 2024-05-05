#include <stdio.h>

int main() {
    
    int num = 1;

    while (num > 0) {
        num++;

        if (num == 3)
            continue; // skip 3

        printf("%d \n", num);

        if (num == 5) {
            break;
        }
    }

    return 0;
}

// 2
// 4
// 5
