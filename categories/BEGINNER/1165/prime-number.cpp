#include <iostream>

using namespace std;

int main()
{
    int n, number;

    cin >> n;

    while (n--)
    {
        cin >> number;

        for (int i {2}; i <= number; i++)
        {
            if (number % i == 0)
            {
                i == number ? cout << number << " eh primo" << endl : cout << number << " nao eh primo" << endl;
                break;
            }
        }
    }

    return 0;
}