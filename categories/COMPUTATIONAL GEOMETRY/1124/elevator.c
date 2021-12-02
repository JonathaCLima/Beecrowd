#include <stdio.h>
#include <math.h>

int main() {
    int l, c, r1, r2;

    while(scanf("%d %d %d %d", &l, &c, &r1, &r2) && (l || c || r1 || r2))
        r1 * 2 <= l && r1 * 2 <= c && r2 * 2 <= l && r2 * 2 <= c && sqrt(pow((r1 - (c - r2)), 2) + pow(((l - r1) - r2), 2)) >= (r1 + r2) ? printf("S\n") : printf("N\n");

    return 0;
}