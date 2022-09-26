#include <stdio.h>
#include <strings.h>
#include <stdbool.h>

bool bazinga(char [], char []);

int main() {
    int t;
    char sheldon[8], raj[8];

    scanf("%d", &t);

    for(int i = 1; i <= t; i++) {
        scanf("%s %s", sheldon, raj);

        if(!strcasecmp(sheldon, raj))
            printf("Caso #%d: De novo!\n", i);
        else if(bazinga(sheldon, raj))
            printf("Caso #%d: Bazinga!\n", i);
        else
            printf("Caso #%d: Raj trapaceou!\n", i);
    }

    return 0;
}

bool bazinga(char sheldon[], char raj[]) {
    return (
        (!strcasecmp(sheldon, "tesoura") && (!strcasecmp(raj, "papel")   || !strcasecmp(raj, "lagarto"))) ||
        (!strcasecmp(sheldon, "papel")   && (!strcasecmp(raj, "pedra")   || !strcasecmp(raj, "Spock")))   ||
        (!strcasecmp(sheldon, "pedra")   && (!strcasecmp(raj, "lagarto") || !strcasecmp(raj, "tesoura"))) ||
        (!strcasecmp(sheldon, "lagarto") && (!strcasecmp(raj, "Spock")   || !strcasecmp(raj, "papel")))   ||
        (!strcasecmp(sheldon, "Spock")   && (!strcasecmp(raj, "tesoura") || !strcasecmp(raj, "pedra")))
    );
}