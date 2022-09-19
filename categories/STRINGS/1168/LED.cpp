#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        int leds {0};
        string v;

        cin >> v;

        for (int i {0}; i < v.length(); i++)
        {
            if (v.at(i) == '0' || v.at(i) == '6' || v.at(i) == '9')
            {
                leds += 6;
            }
            else if (v.at(i) == '1')
            {
                leds += 2;
            }
            else if (v.at(i) == '2' || v.at(i) == '3' || v.at(i) == '5')
            {
                leds += 5;
            }
            else if (v.at(i) == '4')
            {
                leds += 4;
            }
            else if (v.at(i) == '7')
            {
                leds += 3;
            }
            else if (v.at(i) == '8')
            {
                leds += 7;
            }
        }

        cout << leds << " leds" << endl;
    }

    return 0;
}