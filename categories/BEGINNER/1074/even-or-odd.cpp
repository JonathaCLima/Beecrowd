#include <iostream>

using namespace std;

int main()
{
    int total;

    cin >> total;

    for (int i {1}, value; i <= total; i++)
    {
        cin >> value;

        if (value == 0)
        {
            cout << "NULL" << endl;
        }
        else if (value % 2 == 0)
        {
            cout << (value > 0 ? "EVEN POSITIVE" : "EVEN NEGATIVE") << endl;
        }
        else
        {
            cout << (value > 0 ? "ODD POSITIVE" : "ODD NEGATIVE") << endl;
        }
    }

    return 0;
}