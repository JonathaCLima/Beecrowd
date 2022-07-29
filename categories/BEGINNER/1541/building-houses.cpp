#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;

    while (cin >> a >> b >> c && a != 0 && b != 0 && c != 0)
    {
        cout << static_cast<int>(pow(a * b * 100 / c, 0.5)) << endl;
    }

    return 0;
}