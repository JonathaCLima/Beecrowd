#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float summation {0}, value;
    int quantity {0};

    for (int i {1}; i <= 6; i++)
    {
        cin >> value;

        if (value > 0)
        {
            quantity += 1;
            summation += value;
        }
    }

    float average {summation / quantity};

    cout << quantity << " valores positivos" << endl;
    cout << fixed << setprecision(1) << average << endl;

    return 0;
}