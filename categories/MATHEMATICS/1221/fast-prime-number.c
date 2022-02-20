#include <stdio.h>
#include <math.h>

typedef enum {False, True} boolean;

int main() {
    int n;

    scanf("%d", &n);

    while(n--) {
        int x, prime = True;

        scanf("%d", &x);

        if((x != 2 && x % 2 == 0) || x == 1)
            prime = False;

        for(int i = 3; i <= sqrt(x); i += 2)
            if(x % i == 0)
                prime = False;

        prime == True ? printf ("Prime\n") : printf("Not Prime\n");
    }

    return 0;
}