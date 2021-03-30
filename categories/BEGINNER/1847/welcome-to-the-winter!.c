#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) {
        if (b <= c)
            printf(":)\n");
        else
            b - c < a - b ? printf(":)\n") : printf(":(\n");
    }
    if (a < b) {
        if (b >= c)
            printf(":(\n");
        else
            c - b < b - a ? printf(":(\n") : printf(":)\n");
    }
    if (a == b)
        b < c ? printf(":)\n") : printf(":(\n");

    return 0;
}