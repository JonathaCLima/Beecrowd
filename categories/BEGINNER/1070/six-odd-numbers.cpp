#include <iostream>

using namespace std;

int main()
{
    int value;

    cin >> value;

    for (int i {value}; i < (value + 12); i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}