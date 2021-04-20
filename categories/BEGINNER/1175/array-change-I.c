#include <stdio.h>

void array_change(int *n, int first, int last) {
    int temp = n[first];
    n[first] = n[last];
    n[last]  = temp;
}

int main() {
    int n[20];

    for (int count = 0; count < 20; count++)
        scanf("%d", &n[count]);

    for (int first = 0, last = 19; first < 10; first++, last--)
        array_change(n, first, last);

    for (int count = 0; count < 20; count++)
        printf("N[%d] = %d\n", count, n[count]);

    return 0;
}