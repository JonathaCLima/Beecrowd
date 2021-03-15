#include <stdio.h>

void quadrant(int x, int y) {
    if (x > 0 && y != 0) 
        y > 0 ? printf("primeiro\n") : printf("quarto\n");
    else if (x < 0 && y != 0)
        y > 0 ? printf("segundo\n") : printf("terceiro\n");
}

int main() {
    int x, y;

    do {
        scanf("%d %d", &x, &y);
        quadrant(x, y);
    } while (x != 0 && y != 0);

    return 0;
}