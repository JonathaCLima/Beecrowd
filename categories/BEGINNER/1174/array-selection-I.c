#include <stdio.h>

int main() { 
    float a[100];

    for (int count = 0; count < 100; count++) {
        scanf("%f", &a[count]);
        if (a[count] <= 10.0)
            printf("A[%d] = %.1f\n", count, a[count]);
    }

    return 0;
}