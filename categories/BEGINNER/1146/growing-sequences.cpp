#include <iostream>

using namespace std;

int main()
{
    int x;

    do
    {
        cin >> x;

        for (int i {1}; i <= x; i++)
        {
            i < x ? cout << i << " " : cout << x << endl;
        }

    } while (x != 0);

    return 0;
}