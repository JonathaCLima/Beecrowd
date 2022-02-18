#include <stdio.h>
#include <string.h>

int main() {
    int n;

    scanf("%d", &n);

    while(n--) {
        char a[1000], b[1000];
        scanf("%s %s", a, b);
        strcmp(&a[strlen(a) - strlen(b)], b) == 0 ? printf("encaixa\n") : printf("nao encaixa\n");
    }

    return 0;
}