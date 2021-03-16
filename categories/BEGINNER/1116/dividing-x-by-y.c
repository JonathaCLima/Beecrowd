#include <stdio.h>

int main() {
    int total, dividend, divisor;

    scanf("%d", &total);

    for (int count = 1; count <= total; count++) {
        scanf("%d %d", &dividend, &divisor);
        divisor == 0.0 ? printf("divisao impossivel\n") : printf("%.1f\n", (float)dividend / divisor);
    }

    return 0;
}