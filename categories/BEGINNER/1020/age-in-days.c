#include <stdio.h>

int main() {
    int age, years, months, days;

    scanf("%d", &age);

    years  = (age / 365);
    months = (age % 365) / 30;
    days   = (age % 365) % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    
    return 0;
}