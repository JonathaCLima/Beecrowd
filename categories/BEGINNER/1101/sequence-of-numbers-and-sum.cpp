#include <iostream>

using namespace std;

int bigger(int, int);

int main()
{
    int m, n;

    do
    {
        int summation {0};

        cin >> m >> n;

        if (n <= 0 || m <= 0)
        {
            break;
        }

        for (int i {(m + n) - bigger(m, n)}; i <= bigger(m, n); i++)
        {
            cout << i << " ";
            summation += i;
        }

        cout << "Sum=" << summation << endl;

    } while (n > 0 && m > 0);

    return 0;
}

int bigger(int x, int y)
{
    return x > y ? x : y;
}