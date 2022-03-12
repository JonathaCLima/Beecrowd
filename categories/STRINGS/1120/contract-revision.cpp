#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    char d;

    while (cin >> d >> n)
    {
        if (d == '0' && n.at(0) == '0')
        {
            break;
        }

        bool chk = false;

        for (int i = 0; i < n.size(); i++)
        {
            if (d != n.at(i))
            {
                if (n.at(i) == '0' && chk != false)
                {
                    cout << n.at(i);
                }
                else if (n.at(i) != '0' || chk != false)
                {
                    cout << n.at(i);
                    chk = true;
                }
            }
        }

        cout << (chk == false ? "0\n" : "\n");
    }

    return 0;
}