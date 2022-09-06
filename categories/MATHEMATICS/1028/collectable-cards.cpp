#include <iostream>

using namespace std;

int mdc(int, int);

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        int f1, f2;
        cin >> f1 >> f2;
        cout << mdc(f1, f2) << endl;
    }

    return 0;
}

int mdc(int f1, int f2)
{
    if (f1 == f2)
    {
        return f1;
    }
    else
    {
        return f1 > f2 ? mdc(f1 - f2, f2) : mdc(f2, f1);
    }
}