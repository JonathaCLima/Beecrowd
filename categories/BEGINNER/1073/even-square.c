#include <stdio.h>

int main() {
    int total;

    scanf("%d", &total);

    for (int count = 2, square = 4; count <= total; count += 2, square = count * count)
        printf("%d^2 = %d\n", count, square);

    return 0;
}