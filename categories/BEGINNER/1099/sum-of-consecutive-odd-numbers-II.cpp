#include <iostream>

using namespace std;

int main()
{
    int total;

    cin >> total;

    for (int i {1}, x {0}, y {0}, summation {0}; i <= total; i++, summation = 0)
    {
        cin >> x >> y;

        if (x > y)
        {
            int temp {x};
            x = y;
            y = temp;
        }

        for (int i {++x}; i < y; i++)
        {
            if (i % 2 != 0)
            {
                summation += i;
            }
        }

        cout << summation << endl;
    }

    return 0;
}