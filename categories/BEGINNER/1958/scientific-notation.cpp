#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x;

    cin >> x;

    cout << fixed << setprecision(4) << showpos << scientific << uppercase << x << endl;

    return 0;
}