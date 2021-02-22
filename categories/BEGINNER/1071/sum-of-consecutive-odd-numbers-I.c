#include <stdio.h>

int main() {
    int temp, summation = 0, x, y;

    scanf("%d %d", &x, &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    for (int count = ++x; count < y; count++) {
        if (count % 2 != 0)
            summation += count;
    }

    printf("%d\n", summation);

    return 0;
}