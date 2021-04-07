#include <stdio.h>

int main() {
    float s = 0;

    for (float dividend = 1, divisor = 1; dividend <= 39; dividend += 2, divisor *= 2)
        s += dividend / divisor;

    printf("%.2lf\n", s);

    return 0;
}