#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int total, frog {0}, rat {0}, rabbit {0};

    cin >> total;

    for (int i {1}; i <= total; i++)
    {
        int amount;
        char type;

        cin >> amount >> type;

        if (type == 'S')
        {
            frog += amount;
        }
        else if (type == 'R')
        {
            rat += amount;
        }
        else if (type == 'C')
        {
            rabbit += amount;
        }
    }

    int animals {frog + rat + rabbit};

    cout << "Total: " << animals << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;

    cout << fixed << setprecision(2);

    cout << "Percentual de coelhos: " << 100 / static_cast<float>(animals) * rabbit << " %" << endl;
    cout << "Percentual de ratos: " << 100 / static_cast<float>(animals) * rat << " %" << endl;
    cout << "Percentual de sapos: " << 100 / static_cast<float>(animals) * frog << " %" << endl;

    return 0;
}