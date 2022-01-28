#include <stdio.h>
#include <string.h>

int main() {
    int c, force;
    char name[50];

    scanf("%d", &c);

    while(c--) {
        scanf("%s %d", name, &force);
        strcmp(name, "Thor") == 0 ? printf("Y\n") : printf("N\n");
    }

    return 0;
}