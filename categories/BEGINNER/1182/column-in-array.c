#include <stdio.h>

int main() {
    int column;
    float m[12][12], value, sum = 0;
    char operation;

    scanf("%d %c", &column, &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &value);
            m[i][j] = value;
            if (j == column) {
                sum += m[i][column];
            }
        }
    }

    operation == 'S' ? printf("%.1f\n", sum) : printf("%.1f\n", sum / 12);

    return 0;
}