#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i {1}; i <= t; i++)
    {
        int r1, r2;

        cin >> r1 >> r2;

        cout << (r1 + r2) << endl;
    }

    return 0;
}