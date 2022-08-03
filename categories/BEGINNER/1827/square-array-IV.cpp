#include <iostream>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        for (int i {1}; i <= n; i++)
        {
            for (int j {1}; j <= n; j++)
            {
                if (j == i && i == 1 + n / 2 && n % 2 != 0)
                {
                    cout << 4;
                }
                else if (i > n / 3 && i <= n - n / 3 && j > n / 3 && j <= n - n / 3)
                {
                    cout << 1;
                }
                else if (i == j)
                {
                    cout << 2;
                }
                else
                {
                    cout << (i == n + 1 - j ? 3 : 0);
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}