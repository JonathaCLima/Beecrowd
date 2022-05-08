#include <iostream>

using namespace std;

int main()
{
    int even {0}, odd {0}, positive {0}, negative {0};

    for (int i {1}, value; i <= 5; i++)
    {
        cin >> value;

        if (value % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (value > 0)
        {
            positive++;
        }
        else if (value < 0)
        {
            negative++;
        }
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;

    return 0;
}