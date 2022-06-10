#include <iostream>

using namespace std;

int main()
{
    int sum {0}, a, n;

    cin >> a;

    do
    {
        cin >> n;
    } while (n <= 0);

    for (int i {0}; i < n; i++)
    {
        sum += (i + a);
    }

    cout << sum << endl;

    return 0;
}