#include <stdio.h>

#define LARGER(a, b) a > b ? a : b

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", LARGER(a, b));

    return 0;
}