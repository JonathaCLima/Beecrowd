#include <stdio.h>

int mdc(int n1, int d1);
int abs(int x);

int main () {
    int n, n1, d1, n2, d2;
    char operation;

    scanf("%d", &n);

    do {
        n--;
        scanf("%d / %d %c %d / %d", &n1, &d1, &operation, &n2, &d2);
        switch (operation) {
            case '+':
                n1 = (n1 * d2 + n2 * d1);
                d1 = (d1 * d2);;
            break;
            case '-':
                n1 = (n1 * d2 - n2 * d1);
                d1 = (d1 * d2);
            break;
            case '*':
                n1 = (n1 * n2);
                d1 = (d1 * d2);
            break;
            case '/':
                n1 = (n1 * d2);
                d1 = (n2 * d1);
            break;
        }
        printf("%d/%d = %d/%d\n", n1, d1, n1/mdc(abs(n1), abs(d1)), d1/mdc(abs(n1), abs(d1)));
    } while (n > 0);
    
    return 0;
}

int mdc(int n1, int d1) {
    return n1 % d1 == 0 ? d1 : mdc(d1, n1 % d1);
}

int abs(int x) {
    return x < 0 ? x * (- 1) : x;
}