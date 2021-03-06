#include <stdio.h>

int main() {
    int total, animals, frog = 0, rat = 0, rabbit = 0;
    char type;

    scanf("%d", &total);

    for (int count = 1, amount; count <= total; count++) {
        scanf("%d %c", &amount, &type);
        if (type == 'S')
            frog += amount;
        else if (type == 'R')
            rat += amount;
        else if (type == 'C')
            rabbit += amount;
    }

    animals = frog + rat + rabbit;

    printf("Total: %d cobaias\n", animals);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2f %%\n", (100 / (float)animals * rabbit));
    printf("Percentual de ratos: %.2f %%\n", (100 / (float)animals * rat));
    printf("Percentual de sapos: %.2f %%\n", (100 / (float)animals * frog));

    return 0;
}