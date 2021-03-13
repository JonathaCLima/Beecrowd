#include <stdio.h>

int bigger(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int m, n;

    do {
        int summation = 0;

        scanf("%d %d", &m, &n);

        for (int count = (m + n) - bigger(m, n); count <= bigger(m, n); count++) {
            if (n <= 0 || m <= 0)
                return 0;
            printf("%d ", count);
            summation += count;
        }

        printf("Sum=%d\n", summation);

    } while (n > 0 && m > 0);

    return 0;
}