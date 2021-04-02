#include <stdio.h>

int fibonacci(int x) {
    return x < 2 ? x : fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    int n;

    scanf("%d", &n);

    for (int count = 0; count < n; count++)
        count < n - 1 ? printf("%d ", fibonacci(count)) : printf("%d\n", fibonacci(count));

    return 0;
}