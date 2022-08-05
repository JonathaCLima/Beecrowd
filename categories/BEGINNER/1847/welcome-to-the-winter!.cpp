#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    
    if (a > b)
    {
        if (b <= c)
        {
            cout << ":)" << endl;
        }
        else
        {
            cout << (b - c < a - b ? ":)" : ":(") << endl;
        }
    }
    if (a < b)
    {
        if (b >= c)
        {
            cout << ":(" << endl;
        }
        else
        {
            cout << (c - b < b - a ? ":(" : ":)") << endl;
        }
    }
    if (a == b)
    {
        cout << (b < c ? ":)" : ":(") << endl;
    }

    return 0;
}