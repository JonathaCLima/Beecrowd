#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salary;

    cin >> salary;

    cout << fixed << setprecision(2);

    if ((salary >= 0) && (salary <= 2000.00))
    {
        cout << "Isento" << endl;
    }
    else if ((salary >= 2000.01) && (salary <= 3000.00))
    {
        cout << "R$ " << (salary - 2000.00) * 0.08 << endl;
    }
    else if ((salary >= 3000.01) && (salary <= 4500.00))
    {
        cout << "R$ " << ((salary - 3000.00) * 0.18) + 80.00 << endl;
    }
    else if (salary > 4500.00)
    {
        cout << "R$ " << ((salary - 4500.00) * 0.28) + 350.00 << endl;
    }

    return 0;
}