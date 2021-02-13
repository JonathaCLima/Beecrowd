#include <stdio.h>

int main() {
    int quantity = 0, value;

    for (int count = 1; count <= 5; count++) {
        scanf("%d", &value);
        if (value % 2 == 0)
            quantity++;
    }

    printf("%d valores pares\n", quantity);

    return 0;
}