#include <stdio.h>

int main() {
    int value;

    scanf("%d", &value);

    printf("%d\n", value);
    printf("%d nota(s) de R$ 100,00\n", (value / 100));
    printf("%d nota(s) de R$ 50,00\n",  (value = (value % 100)) / 50);
    printf("%d nota(s) de R$ 20,00\n",  (value = (value %  50)) / 20);
    printf("%d nota(s) de R$ 10,00\n",  (value = (value %  20)) / 10);
    printf("%d nota(s) de R$ 5,00\n",   (value = (value %  10)) /  5);
    printf("%d nota(s) de R$ 2,00\n",   (value = (value %   5)) /  2);
    printf("%d nota(s) de R$ 1,00\n",   (value % 2));
    
    return 0;
}