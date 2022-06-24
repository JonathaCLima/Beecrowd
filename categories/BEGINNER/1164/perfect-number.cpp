#include <iostream>

using namespace std;

int main()
{
    int total;

    cin >> total;

    while (total--)
    {
        int number, summation {0};

        cin >> number;

        for (int i {1}; i < number; i++)
        {
            if (number % i == 0)
            {
                summation += i;
            }
        }

        summation == number ? cout << number << " eh perfeito" << endl : cout << number << " nao eh perfeito" << endl;
    }

    return 0;
}