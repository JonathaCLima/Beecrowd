#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    for (int i {1}; i <= y; i++)
    {
        for (int j {1}; j < x; j++, i++)
        {
            cout << i << " ";
        }
        cout << i << endl;
    }

    return 0;
}