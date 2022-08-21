#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x;

    vector<int> frequence(2001, 0);

    cin >> n;

    while (n--)
    {
        scanf("%d", &x);
        frequence.at(x)++;
    }

    for (int i {0}; i < frequence.size(); i++)
    {
        if (frequence.at(i) > 0)
        {
            cout << i << " aparece " << frequence.at(i) << " vez(es)" << endl;
        }
    }

    return 0;
}