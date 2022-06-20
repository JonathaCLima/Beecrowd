#include <iostream>

using namespace std;

int sum_consecutive_odd(int, int);

int main()
{
    int total;

    cin >> total;

    for (int i {1}, x {0}, y {0}; i <= total; i++)
    {
        cin >> x >> y;
        cout << sum_consecutive_odd(x, y) << endl;
    }

    return 0;
}

int sum_consecutive_odd(int x, int y)
{
    int summation {0};

    while (y > 0)
    {
        if (x % 2 != 0)
        {
            summation += x;
            x += 2;
            y--;
        }
        else
        {
            x++;
        }
    }

    return summation;
}