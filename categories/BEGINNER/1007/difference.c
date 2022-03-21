#include <stdio.h>

int main() {
    int a, b, c, d, difference;
	
    scanf("%d %d %d %d", &a, &b, &c, &d);
    difference = (a * b) - (c * d);
    printf("DIFERENCA = %.1d\n", difference);
 
    return 0;
}