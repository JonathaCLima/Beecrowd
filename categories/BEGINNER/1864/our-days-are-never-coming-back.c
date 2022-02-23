#include <stdio.h>

int main() {
    int n;
    char letters_underlined[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d", &n);

    letters_underlined[n] = '\0';

    printf("%s\n", letters_underlined);

    return 0;
}