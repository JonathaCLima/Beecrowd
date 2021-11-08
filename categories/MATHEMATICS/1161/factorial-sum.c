#include <stdio.h>

unsigned long long factorial(int x) {
    unsigned long long result = 1;

    for (int count = x; count >= 1; count--)
        result *= count;

    return result;
}

int main() {
    int m, n;
    unsigned long long sum;

    while (scanf("%d %d", &m, &n) != EOF) {
        sum = factorial(m) + factorial(n);
        printf("%llu\n", sum);
    }

    return 0;
}