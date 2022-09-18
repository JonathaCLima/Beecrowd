#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    cin.ignore();

    while (n--)
    {
        string m;

        getline(cin, m);

        const int size {static_cast<int>(m.length())};

        for (int i {0}; i < size; i++)
        {
            if ((m.at(i) >= 'A' && m.at(i) <= 'Z') || (m.at(i) >= 'a' && m.at(i) <= 'z'))
            {
                m.at(i) += 3;
            }
        }

        for (int i {0}, j {size - 1}; i < size / 2; i++, j--)
        {
            char temp = m.at(j);
            m.at(j) = m.at(i);
            m.at(i) = temp;
        }

        for (int i {size / 2}; i < size; i++)
        {
            m.at(i) -= 1;
        }

        cout << m << endl;
    }

    return 0;
}