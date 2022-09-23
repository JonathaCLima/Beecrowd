#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    float sum {0};
    int column;
    string operation;
    
    cin >> column >> operation;

    for (int i {0}; i < 12; i++)
    {
        for (int j {0}; j < 12; j++)
        {
            float value;

            cin >> value;

            if (j == column)
            {
                sum += value;
            }
        }
    }

    cout << fixed << setprecision(1) << (operation == "S" ? sum : (sum / 12)) << endl;

    return 0;
}