#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        string word;

        cin >> word;

        if (word.length() == 5)
        {
            cout << "3" << endl;
        }
        else
        {
            cout << ((word.at(0) == 'o' && word.at(1) == 'n') || (word.at(0) == 'o' && word.at(2) == 'e') || (word.at(1) == 'n' && word.at(2) == 'e') ? "1" : "2") << endl;
        }
    }

    return 0;
}