#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int p, n;

    scanf("%d %d", &p, &n);

    int heights[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
    }

    bool survive = true;

    for (int i = 0; i < n - 1 && survive; i++) {
        if (abs(heights[i] - heights[i + 1]) > p) {
            survive = false;
        }
    }

    printf(survive ? "YOU WIN\n" : "GAME OVER\n");

    return 0;
}