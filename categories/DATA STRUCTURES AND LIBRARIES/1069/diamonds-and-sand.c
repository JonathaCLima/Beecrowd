#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char mine[1000];

    scanf("%d", &n);

    while(n--) {
        scanf("%s", mine);

        for(int i = 0, diamond = 0, extract = 0; i <= strlen(mine); i++) {
            if(mine[i] == '.') continue;
            if(mine[i] == '<') { diamond++; continue; }
            if(mine[i] == '>' && diamond > 0) { extract++; diamond--; continue; }
            if(mine[i] == '\0') { printf("%d\n", extract); break; }
        }
    }

    return 0;
}