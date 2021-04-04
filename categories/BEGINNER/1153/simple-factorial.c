#include <stdio.h>

int main() {
    int n, factorial = 1;

    scanf("%d", &n);

    for (int count = n; count >= 1; count--)
        factorial *= count;

    printf("%d\n", factorial);

    return 0;
}