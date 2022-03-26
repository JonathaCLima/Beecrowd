#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;
    double average {((a * 3.5) + (b * 7.5)) / (3.5 + 7.5)};
    cout << fixed << setprecision(5) << "MEDIA = " << average << endl;

    return 0;
}