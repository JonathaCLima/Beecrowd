#include <stdio.h>

int main() {
    int total, value;

    scanf("%d", &total);

    for (int count = 1; count <= total; count++) {
        scanf("%d", &value);
        if (value == 0)
            printf("NULL\n");
        else if ((value % 2 == 0) && (value > 0))
            printf("EVEN POSITIVE\n");
        else if ((value % 2 == 0) && (value < 0))
            printf("EVEN NEGATIVE\n");
        else if ((value % 2 != 0) && (value > 0))
            printf("ODD POSITIVE\n");
        else if ((value % 2 != 0) && (value < 0))
            printf("ODD NEGATIVE\n");
    }

    return 0;
}