#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        string a, b;
        cin >> a >> b;

        a.erase(0, a.length() - b.length());

        cout << (a.compare(b) ? "nao encaixa" : "encaixa") << endl;
    }

    return 0;
}