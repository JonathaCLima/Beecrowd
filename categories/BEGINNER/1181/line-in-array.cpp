#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int line;
    char operation;
    float m[12][12], sum {0};

    cin >> line >> operation;

    for (int i {0}; i < 12; i++)
    {
        for (int j {0}; j < 12; j++)
        {
            float value;

            cin >> value;

            m[i][j] = value;

            if (i == line)
            {
                sum += m[line][j];
            }
        }
    }

    if (operation == 'M')
    {
        sum /= 12;
    }

    cout << fixed << setprecision(1) << sum << endl;

    return 0;
}