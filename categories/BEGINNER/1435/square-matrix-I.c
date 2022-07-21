#include <stdio.h>

int main () {
    int n, i, j;
    
    while (scanf("%d", &n) != 0) {
        if (n == 0) break;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i <= j) {
                    if (i + j <= n)
                        printf("%3d ", i);
                    else
                        j == n ? printf("  1\n") : printf("%3d ", (n - j) + 1);
                }
                else 
                    i + j <= n ? printf("%3d ", j) : printf("%3d ", (n - i) + 1);
            }
        }
        printf("\n");
    }

    return 0;
}