#include <iostream>

using namespace std;

int main()
{
    int highest, position, value[100];

    for (int i = 1; i <= 100; i++)
    {
        cin >> value[i];
        if (value[i] >= value[1])
        {
            highest = value[i];
            position = i;
        }
        value[1] = highest;
    }

    cout << highest << endl;
    cout << position << endl;

    return 0;
}