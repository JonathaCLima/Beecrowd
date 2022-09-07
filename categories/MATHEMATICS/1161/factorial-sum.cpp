#include <iostream>

using namespace std;

unsigned long long factorial(int);

int main()
{
    int m, n;

    while (cin >> m >> n)
    {
        cout << factorial(m) + factorial(n) << endl;
    }

    return 0;
}

unsigned long long factorial(int x)
{
    unsigned long long result {1};

    for (int i {x}; i >= 1; i--)
    {
        result *= i;
    }

    return result;
}