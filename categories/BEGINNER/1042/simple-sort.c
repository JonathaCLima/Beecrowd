#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a < b) && (a < c))
        b < c ? printf("%d\n%d\n%d\n\n", a, b, c) : printf("%d\n%d\n%d\n\n", a, c, b);
    else if ((b < a) && (b < c))
        a < c ? printf("%d\n%d\n%d\n\n", b, a, c) : printf("%d\n%d\n%d\n\n", b, c, a);
    else
        a < b ? printf("%d\n%d\n%d\n\n", c, a, b) : printf("%d\n%d\n%d\n\n", c, b, a);
    
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}