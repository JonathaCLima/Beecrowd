#include <stdio.h>

int main() {
    int total;

    scanf("%d", &total);

    while (total--) {
        int number, summation = 0;

        scanf("%d", &number);

        for (int count = 1; count < number; count++) {
            if (number % count == 0)
                summation += count;
        }
        summation == number ? printf("%d eh perfeito\n", number) : printf("%d nao eh perfeito\n", number);
    }
    return 0;
}