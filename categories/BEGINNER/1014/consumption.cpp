#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int distance_traveled;
    double spent_fuel;

    cin >> distance_traveled >> spent_fuel;
    double average_consumption {distance_traveled / spent_fuel};
    cout << fixed << setprecision(3) << average_consumption << " km/l" << endl;

    return 0;
}