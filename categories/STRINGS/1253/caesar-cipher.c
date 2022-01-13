#include <stdio.h>
#include <string.h>

int main() {
    int n, number;
    char text[50];

    scanf("%d", &n);

    while(n--) {
        scanf("%s", text);
        scanf("%d", &number);
        for(int i = 0; i < strlen(text); i++)
            text[i] - number < 65 ? printf("%c", (text[i] - number) + 26) : printf("%c", (text[i] - number));
        printf("\n");    
    }

    return 0;
}