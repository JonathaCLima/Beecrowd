#include <stdio.h>

int main() {
    float s = 0;

    for (float count = 1; count <= 100; count++)
        s += 1 / count;

    printf("%.2lf\n", s);

    return 0;
}