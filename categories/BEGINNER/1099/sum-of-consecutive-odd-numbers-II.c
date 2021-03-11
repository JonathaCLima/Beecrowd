#include <stdio.h>

int main() {
    int total;

    scanf("%d", &total);

    for (int count = 1, x, y, temp, summation = 0; count <= total; count++, summation = 0) {
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
    }

    return 0;
}