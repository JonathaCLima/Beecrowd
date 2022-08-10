#include <iostream>

using namespace std;

int main()
{
    int c;

    cin >> c;

    while (c--)
    {
        int n;

        cin >> n;

        cout << (n % 2 == 0 ? "0" : "1") << endl;
    }

    return 0;
}