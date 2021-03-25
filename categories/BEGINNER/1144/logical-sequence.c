#include <stdio.h>
#include <math.h>

int main() {
    int total;

    scanf("%d", &total);

    for (int count = 1, squared = 1, cubic = 1; count <= total; count++, squared = pow(count, 2), cubic = pow(count, 3)) {
        printf("%d %d %d\n", count, squared, cubic);
        printf("%d %d %d\n", count, ++squared, ++cubic);
    }

    return 0;
}