#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        string s1, s2;

        cin >> s1 >> s2;

        unsigned short size = max(s1.length(), s2.length()), i {0};
        
        while (size--)
        {
            if (i < s1.length())
            {
                cout << s1.at(i);
            }
            if (i < s2.length())
            {
                cout << s2.at(i);
            }
            i++;
        }
        cout << endl;
    }

    return 0;
}