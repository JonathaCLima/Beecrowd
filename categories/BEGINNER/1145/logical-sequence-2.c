#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y;) {
        for (int j = 1; j <= x; j++, i++) {
            if (i <= y)
                j < x ? printf("%d ", i) : printf("%d\n", i);
            else
                break;
        }
    }

    return 0;
}