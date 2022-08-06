#include <iostream>
#include <string>

using namespace std;

int binary_number(string);

int main()
{
    string blink;

    for (int i {1}; i <= 3; i++)
    {
        int winning_number {0};

        while (getline(cin, blink))
        {
            if (blink == "caw caw")
            {
                break;
            }
            else
            {
                winning_number += binary_number(blink);
            }
        }

        cout << winning_number << endl;
    }

    return 0;
}

int binary_number(string blink)
{
    int sum {0};

    if (blink.at(0) == '*')
    {
        sum += 4;
    }
    if (blink.at(1) == '*')
    {
        sum += 2;
    }
    if (blink.at(2) == '*')
    {
        sum += 1;
    }

    return sum;
}