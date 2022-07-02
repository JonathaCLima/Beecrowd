#include <iostream>

using namespace std;

unsigned long long int fibonacci(int);

int main()
{
    int total;
    
    cin >> total;
    
    for (int i {1}, n; i <= total; i++)
    {
        cin >> n;
        cout << "Fib(" << n << ") = " << fibonacci(n) << endl;
    }

    return 0;
}

unsigned long long int fibonacci(int x)
{
    unsigned long long int fibonacci[x];

    for (int i {0}; i <= x; i++)
    {
        if (i < 2)
        {
            fibonacci[i] = i;
        }
        else
        {
            fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
        }
    }

    return fibonacci[x];
}