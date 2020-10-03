#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, root_1, root_2, delta;

    scanf("%f %f %f", &a, &b, &c);

    delta = ((b * b) - (4 * a * c));

    if (delta > 0 && a != 0) {
        root_1 = (- b + sqrt(delta)) / (2 * a);
        root_2 = (- b - sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", root_1, root_2);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}