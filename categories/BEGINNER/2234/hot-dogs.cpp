#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m, p;

    cin >> m >> p;

    cout << fixed << setprecision(2) << static_cast<float>(m) / p << endl;

    return 0;
}