#include <stdio.h>

void statistics(int grenais, int victories_inter, int victories_gremio, int draws) {
    if (victories_inter > victories_gremio)
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n", grenais, victories_inter, victories_gremio, draws);
    if (victories_inter < victories_gremio)
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nGremio venceu mais\n", grenais, victories_inter, victories_gremio, draws);
    if (victories_inter == victories_gremio)
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nNao houve vencedor\n", grenais, victories_inter, victories_gremio, draws);
}

int main() {
    int x, goals_inter, goals_gremio, victories_inter = 0, victories_gremio = 0, draws = 0, grenais = 0;

    do {
        scanf("%d %d", &goals_inter, &goals_gremio);
        grenais++;

        if (goals_inter > goals_gremio)
            victories_inter++;
        if (goals_inter < goals_gremio)
            victories_gremio++;
        if (goals_inter == goals_gremio)
            draws++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);
    }
    while (x == 1);

    statistics(grenais, victories_inter, victories_gremio, draws);

    return 0;
}