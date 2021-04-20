#include <stdio.h>

int main() {
    int t, n[1000];

    scanf("%d", &t);

    for (int count = 0; count < 1000;) {
        for (int fill = 0; fill < t && count < 1000; count++, fill++)
            printf("N[%d] = %d\n", count, n[count] = fill);
    }

    return 0;
}