#include <iostream>

using namespace std;

int main()
{
    int summation {0}, x, y;

    cin >> x >> y;

    if (x > y)
    {
        int temp = x;
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

    return 0;
}