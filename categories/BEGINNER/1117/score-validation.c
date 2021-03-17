#include <stdio.h>

float validation(float score) {
    return score >= 0.0 && score <= 10.0 ? score / 2 : printf("nota invalida\n") - 14;
}

int main() {
    float score[2], average = 0.0;

    for (int count = 0; count < 2; count++) {
        do {
            scanf("%f", &score[count]);
            average += validation(score[count]);
        }
        while (score[count] < 0.0 || score[count] > 10.0);
    }
    
    printf("media = %.2f\n", average);

    return 0;
}