#include <stdio.h>

int calculate_days(float x);

int main() {
    int n;

    scanf("%d", &n);

    while(n--) {
        float x;
        scanf("%f", &x);
        printf("%d dias\n", calculate_days(x));
    }

    return 0;
}

int calculate_days(float x) {
    int count = 0;

    while(x > 1) {
        x /= 2;
        count++;
    }

    return count;
}