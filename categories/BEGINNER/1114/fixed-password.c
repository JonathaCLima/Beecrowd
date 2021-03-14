#include <stdio.h>

int main() {
    int password;

    do {
        scanf("%d", &password);
        password != 2002 ? printf("Senha Invalida\n") : printf("Acesso Permitido\n");
    }
    while (password != 2002);

    return 0;
}