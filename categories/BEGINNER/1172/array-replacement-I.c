#include <stdio.h>

int main() {
    int x[10];

    for (int count = 0; count < 10; count++) {
        scanf("%d", &x[count]);
        x[count] <= 0 ? printf("X[%d] = %d\n", count, x[count] = 1) : printf("X[%d] = %d\n", count, x[count]);
    }

    return 0;
}