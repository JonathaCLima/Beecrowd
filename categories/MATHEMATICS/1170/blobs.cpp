#include <iostream>

using namespace std;

int calculate_days(float);

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        float x;
        cin >> x;
        cout << calculate_days(x) << " dias" << endl;
    }

    return 0;
}

int calculate_days(float x)
{
    int count {0};

    while (x > 1)
    {
        x /= 2;
        count++;
    }

    return count;
}