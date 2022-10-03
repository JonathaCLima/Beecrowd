#include <iostream>
#include <string>

using namespace std;

typedef struct Player
{
    string name;
    string choice;
} Player;

int main()
{
    int qt;

    cin >> qt;

    while (qt--)
    {
        int n, m;
        Player p1, p2;

        cin >> p1.name >> p1.choice >> p2.name >> p2.choice;
        cin >> n >> m;

        if ((n + m) % 2 == 0)
        {
            cout << (p1.choice.at(0) == 'P' ? p1.name : p2.name) << endl;
        }
        else
        {
            cout << (p1.choice.at(0) == 'I' ? p1.name : p2.name) << endl;
        }
    };

    return 0;
}