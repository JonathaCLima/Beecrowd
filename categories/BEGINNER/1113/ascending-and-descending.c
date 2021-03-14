#include <stdio.h>

int order(int x, int y) {
    if (x == y)
        return 0;
    return x > y ? printf("Decrescente\n") : printf("Crescente\n");
}

int main() {
    int x, y;
    
    do {
        scanf("%d %d", &x, &y);
        order(x, y);
    } while (x != y);

    return 0;
}