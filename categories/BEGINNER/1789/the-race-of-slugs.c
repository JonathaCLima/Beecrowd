#include <stdio.h>

int bigger(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int l, v, count, level;

    while(scanf("%d", &l) != EOF) {
        for(count = 0, level = 0; count < l; count++) {
            scanf("%d", &v);
            level = bigger(v, level);
        }
        
        if(level < 10)
            printf("1\n");
        else
            level < 20 ? printf("2\n") : printf("3\n");
    }

    return 0;
}