#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, area;

    while ((scanf("%d %d %d", &a, &b, &c)) && a != 0 && b != 0 && c != 0)
        printf("%d\n", area = pow(a * b * 100 / c, 0.5));

    return 0;
}