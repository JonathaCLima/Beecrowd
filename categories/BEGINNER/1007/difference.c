#include <stdio.h>

int main() {
    int a, b, c, d, difference;
	
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    difference = (a * b) - (c * d);
    printf("DIFERENCA = %.1ld\n", difference);
 
    return 0;
}