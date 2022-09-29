#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        int number;
        string text;

        cin >> text >> number;

        for (int i {0}; i < text.length(); i++)
        {
            cout << static_cast<char>((text.at(i) - number < 65 ? text.at(i) - number + 26 : text.at(i) - number));
        }

        cout << endl;
    }

    return 0;
}