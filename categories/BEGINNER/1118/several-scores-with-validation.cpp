#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;

    do
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

                    if (i == 1)
                    {
                        cout << fixed << setprecision(2) << "media = " << average << endl;

                        do 
                        {
                            cout << "novo calculo (1-sim 2-nao)" << endl;
                            cin >> x;
                        } while (x < 1 || x > 2);
                    }

                    break;
                }
                else
                {
                    cout << "nota invalida" << endl; 
                }
            }
        }
    } while (x == 1);

    return 0;
}