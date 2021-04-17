#include <stdio.h>

int main() {
    int v, n[10];

    scanf("%d", &v);

    for (int count = 0; count < 10; count++, v *= 2)
        printf("N[%d] = %d\n", count, n[count] = v);

    return 0;
}