#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double price_product_1, price_product_2;
    int code_product_1, code_product_2, units_product_1, units_product_2;

    cin >> code_product_1 >> units_product_1 >> price_product_1;
    cin >> code_product_2 >> units_product_2 >> price_product_2;
    double pay {(units_product_1 * price_product_1) + (units_product_2 * price_product_2)};
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << pay << endl;

    return 0;
}