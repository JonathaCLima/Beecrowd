#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    int difference {(a * b) - (c * d)};
    cout << fixed << setprecision(1) << "DIFERENCA = " << difference << endl;

    return 0;
}