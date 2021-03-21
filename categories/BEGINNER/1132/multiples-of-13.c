#include <stdio.h>

int bigger(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int summation = 0, x, y;

    scanf("%d %d", &x, &y);

    for (int count = (x + y) - bigger(x, y); count <= bigger(x, y); count++) {
        if (count % 13 != 0)
            summation += count;
    }

    printf("%d\n", summation);

    return 0;
}