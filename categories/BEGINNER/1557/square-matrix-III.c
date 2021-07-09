#include <stdio.h>
#include <math.h>

int space(int n) {
    int count = 0, size = pow(2, ((n - 1) * 2));

    while(size != 0) {
        count++;
        size /= 10;
    }

    return count;
}

int value(int i, int j) {
    return pow(2, i + j);
}

int main() {
    int n;

    while(scanf("%d", &n) && n >= 1 && n <= 15) {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
        	    j < (n - 1) ? printf("%*d ", space(n), value(i, j)) : printf("%*d\n", space(n), value(i, j));
        printf("\n");
    }

    return 0;
}