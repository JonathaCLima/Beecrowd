#include <iostream>
#include <string>

using namespace std;

int main()
{
    string animal;

    cin >> animal;

    if (animal.compare("vertebrado") == 0)
    {
        cin >> animal;
        if (animal.compare("ave") == 0)
        {
            cin >> animal;
            if (animal.compare("carnivoro") == 0)
            {
                cout << "aguia" << endl;
            }
            else if (animal.compare("onivoro") == 0)
            {
                cout << "pomba" << endl;
            }
        }
        else if (animal.compare("mamifero") == 0)
        {
            cin >> animal;
            if (animal.compare("onivoro") == 0)
            {
                cout << "homem" << endl;
            }
            else if (animal.compare("herbivoro") == 0)
            {
                cout << "vaca" << endl;
            }
        }
    }
    else if (animal.compare("invertebrado") == 0)
    {
        cin >> animal;
        if (animal.compare("inseto") == 0)
        {
            cin >> animal;
            if (animal.compare("hematofago") == 0)
            {
                cout << "pulga" << endl;
            }
            else if (animal.compare("herbivoro") == 0)
            {
                cout << "lagarta" << endl;
            }
        }
        else if (animal.compare("anelideo") == 0)
        {
            cin >> animal;
            if (animal.compare("hematofago") == 0)
            {
                cout << "sanguessuga" << endl;
            }
            else if (animal.compare("onivoro") == 0)
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}