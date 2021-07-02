#include <stdio.h>

int main() {
    int n, i, j;

    while(scanf("%d", &n) != EOF) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if ((i == j) && (n % 2 == 0) || (i == j) && (j != n / 2))
                    printf("%d", 1);
                else if (i + j == n - 1)
                    printf("%d", 2);
                else
                    printf("%d", 3);
            }
            printf("\n");
        }
    }

    return 0;
}