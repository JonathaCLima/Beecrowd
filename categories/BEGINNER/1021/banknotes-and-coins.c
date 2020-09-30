#include <stdio.h>

int main() {
    char dot;
    int banknotes, coins;

    scanf("%d %c %d", &banknotes, &dot, &coins);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (banknotes / 100));
    printf("%d nota(s) de R$ 50.00\n",  (banknotes = (banknotes % 100)) / 50);
    printf("%d nota(s) de R$ 20.00\n",  (banknotes = (banknotes %  50)) / 20);
    printf("%d nota(s) de R$ 10.00\n",  (banknotes = (banknotes %  20)) / 10);
    printf("%d nota(s) de R$ 5.00\n",   (banknotes = (banknotes %  10)) /  5);
    printf("%d nota(s) de R$ 2.00\n",   (banknotes = (banknotes %   5)) /  2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",  (banknotes = (banknotes %   2)) /  1);
    printf("%d moeda(s) de R$ 0.50\n",  (coins = (coins % 100)) / 50);
    printf("%d moeda(s) de R$ 0.25\n",  (coins = (coins %  50)) / 25);
    printf("%d moeda(s) de R$ 0.10\n",  (coins = (coins %  25)) / 10);
    printf("%d moeda(s) de R$ 0.05\n",  (coins = (coins %  10)) /  5);
    printf("%d moeda(s) de R$ 0.01\n",  (coins = (coins %   5)) /  1);

    return 0;
}