#include <iostream>

using namespace std;

int main()
{
    int total;

    cin >> total;

    for (int i {2}, square {4}; i <= total; i += 2, square = i * i)
    {
        cout << i << "^2 = " << square << endl;
    }

    return 0;
}