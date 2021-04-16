#include <stdio.h>

int main() {
    int n, number;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &number);
        for (int count = 2; count <= number; count++) {
            if (number % count == 0) {
                count == number ? printf("%d eh primo\n", number) : printf("%d nao eh primo\n", number);
                break;
            }
        }
    }

    return 0;
}