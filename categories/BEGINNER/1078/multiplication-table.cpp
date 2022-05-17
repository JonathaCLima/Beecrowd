#include <iostream>

using namespace std;

int main()
{
    int value;

    cin >> value;

    for (int i {1}; i <= 10; i++)
    {
        cout << i << " x " << value << " = " << i * value << endl;
    } 

    return 0;
}