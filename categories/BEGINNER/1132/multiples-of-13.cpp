#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int summation {0}, x, y;

    cin >> x >> y;

    if (x > y)
    {
        swap(x, y);
    }

    for (int i {x}; i <= y; i++)
    {
        if (i % 13 != 0)
        {
            summation += i;
        }
    }

    cout << summation << endl;

    return 0;
}