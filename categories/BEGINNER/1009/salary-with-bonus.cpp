#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string seller_name;
    double fixed_salary, sale_total;

    cin >> seller_name >> fixed_salary >> sale_total;
    double final_salary {fixed_salary + (sale_total * 0.15)};
    cout << fixed << setprecision(2) << "TOTAL = R$ " << final_salary << endl;

    return 0;
}