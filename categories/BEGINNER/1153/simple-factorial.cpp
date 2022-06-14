#include <iostream>

using namespace std;

int main()
{
    int n, factorial {1};

    cin >> n;

    for (int i {n}; i >= 1; i--)
    {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}