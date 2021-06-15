#include <stdio.h>

int main() {
    float m[12][12], value, sum = 0;
    char operation;

    scanf("%c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &value);
            m[i][j] = value;
            if (i > j) {
                sum += m[i][j];
            }
        }
    }

    operation == 'S' ? printf("%.1f\n", sum) : printf("%.1f\n", sum / 66);

    return 0;
}