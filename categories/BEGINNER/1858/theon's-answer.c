#include <stdio.h>

int main() {
    int n, t, answer;

    scanf("%d", &n);

    for(int count = 1, lower = 21; count <= n; count++) {
        scanf("%d", &t);
        if (t < lower) {
            lower = t;
            answer = count;
        }
    }

    printf("%d\n", answer);

    return 0;
}