#include <iostream>

using namespace std;

int main()
{
    int n, position {0};

    cin >> n;

    int x[n];

    for (int i {0}, value; i < n; i++)
    {
        cin >> value;

        x[i] = value;

        if (x[i] < x[position])
        {
            position = i;
        }
    }

    cout << "Menor valor: " << x[position] << endl; 
    cout << "Posicao: " << position << endl;

    return 0;
}