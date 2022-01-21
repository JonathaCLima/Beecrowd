#include <stdio.h>

int main() {
    int x1, y1, x2, y2;

    while((scanf("%d %d %d %d", &x1, &y1, &x2, &y2)) && (x1 != 0 || y1 !=0 || x2 != 0 || y2 != 0)) {
        if(x1 == x2 && y1 == y2) { printf("0\n"); continue; }
        if((x2 - x1) == -(y2 - y1) || -(x2 - x1) == -(y2 - y1) || -(x2 - x1) == (y2 - y1) || (x2 - x1) == (y2 - y1)) { printf("1\n"); continue; }
        x1 == x2 || y1 == y2 ? printf("1\n") : printf("2\n");
    }

    return 0;
}