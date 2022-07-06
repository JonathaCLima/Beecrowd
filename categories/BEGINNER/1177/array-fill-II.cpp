#include <iostream>

using namespace std;

int main()
{
    int t, n[1000];

    cin >> t;

    for (int i {0}; i < 1000;)
    {
        for (int fill {0}; fill < t && i < 1000; i++, fill++)
        {
            n[i] = fill;
            cout << "N[" << i << "] = " << n[i] << endl;
        }
    }

    return 0;
}