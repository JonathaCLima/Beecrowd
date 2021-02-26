#include <stdio.h>

int main() {
    int in = 0, out = 0, total, value;

    scanf("%d", &total);

    for (int count = 1; count <= total; count++) {
        scanf("%d", &value);
        ((value >= 10) && (value <= 20)) ? in++ : out++;
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}