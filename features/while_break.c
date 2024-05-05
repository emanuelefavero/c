#include <stdio.h>

int main() {
    
    int num = 1;

    while (num > 0) {
        if (num == 3) {
            break;  // break inside while loop
        }
        printf("%d \n", num);
        num++;
    }

    return 0;
}

// 1
// 2
