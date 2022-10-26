#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    short const year {2015};

    for (int i {1}; i <= n; i++)
    {
        int t;
        cin >> t;

        if (t - year >= 0)
        {
            cout << abs(t - year) + 1 << " A.C." << endl;
        }
        else
        {
            cout << abs(t - year) << " D.C." << endl;
        }
    }

    return 0;
}