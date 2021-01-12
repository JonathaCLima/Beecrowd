#include <stdio.h>

int main() {
    float n1, n2, n3, n4, exam_score, final_average, average;

    scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);

    average = (((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10);

    printf("Media: %.1f\n", average);

    if (average >= 7)
        printf("Aluno aprovado.\n");
    else if (average < 5)
        printf("Aluno reprovado.\n");
        else {
            printf("Aluno em exame.\n");
            scanf("%f", &exam_score);
            printf("Nota do exame: %.1f\n", exam_score);
            final_average = ((exam_score + average) / 2);
            if (final_average >= 5)
                printf("Aluno aprovado.\nMedia final: %.1f\n", final_average);
            else
                printf("Aluno reprovado.\nMedia final: %.1f\n", final_average);
        }

    return(0);
}