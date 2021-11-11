#include <stdio.h>

int main() {
    int h1, m1, h2, m2;

    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2)) {
        if (!h1 && !m1 && !h2 && !m2)
            break;

        if (h1 > h2 || h1 == h2 && m1 > m2)
            h2 += 24;

        printf("%d\n", (h2 * 60 + m2) - (h1 * 60 + m1));
    }

    return 0;
}