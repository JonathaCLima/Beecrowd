#include <stdio.h>

int main() {
    int x;

    do {
        scanf("%d", &x);

        for (int count = 1; count <= x; count++)
            count < x ? printf("%d ", count) : printf("%d\n", count);
    }
    while (x != 0);

    return 0;
}