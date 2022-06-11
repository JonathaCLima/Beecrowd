#include <iostream>

using namespace std;

int main()
{
    int x, z, amount {0};

    cin >> x;

    do
    {
        cin >> z;
    } while (z <= x);

    for (int i {x}, summation {0}; summation < z; i++, amount++)
    {
        summation += i;
    }

    cout << amount << endl;

    return 0;
}