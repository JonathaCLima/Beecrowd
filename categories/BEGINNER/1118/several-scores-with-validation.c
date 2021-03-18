#include <stdio.h>

float validation(float score) {
    return score >= 0.0 && score <= 10.0 ? score / 2 : printf("nota invalida\n") - 14;
}

int main() {
    float score[2], average = 0.0;
    int x;

    do {
        for (int count = 0; count < 2; count++) {
            do {
                scanf("%f", &score[count]);
                average += validation(score[count]);
            }
            while (score[count] < 0.0 || score[count] > 10.0);
            if (count == 1) {
                printf("media = %.2f\n", average);
                average = 0.0;
                do {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &x);
                } while (x < 1 || x > 2);
            }
        }
    } while (x == 1);

    return 0;
}