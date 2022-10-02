#include <stdio.h>

typedef struct Player {
    char name[50];
    char choice[5];
} Player;

int main() {
    int qt;

    scanf("%d", &qt);

    while(qt--) {
        int n, m;
        Player p1, p2;

        scanf("%s %s %s %s", p1.name, p1.choice, p2.name, p2.choice);
        scanf("%d %d", &n, &m);

        if((n + m) % 2 == 0)
            printf("%s\n", (p1.choice[0] == 'P' ? p1.name : p2.name));
        else
            printf("%s\n", (p1.choice[0] == 'I' ? p1.name : p2.name));
    };

    return 0;
}