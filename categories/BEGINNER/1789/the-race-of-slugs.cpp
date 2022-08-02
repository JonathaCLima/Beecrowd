#include <iostream>

#define BIGGER(x, y) x > y ? x : y

using namespace std;

int main()
{
    int l;

    while (cin >> l)
    {
        int level {0};

        for (int i {0}; i < l; i++)
        {
            int v;

            cin >> v;

            level = BIGGER(v, level);
        }

        if (level < 10)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (level < 20 ? 2 : 3) << endl;
        }
    }

    return 0;
}