#include <iostream>

using namespace std;

int main()
{
    float value;
    int positive {0};

    for (int i {1}; i <= 6; i++)
    {
        cin >> value;

        if (value > 0)
        {
            positive++;
        }
    }

    cout << positive << " valores positivos" << endl;

    return 0;
}