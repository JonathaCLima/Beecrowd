#include <stdio.h>

int sum_consecutive_odd(int x, int y) {
    int summation = 0;
    while (y > 0) {
        if (x % 2 != 0) {
            summation += x;
            x += 2;
            y--;
        }
        else
            x++;
    }
    return summation;
}

int main() {
    int total;

    scanf("%d", &total);

    for (int count = 1, x, y; count <= total; count++) {
        scanf("%d %d", &x, &y);
        printf("%d\n", sum_consecutive_odd(x, y));
    }

    return 0;
}