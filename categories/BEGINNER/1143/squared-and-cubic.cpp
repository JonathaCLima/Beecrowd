#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i {1}, squared {1}, cubic {1}; i <= n; i++, squared = pow(i, 2), cubic = pow(i, 3))
    {
        cout << i << " " << squared << " " << cubic << endl;
    }

    return 0;
}