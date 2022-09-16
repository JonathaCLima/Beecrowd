#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;

    cin >> x;

    while (x--)
    {
        int x, y;

        cin >> x >> y;

        int r = pow(3 * x, 2) + pow(y, 2);      // (3x)² + y²
        int b = 2 * pow(x, 2) + pow(5 * y, 2);  // 2(x²) + (5y)²
        int c = -100 * x + pow(y, 3);           // -100x + y³

        if (r > b && r > c)
        {
            cout << "Rafael ganhou" << endl;
        }
        else if (b > r && b > c)
        {
            cout << "Beto ganhou" << endl;
        }
        else
        {
            cout << "Carlos ganhou" << endl;
        }
    }

    return 0;
}