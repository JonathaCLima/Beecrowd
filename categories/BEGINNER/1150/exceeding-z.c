#include <stdio.h>

int main() {
    int x, z, amount = 0;

    scanf("%d", &x);

    do {
        scanf("%d", &z);
    }
    while (z <= x);

    for (int count = x, summation = 0; summation < z; count++, amount++)
        summation += count;

    printf("%d\n", amount);

    return 0;
}