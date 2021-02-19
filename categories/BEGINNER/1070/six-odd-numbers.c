#include <stdio.h>

int main() {
    int value;

    scanf("%d", &value);

    for (int count = value; count < (value + 12); count++) {
        if (count % 2 != 0)
            printf("%d\n", count);
    }

    return 0;
}