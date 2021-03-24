#include <stdio.h>

int main() {
    int total;

    scanf("%d", &total);

    for (int i = 1; i <= total * 4; i++) {
        for (int j = 1; j <= 3; j++, i++)
            j < 3 ? printf("%d ", i) : printf("%d PUM\n", i);
    }

    return 0;
}