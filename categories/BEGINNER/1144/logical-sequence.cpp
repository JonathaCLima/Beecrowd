#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int total;

    cin >> total;

    for (int i {1}, squared {1}, cubic {1}; i <= total; i++, squared = pow(i, 2), cubic = pow(i, 3))
    {
        cout << i << " " << squared << " " << cubic << endl;
        cout << i << " " << ++squared << " " << ++cubic << endl;
    }

    return 0;
}