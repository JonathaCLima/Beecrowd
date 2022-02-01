#include <stdio.h>

int main () {
    int n, l[1001], m[6] = {0};

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &l[n]);
        for(int i = 2; i <= 5; i++)
            if(l[n] % i == 0) m[i]++;
    }

    for(int i = 2; i <= 5; i++)
        printf("%d Multiplo(s) de %d\n", m[i], i);

    return 0;
}