#include <iostream>

using namespace std;

int main()
{
    int value;

    cin >> value;

    for (int i {1}; i < 10000; i++)
    {
        if (i % value == 2)
        {
            cout << i << endl;
        }    
    }

    return 0;
}