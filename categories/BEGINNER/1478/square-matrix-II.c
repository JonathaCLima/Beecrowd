#include <stdio.h>
#include <math.h>

int main () {
    int n, i, j;

    while (scanf("%d", &n) != 0) {
        if (n == 0) break;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                j < n - 1 ? printf("%3d ", 1 + abs(i - j)) : printf("%3d\n", 1 + abs(i - j));
        }
        printf("\n");
    }

    return 0;
}