#include <stdio.h>
#include <string.h>

#define LARGER(a, b) a > b ? a : b

int main() {
    int n;
    char s1[50], s2[50];
    
    scanf("%d", &n);
    
    while(n--) {
        scanf("%s %s", s1, s2);
        unsigned short size = LARGER(strlen(s1), strlen(s2)), i = 0;
        
        while(size--) {
            if(i < strlen(s1))
                printf("%c", s1[i]);
            if(i < strlen(s2))
                printf("%c", s2[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}