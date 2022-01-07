#include <stdio.h>

int main() {
    int c, n;

    scanf("%d", &c);

    while(c--) {
        scanf("%d", &n);
        n % 2 == 0 ? printf("0\n") : printf("1\n");
    }

    return 0;
}