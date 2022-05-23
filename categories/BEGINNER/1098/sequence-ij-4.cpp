#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for (float count {1}, i {0}; i <= 2.01; count += 0.2, i += 0.2)
    {
        for (float j {count}; j <= count + 2.01; j++)
        {
            if (i == 0.0 || i == 1.0 || i >= 2.0)
            {
                cout << fixed << setprecision(0) << "I=" << i << " J=" << j << endl;
            } 
            else
            {
                cout << fixed << setprecision(1) << "I=" << i << " J=" << j << endl;
            }
        }
    }

    return 0;
}