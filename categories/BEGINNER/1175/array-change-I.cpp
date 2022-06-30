#include <iostream>

using namespace std;

int main()
{
    int n[20];

    for (int i {19}; i >= 0; i--)
    {
        cin >> n[i];
    }

    for (int i {0}; i <= 19; i++)
    {
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}