#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float s {0};

    for (float dividend {1}, divisor {1}; dividend <= 39; dividend += 2, divisor *= 2)
    {
        s += dividend / divisor;
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}