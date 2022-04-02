#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159

using namespace std;

int main()
{
    double radius;

    cin >> radius;
    double volume {(4 / 3.0) * PI * pow(radius, 3)};
    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;

    return 0;
}