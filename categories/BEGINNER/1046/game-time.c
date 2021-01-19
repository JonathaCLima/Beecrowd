#include <stdio.h>

int main() {
    int start_time, end_time, duration;

    scanf("%d %d", &start_time, &end_time);

    duration = ((24 - start_time) + end_time);

    if (duration > 24)
        duration -= 24;

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}