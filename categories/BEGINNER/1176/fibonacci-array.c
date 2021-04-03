#include <stdio.h>

unsigned long long int fibonacci(int x) {
    unsigned long long int fibonacci[x];

    for (int count = 0; count <= x; count++) {
        if (count < 2)
            fibonacci[count] = count;
        else
            fibonacci[count] = fibonacci[count - 2] + fibonacci[count - 1];
    }

    return fibonacci[x];
}

int main() {
    int total;
    
    scanf("%d", &total);
    
    for (int count = 1, n; count <= total; count++) {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fibonacci(n));
    }

    return 0;
}