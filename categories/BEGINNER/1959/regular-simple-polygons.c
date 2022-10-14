#include <stdio.h>

int main() {
    int n, l;

    scanf("%d %d", &n, &l);

    long long p = (long long)n * l;

    printf("%lld\n", p);

    return 0;
}