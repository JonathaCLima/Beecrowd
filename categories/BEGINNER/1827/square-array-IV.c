#include <stdio.h>

int main() {
    int n, i, j;

    while(scanf("%d", &n) != EOF) {
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if (j == i && i == 1 + n / 2 && n % 2 != 0)
                    printf("%d", 4);
                else if (i > n / 3 && i <= n - n / 3 && j > n / 3 && j <= n - n / 3)
                    printf("%d", 1);
                else if (i == j)
                    printf("%d", 2);
                else
                    i == n + 1 - j ? printf("%d", 3) : printf("%d", 0);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}