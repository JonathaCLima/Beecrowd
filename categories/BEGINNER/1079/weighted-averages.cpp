#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int total;

    cin >> total;

    for (int i {1}; i <= total; i++)
    {
        float n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        float weighted_average {((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10};
        cout << fixed << setprecision(1) << weighted_average << endl;
    }

    return 0;
}