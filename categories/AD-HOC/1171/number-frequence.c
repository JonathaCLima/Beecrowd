#include <stdio.h>

int main() {
    int n, x, frequence[2001] = {0};

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &x);
        frequence[x]++;
    }

    for(int i = 0; i < 2001; i++)
        if(frequence[i] > 0) printf("%d aparece %d vez(es)\n", i, frequence[i]);

    return 0;
}