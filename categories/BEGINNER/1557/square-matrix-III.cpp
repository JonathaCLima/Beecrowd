#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int space(int);
int value(int, int);

int main()
{
    int n;

    while (cin >> n && n >= 1 && n <= 15)
    {
        for (int i {0}; i < n; i++)
        {
            for (int j {0}; j < n; j++)
            {
                cout << setw(space(n)) << value(i, j);
                j < (n - 1) ? cout << " " : cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}

int space(int n)
{
    int count {0}, size = pow(2, (n - 1) * 2);

    while (size != 0)
    {
        count++;
        size /= 10;
    }

    return count;
}

int value(int i, int j)
{
    return pow(2, i + j);
}