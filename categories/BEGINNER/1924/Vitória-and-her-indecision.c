#include <stdio.h>

int main() {
    int n;
    char s[100];

    scanf("%d", &n);

    do {
        fgets(s, sizeof(s), stdin);
    } while(n--);

    printf("Ciencia da Computacao\n");

    return 0;
}