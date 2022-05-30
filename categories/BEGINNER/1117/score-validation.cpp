#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float average {0.0};

    for (int i {0}; i < 2; i++)
    {
        while (true)
        {
            float score;

            cin >> score;

            if (score >= 0.0 && score <= 10.0)
            {
                average += score / 2;
                break;
            }
            else
            {
                cout << "nota invalida" << endl; 
            }
        }
    }

    cout << fixed << setprecision(2) << "media = " << average << endl;

    return 0;
}