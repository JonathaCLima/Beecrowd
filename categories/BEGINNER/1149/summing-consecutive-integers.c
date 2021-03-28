#include <stdio.h>

int main() {
    int sum = 0, a, n;

    scanf("%d", &a);

    do {
        scanf("%d", &n);
    }
    while (n <= 0);

    for (int count = 0; count < n; count++)
        sum += (count + a);

    printf("%d\n", sum);

    return 0;
}