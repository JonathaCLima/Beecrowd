#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;
    int average {((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5)};
    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;

    return 0;
}