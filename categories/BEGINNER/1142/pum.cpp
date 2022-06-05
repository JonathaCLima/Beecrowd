#include <iostream>

using namespace std;

int main()
{
    int total;

    cin >> total;

    for (int i {1}; i <= (total * 4); i++)
    {
        for (int j {1}; j <= 3; j++, i++)
        {
            cout << i << " ";
        }
        cout << "PUM" << endl;
    }

    return 0;
}