#include <stdio.h>

int main() {
    int n;

    while(scanf("%d", &n) && n != 0) {
        int r, head = 0, tail = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &r);
            r == 0 ? head++ : tail++;
        }
        printf("Mary won %d times and John won %d times\n", head, tail);
    }

    return 0;
}