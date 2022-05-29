#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quantity;

    cin >> quantity;

    for (int i {1}; i <= quantity; i++)
    {
        int dividend, divisor;

        cin >> dividend >> divisor;

        if (divisor == 0.0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            cout << fixed << setprecision(1) << static_cast<float>(dividend) / divisor << endl;
        }
    }

    return 0;
}