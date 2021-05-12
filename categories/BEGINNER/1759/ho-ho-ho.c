#include <stdio.h>

int main() {
    int quantity;

    scanf("%d", &quantity);

    for (int count = 1; count <= quantity; count++)
        printf(count < quantity ? "Ho " : "Ho!\n");

    return 0;
}