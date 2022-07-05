#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, n[100];

    cin >> x;

    for (int i {0}; i < 100; i++, x /= 2)
    {
        n[i] = x;
        cout << fixed << setprecision(4) << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}