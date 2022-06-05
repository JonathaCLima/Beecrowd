#include <iostream>

using namespace std;

int main()
{
    int product_code, alcohol {0}, gasoline {0}, diesel {0};

    do
    {
        cin >> product_code;

        switch(product_code)
        {
            case 1:
                alcohol++;
            break;
            case 2:
                gasoline++;
            break;
            case 3:
                diesel++;
            break;
            case 4:
                cout << "MUITO OBRIGADO" << endl;
                cout << "Alcool: " << alcohol << endl;
                cout << "Gasolina: " << gasoline << endl;
                cout << "Diesel: " << diesel << endl;
            break;
        }
    }
    while (product_code != 4);

    return 0;
}