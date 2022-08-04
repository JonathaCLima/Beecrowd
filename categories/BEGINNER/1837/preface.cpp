#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, q, r;

    cin >> a >> b;

    if (a < 0)
    {
        for (r = 0; r < abs(b); r++)
        {
            if ((a - r) % b == 0)
            {
                break;
            }
        }
        q = (a - r) / b;
    }
    else
    {
        q = a / b;
        r = a % b;
    }

    cout << q << " " << r << endl;

    return 0;
}