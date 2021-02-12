#include <stdio.h>

int main() {
    float summation = 0, average, value;
    int quantity = 0;

    for (int count = 1; count <= 6; count++) {
        scanf("%f", &value);
        if (value > 0) {
            quantity += 1;
            summation += value;
        }
    }

    average = summation / quantity;

    printf("%d valores positivos\n%.1f\n", quantity, average);

    return 0;
}