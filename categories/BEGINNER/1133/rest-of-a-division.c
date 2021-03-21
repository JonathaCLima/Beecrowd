#include <stdio.h>

int bigger(int x, int y) {
    return x > y ? --x : --y;
}

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    for (int count = (x + y) - bigger(x, y); count <= bigger(x, y); count++) {
        if (count % 5 == 2 || count % 5 == 3)
            printf("%d\n", count);
    }

    return 0;
}