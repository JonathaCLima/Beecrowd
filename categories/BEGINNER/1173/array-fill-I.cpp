#include <iostream>

using namespace std;

int main()
{
    int v, n[10];

    cin >> v;

    for (int i {0}; i < 10; i++)
    {
        n[i] = v;
        cout << "N[" << i << "] = " << n[i] << endl;
        v *= 2;
    }

    return 0;
}