#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a {0}, b {0}, average {0};

    cin >> a >> b;
    average = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);
    cout << fixed << setprecision(5) << "MEDIA = " << average << endl;

    return 0;
}