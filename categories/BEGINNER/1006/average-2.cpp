#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a {0}, b {0}, c {0}, average {0};

    cin >> a >> b >> c;
    average = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);
    cout << fixed << setprecision(1) << "MEDIA = " << average << endl;

    return 0;
}