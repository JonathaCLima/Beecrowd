#include <iostream>

using namespace std;

int main()
{
    int x, y;

    do
    {
        cin >> x >> y;

        if (x != y)
        {
            cout << (x > y ? "Decrescente" : "Crescente") << endl;
        }
    } while (x != y);

    return 0;
}