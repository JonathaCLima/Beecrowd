#include <stdio.h>

int sum_consecutive_even(int x) {
    int summation = 0;
    for (int count = 1; count <= 5; count++, x += 2)
        summation += x;
    return summation;
}

int main() {
    int x;

    scanf("%d", &x);

    while (x != 0) {
        x % 2 == 0 ? printf("%d\n", sum_consecutive_even(x)) : printf("%d\n", sum_consecutive_even(++x));
        scanf("%d", &x);
    }

    return 0;
}