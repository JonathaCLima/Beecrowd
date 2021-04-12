#include <stdio.h>
#include <string.h>

int binary_number(char blink[]) {
    int sum = 0;
    if (blink[0] == '*') sum += 4;
    if (blink[1] == '*') sum += 2;
    if (blink[2] == '*') sum += 1;
    return sum;
}

int main() {
    char blink[10];

    for (int count = 1, winning_number = 0; count <= 3; count++, winning_number = 0) {
        while (scanf ("%[^\n]%*c", blink) == 1) {
            if (strcmp (blink, "caw caw") == 0)
                break;
            else
                winning_number += binary_number(blink);
        }
        printf("%d\n", winning_number);
    }

    return 0;
}