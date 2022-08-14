#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;

    cout << fixed << setprecision(2) << ((b - a) * 100.00) / a << "%" << endl;

    return 0;
}