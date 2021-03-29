#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, q, r;

    scanf("%d %d", &a, &b);

    if (a < 0) {
        for(r = 0; r < abs(b); r++) {
            if((a - r) % b == 0)
                break;
        }
        q = (a - r) / b;
    }
    else {
        q = a / b;
        r = a % b;
    }

    printf("%d %d\n", q, r);

    return 0;
}