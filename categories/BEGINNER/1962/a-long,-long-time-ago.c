#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    short const year = 2015;

    for (int i = 1; i <= n; i++) {
        int t;
        scanf("%d", &t);

        if (t - year >= 0)
            printf("%d A.C.\n", abs(t - year) + 1);
        else
            printf("%d D.C.\n", abs(t - year));
    }

    return 0;
}