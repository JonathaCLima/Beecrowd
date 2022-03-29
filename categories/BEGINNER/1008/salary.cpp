#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double worked_hours, hour_value;
    int employee_number;

    cin >> employee_number >> worked_hours >> hour_value;
    double salary {worked_hours * hour_value};
    cout << "NUMBER = " << employee_number << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << salary << endl;

    return 0;
}