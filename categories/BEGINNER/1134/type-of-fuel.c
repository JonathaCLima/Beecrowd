#include <stdio.h>

int main() {
    int product_code, alcohol = 0, gasoline = 0, diesel = 0;

    do {
        scanf("%d", &product_code);

        switch(product_code) {
            case 1:
                alcohol++;
            break;
            case 2:
                gasoline++;
            break;
            case 3:
                diesel++;
            break;
            case 4:
                printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcohol, gasoline, diesel);
            break;
        }
    }
    while (product_code != 4);

    return 0;
}