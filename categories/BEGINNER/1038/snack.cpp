#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int product_code, quantity;

    cin >> product_code >> quantity;

    cout << fixed << setprecision(2);

    switch (product_code)
    {
        case 1:
            cout << "Total: R$ " << 4.00 * quantity << endl;
        break;
        case 2:
            cout << "Total: R$ " << 4.50 * quantity << endl;
        break;
        case 3:
            cout << "Total: R$ " << 5.00 * quantity << endl;
        break;
        case 4:
            cout << "Total: R$ " << 2.00 * quantity << endl;
        break;
        case 5:
            cout << "Total: R$ " << 1.50 * quantity << endl;
        break;
    }

    return(0);
}