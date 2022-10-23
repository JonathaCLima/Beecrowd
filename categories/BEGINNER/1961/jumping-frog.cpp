#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int p, n;

    cin >> p >> n;

    vector<int> heights;

    for (int i {0}; i < n; i++)
    {
        int height;
        cin >> height;
        heights.insert(heights.begin() + i, height);
    }

    bool survive {true};

    for (int i {0}; i < n - 1 && survive; i++)
    {
        if (abs(heights.at(i) - heights.at(i + 1)) > p)
        {
            survive = false;
        }
    }

    cout << (survive ? "YOU WIN" : "GAME OVER") << endl;

    return 0;
}