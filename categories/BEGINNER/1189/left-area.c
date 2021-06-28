#include <stdio.h>

int main() {
    double m[12][12], value, sum = 0;
    char operation;

    scanf("%c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &value);
            m[i][j] = value;
            if (i > j && j < 11 - i) {
                sum += m[i][j];
            }
        }
    }

    operation == 'S' ? printf("%.1lf\n", sum) : printf("%.1lf\n", sum / 30);

    return 0;
}