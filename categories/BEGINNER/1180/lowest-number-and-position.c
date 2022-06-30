#include <stdio.h>

int main() {
    int n, position = 0;

    scanf("%d", &n);

    int x[n];

    for (int count = 0, value; count < n; count++) {
        scanf("%d", &value);

        x[count] = value;

        if (x[count] < x[position])
            position = count;
    }

    printf("Menor valor: %d\nPosicao: %d\n", x[position], position);

    return 0;
}