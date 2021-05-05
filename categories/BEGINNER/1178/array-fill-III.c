#include <stdio.h>

int main() {
    double x, n[100];

    scanf("%lf", &x);

    for (int count = 0; count < 100; count++, x /= 2)
        printf("N[%d] = %.4lf\n", count, n[count] = x);

    return 0;
}