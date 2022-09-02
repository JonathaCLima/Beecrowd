#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        int extract {0};
        string mine;

        cin >> mine;

        for (int i {0}, diamond {0}; i < mine.length(); i++)
        {
            if (mine.at(i) == '.')
            {
                continue;
            }
            else if (mine.at(i) == '<')
            {
                diamond++;
            }
            else if (mine.at(i) == '>' && diamond > 0)
            {
                extract++;
                diamond--;
            }
        }

        cout << extract << endl;
    }

    return 0;
}