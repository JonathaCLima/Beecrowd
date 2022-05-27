#include <iostream>

using namespace std;

int main()
{
    int password;

    do
    {
        cin >> password;
        cout << (password != 2002 ? "Senha Invalida" : "Acesso Permitido") << endl;
    }
    while (password != 2002);

    return 0;
}