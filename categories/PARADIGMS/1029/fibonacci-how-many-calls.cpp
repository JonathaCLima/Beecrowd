#include <iostream>

using namespace std;

int fibonacci(int x);

int num_calls {0};

int main()
{
    int n;

    cin >> n;

    for (int i {0}; i < n; i++, num_calls = 0)
    {
        int x;

        cin >> x;

        int result {fibonacci(x)};

        cout << "fib(" << x << ") = " << --num_calls << " calls = " << result << endl;
    }

    return 0;
}

int fibonacci(int x)
{
    num_calls++;

    return x < 2 ? x : fibonacci(x - 1) + fibonacci(x - 2);
}