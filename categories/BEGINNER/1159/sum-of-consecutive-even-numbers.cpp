#include <iostream>

using namespace std;

int sum_consecutive_even(int);

int main()
{
    int x;

    cin >> x;

    while (x != 0)
    {
        cout << (x % 2 == 0 ? sum_consecutive_even(x) : sum_consecutive_even(++x)) << endl;
        cin >> x;
    }

    return 0;
}

int sum_consecutive_even(int x)
{
    int summation {0};

    for (int i {1}; i <= 5; i++, x += 2)
    {
        summation += x;
    }

    return summation;
}