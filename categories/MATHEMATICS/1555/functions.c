#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    while(x--) {
        int x, y;

        scanf("%d %d", &x, &y);

        int r = ((3 * x) * (3 * x)) + (y * y); // (3x)² + y²
        int b = (2 * (x * x)) + ((5 * y) * (5 * y)); // 2(x²) + (5y)²
        int c = (-100 * x) + (y * y * y); // -100x + y³

        if(r > b && r > c) printf("Rafael ganhou\n");
        else if(b > r && b > c) printf("Beto ganhou\n");
        else printf("Carlos ganhou\n");
    }

    return 0;
}