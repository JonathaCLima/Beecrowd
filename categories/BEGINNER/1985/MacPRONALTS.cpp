#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int p;
    cin >> p;

    double amount {0.00};

    for (int i {1}; i <= p; i++)
    {
        int code, quantity;
        cin >> code >> quantity;

        switch (code)
        {
            case 1001:
                amount += quantity * 1.50;
                break;
            case 1002:
                amount += quantity * 2.50;
                break;
            case 1003:
                amount += quantity * 3.50;
                break;
            case 1004:
                amount += quantity * 4.50;
                break;
            case 1005:
                amount += quantity * 5.50;
                break;
            default:
                break;
        }
    }

    cout << fixed << setprecision(2) << amount << endl;

    return 0;
}
