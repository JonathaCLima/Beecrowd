#include <stdio.h>

int main() {
    float value;
    int positive = 0;

    for (int count = 1; count <= 6; count++) {
        scanf("%f", &value);
        if (value > 0)
            positive++;
    }

    printf("%d valores positivos\n", positive);

    return 0;
}