#include <iostream>

using namespace std;

int main()
{
    int in {0}, out {0}, total;

    cin >> total;

    for (int i {1}, value; i <= total; i++)
    {
        cin >> value;

        if ((value >= 10) && (value <= 20))
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}