#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

int main()
{
    double radius;

    cin >> radius;
    double area {PI * (radius * radius)};
    cout << fixed << setprecision(4) << "A=" << area << endl;

    return 0;
}