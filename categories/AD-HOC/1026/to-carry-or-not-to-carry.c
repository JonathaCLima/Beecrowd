#include <stdio.h>

int main() {
    int unsigned long x, y;

    while (scanf("%lu %lu", &x, &y) != EOF)
        printf("%lu\n", x^y);

    return 0;
}