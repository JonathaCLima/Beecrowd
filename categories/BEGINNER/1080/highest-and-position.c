#include <stdio.h>

int main() {
    int highest, position, value[100];

    for (int count = 1; count <= 100; count++, value[1] = highest) {
        scanf("%d", &value[count]);
        if (value[count] >= value[1]) {
            highest = value[count];
            position = count;
        }
    }

    printf("%d\n%d\n", highest, position);

    return 0;
}