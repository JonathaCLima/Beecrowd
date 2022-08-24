#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int l, c, r1, r2;

    while ((cin >> l >> c >> r1 >> r2) && (l || c || r1 || r2))
    {
        cout << (r1 * 2 <= l && r1 * 2 <= c && r2 * 2 <= l && r2 * 2 <= c && sqrt(pow((r1 - (c - r2)), 2) + pow(((l - r1) - r2), 2)) >= (r1 + r2) ? "S" : "N") << endl;
    }

    return 0;
}