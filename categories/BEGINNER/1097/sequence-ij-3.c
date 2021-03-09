#include <stdio.h>

int main() {

    for (int i = 1, j = 7, count = 7; i <= 9; i += 2, j += 5, count += 2) {
        for (; j >= count - 2; j--)
            printf("I=%d J=%d\n", i, j);
    }

    return 0;
}