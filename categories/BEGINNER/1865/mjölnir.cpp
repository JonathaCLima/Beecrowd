#include <iostream>

using namespace std;

int main()
{
    int c;

    cin >> c;

    while (c--)
    {
        int force;
        string name;

        cin >> name >> force;

        cout << (name == "Thor" ? "Y" : "N") << endl;
    }

    return 0;
}