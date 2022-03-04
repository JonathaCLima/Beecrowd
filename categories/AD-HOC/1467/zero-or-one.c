#include <stdio.h>

int main() {
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF) {
        if(a != b)
            a != c ? printf("A\n") : printf("B\n");
        else
            a != c ? printf("C\n") : printf("*\n");
    }

    return 0;
}