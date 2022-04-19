#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if ((a < b) && (a < c))
    {
        (b < c ? cout << a << endl << b << endl << c << endl : cout << a << endl << c << endl << b << endl) << endl;
    }
    else
    {
        if ((b < a) && (b < c))
        {
            (a < c ? cout << b << endl << a << endl << c << endl : cout << b << endl << c << endl << a << endl) << endl;
        }
        else
        {
            (a < b ? cout << c << endl << a << endl << b << endl: cout << c << endl << b << endl << a << endl) << endl;
        }
    }

    cout << a << endl << b << endl << c << endl;

    return 0;
}