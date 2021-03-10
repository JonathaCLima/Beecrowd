#include <stdio.h>

int main() {

    for (float count = 1, i = 0; i <= 2.01; count += 0.2, i += 0.2) {
        for (float j = count; j <= count + 2.01; j++)
            ((i == 0.0) || (i == 1.0) || (i >= 2.0)) ? printf("I=%.0f J=%.0f\n", i, j) : printf("I=%.1f J=%.1f\n", i, j);
    }

    return 0;
}