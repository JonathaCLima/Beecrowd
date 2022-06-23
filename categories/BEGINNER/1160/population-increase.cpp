#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i {1}; i <= t; i++)
    {
        int pa, pb, time {0};
        double g1, g2;

        cin >> pa >> pb >> g1 >> g2;

        while (pa <= pb && time <= 100)
        {
            pa =+ pa * ((g1 / 100) + 1);
            pb =+ pb * ((g2 / 100) + 1);
            time++;
        }

        time > 100 ? cout << "Mais de 1 seculo." << endl : cout << time << " anos." << endl;
    }

    return 0;
}