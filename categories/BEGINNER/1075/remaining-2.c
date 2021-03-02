#include <stdio.h>

int main() {
    int value;

    scanf("%d", &value);

    for (int count = 1; count < 10000; count++) {
        if (count % value == 2)
            printf("%d\n", count);
    }

    return 0;
}