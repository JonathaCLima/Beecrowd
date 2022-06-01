#include <iostream>

using namespace std;

void print_grenais(int &, int &, int &, int &);

int main()
{
    int x, inter_wins {0}, gremio_wins {0}, draws {0}, grenais {0};

    do
    {
        int inter_goals, gremio_goals;

        cin >> inter_goals >> gremio_goals;

        grenais++;

        if (inter_goals > gremio_goals)
        {
            inter_wins++;
        }
        else if (inter_goals < gremio_goals)
        {
            gremio_wins++;
        }
        else
        {
            draws++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;

        cin >> x;
    } while (x == 1);

    print_grenais(grenais, inter_wins, gremio_wins, draws);

    return 0;
}

void print_grenais(int &grenais, int &inter_wins, int &gremio_wins, int &draws)
{
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter_wins << endl;
    cout << "Gremio:" << gremio_wins << endl;
    cout << "Empates:" << draws << endl;
   
    if (inter_wins > gremio_wins)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if (inter_wins < gremio_wins)
    {
        cout << "Gremio venceu mais" << endl;
    }
    else
    {
        cout << "Nao houve vencedor" << endl;
    }
}