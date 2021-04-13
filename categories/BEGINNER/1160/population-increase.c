#include <stdio.h>

int main() {
    int t, pa, pb;
    double g1, g2;

    scanf("%d", &t);

    for (int count = 1, time = 0; count <= t; count++, time = 0) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while ((pa <= pb) && (time <= 100)) {
            pa =+ pa * ((g1 / 100) + 1);
            pb =+ pb * ((g2 / 100) + 1);
            time++;
        }
        time > 100 ? printf("Mais de 1 seculo.\n") : printf("%d anos.\n", time);
    }

    return 0;
}