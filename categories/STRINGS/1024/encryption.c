#include <stdio.h>
#include <string.h>

int main() {
    int n;

    scanf("%d", &n);

    while (n--) {
        char m[1100], temp;
        
        scanf(" %[^\n]", m);

        for (int i = 0; i < strlen(m); i++)
            if ((m[i] >= 'A' && m[i] <= 'Z') || (m[i] >= 'a' && m[i] <= 'z'))
                m[i] += 3;

        for (int i = 0, j = strlen(m) - 1; i < strlen(m) / 2; i++, j--) {
            temp = m[j];
            m[j] = m[i];
            m[i] = temp;
        }

        for (int i = strlen(m) / 2; i < strlen(m); i++)
            m[i] -= 1;

        printf("%s\n", m);
    }

    return 0;
}