#include <stdio.h>

int num_calls = 0;

int fibonacci(int x) {
    num_calls++;
    return x < 2 ? x : fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    int n, x;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);
        printf("fib(%d) = %d calls = %d\n", x, --num_calls, fibonacci(x));
        num_calls = 0;
    }

    return 0;
}