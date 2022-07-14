#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float m[12][12], sum {0};
    char operation;

    cin >> operation;

    for (int i {0}; i < 12; i++)
    {
        for (int j {0}; j < 12; j++)
        {
            float value;

            cin >> value;

            m[i][j] = value;

            if (i > j)
            {
                sum += m[i][j];
            }
        }
    }

    if (operation == 'M')
    {
        sum /= 66;
    }

    cout << fixed << setprecision(1) << sum << endl;

    return 0;
}