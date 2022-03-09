#include <stdio.h>
#include <string.h>

int main() {
    char d, n[200];

    while (scanf("%s %s", &d, n)) {
        if (d == '0' && n[0] == '0')
            break;

        int chk = 0;

        for (int i = 0; i < strlen(n); i++) {
            if (d != n[i]) {
                if (n[i] == '0' && chk != 0)
                    printf("%c", n[i]);
                else if (n[i] != '0' || chk != 0) {
                    printf("%c", n[i]);
                    chk++;
                }
            }
        }

        chk == 0 ? printf("0\n") : printf("\n");
    }

    return 0;
}