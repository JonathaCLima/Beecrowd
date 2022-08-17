#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int n;
    vector<int> m(6, 0);

    cin >> n;

    while (n--)
    {
        vector<int> l(1001, 0);

        cin >> l.at(n);

        for (int i {2}; i <= 5; i++)
        {
            if (l.at(n) % i == 0)
            {
                m.at(i)++;
            }
        }
    }

    for (int i {2}; i <= 5; i++)
    {
        cout << m.at(i) << " Multiplo(s) de " << i << endl;
    }

    return 0;
}