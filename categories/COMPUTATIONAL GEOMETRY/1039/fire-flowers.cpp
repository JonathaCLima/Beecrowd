#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r1, x1, y1, r2, x2, y2;

    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
        cout << (r1 >= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) + r2 ? "RICO" : "MORTO") << endl;
    }

    return 0;
}