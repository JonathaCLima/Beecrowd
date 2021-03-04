#include <stdio.h>

int main() {
    int total;
    float weighted_average, value_1, value_2, value_3;

    scanf("%d", &total);

    for (int count = 1; count <= total; count++) {
        scanf("%f %f %f", &value_1, &value_2, &value_3);
        weighted_average = ((value_1 * 2) + (value_2 * 3) + (value_3 * 5)) / 10;
        printf("%.1f\n", weighted_average);
    }

    return 0;
}