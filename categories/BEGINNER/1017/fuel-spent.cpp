#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int time, average_speed;

    cin >> time >> average_speed;
    int distance {time * average_speed};
    double liters {static_cast<double>(distance) / 12};
    cout << fixed << setprecision(3) << liters << endl;

    return 0;
}