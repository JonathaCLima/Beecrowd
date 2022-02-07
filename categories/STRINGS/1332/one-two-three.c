#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char word[5];

    scanf("%d", &n);

    while(n--) {
        scanf("%s", word);
        if(strlen(word) == 5) printf("3\n");
        else(word[0] == 'o' && word[1] == 'n' || word[0] == 'o' && word[2] == 'e' || word[1] == 'n' && word[2] == 'e') ? printf("1\n") : printf("2\n");
    }

    return 0;
}