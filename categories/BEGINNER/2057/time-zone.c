#include <stdio.h>

int main() {
    int s, t, f;

    scanf("%d %d %d", &s, &t, &f);

    s == 0 ? printf("%d\n", ((24 + t + f) % 24)) : printf("%d\n", ((s + t + f) % 24));

    return 0;
}