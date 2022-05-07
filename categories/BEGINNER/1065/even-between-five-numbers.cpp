#include <iostream>

using namespace std;

int main()
{
    int quantity {0};

    for (int i {1}, value; i <= 5; i++)
    {
        cin >> value;

        if (value % 2 == 0)
        {
            quantity++;
        }
    }

    cout << quantity << " valores pares" << endl;

    return 0;
}