#include <stdio.h>

int main() {
    float value;

    scanf ("%f", &value);

    if (value >= 0 && value <= 25)
        printf("Intervalo [0,25]\n");
    else if (value > 25 && value <= 50)
        printf("Intervalo (25,50]\n");
    else if (value > 50 && value <= 75)
        printf("Intervalo (50,75]\n");
    else if (value > 75 && value <= 100)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

    return 0;
}