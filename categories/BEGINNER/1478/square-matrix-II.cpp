#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
    int n;

    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        for (int i {0}; i < n; i++)
        {
            for (int j {0}; j < n; j++)
            {
                if (j < (n - 1))
                {
                    cout << setw(3) << 1 + abs(i - j) << " ";
                }
                else
                {
                    cout << setw(3) << 1 + abs(i - j) << endl;
                }
            }
        }
        cout << endl;
    }

    return 0;
}