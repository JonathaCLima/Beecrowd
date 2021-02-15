#include <stdio.h>

int main() {
    int value, even = 0, odd = 0, positive = 0, negative = 0;

    for (int count = 1; count <=5; count++) {
        scanf("%d", &value);
        if (value % 2 == 0)
            even++;
        if (value % 2 != 0)
            odd++;
        if (value > 0)
            positive++;
        if (value < 0)
            negative++;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);

    return 0;
}