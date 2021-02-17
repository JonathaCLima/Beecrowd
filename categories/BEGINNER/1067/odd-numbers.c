#include <stdio.h>

int main() {
    int value;

    scanf("%d", &value);

    for (int count = 1; count <= value; count += 2)
        printf("%d\n", count);

    return 0;
}