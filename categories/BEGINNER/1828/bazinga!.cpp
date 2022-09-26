#include <iostream>
#include <string>

using namespace std;

bool bazinga(string, string);

int main()
{
    int t;

    scanf("%d", &t);

    for (int i {1}; i <= t; i++)
    {
        string sheldon, raj;

        cin >> sheldon >> raj;

        if (!sheldon.compare(raj))
        {
            cout << "Caso #" << i << ": De novo!" << endl;
        }
        else if (bazinga(sheldon, raj))
        {
            cout << "Caso #" << i << ": Bazinga!" << endl;
        }
        else
        {
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
    }

    return 0;
}

bool bazinga(string sheldon, string raj)
{
    return
    (
        (!sheldon.compare("tesoura") && (!raj.compare("papel")   || !raj.compare("lagarto"))) ||
        (!sheldon.compare("papel")   && (!raj.compare("pedra")   || !raj.compare("Spock")))   ||
        (!sheldon.compare("pedra")   && (!raj.compare("lagarto") || !raj.compare("tesoura"))) ||
        (!sheldon.compare("lagarto") && (!raj.compare("Spock")   || !raj.compare("papel")))   ||
        (!sheldon.compare("Spock")   && (!raj.compare("tesoura") || !raj.compare("pedra")))
    );
}