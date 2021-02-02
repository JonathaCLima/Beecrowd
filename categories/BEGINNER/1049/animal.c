#include <stdio.h>
#include <string.h>

int main() {
    char animal[20];

    scanf("%s", animal);

    if (strcmp (animal, "vertebrado") == 0) {
        scanf("%s", animal);      
        if (strcmp (animal, "ave") == 0) {
            scanf("%s", animal);
            if (strcmp (animal, "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp (animal, "onivoro") == 0)
                printf("pomba\n");
        }
        else if (strcmp (animal, "mamifero") == 0) {
            scanf("%s", animal);
            if (strcmp (animal, "onivoro") == 0)
                printf("homem\n");
            else if (strcmp (animal, "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if (strcmp (animal, "invertebrado") == 0) {
        scanf("%s", animal);
        if (strcmp (animal, "inseto") == 0) {
            scanf("%s", animal);
            if (strcmp (animal, "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp (animal, "herbivoro") == 0)
                printf("lagarta\n");
        }
        else if (strcmp (animal, "anelideo") == 0) {
            scanf("%s", animal);
            if (strcmp (animal, "hematofago") == 0)
                printf("sanguessuga\n");  
            else if (strcmp (animal, "onivoro") == 0)
                printf("minhoca\n");
        }
    }

    return 0;
}