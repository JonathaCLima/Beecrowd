#include <stdio.h>

int mdc(int f1, int f2) {
    if (f1 == f2)
        return f1;
    else
        return f1 > f2 ? mdc(f1 - f2, f2) : mdc(f2, f1);
}

int main() {
    int n, f1, f2;
    
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1, f2));
    }
    
    return 0;
}