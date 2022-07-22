#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int n;

    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        for (int i {1}; i <= n; i++)
        {
            for (int j {1}; j <= n; j++)
            {
                if (i <= j)
                {
                    if ((i + j) <= n)
                    {
                        cout << setw(3) << i << " ";
                    }
                    else
                    {
                        if (j == n)
                        {
                            cout << setw(3) << 1 << endl;
                        } 
                        else
                        {
                            cout << setw(3) << ((n - j) + 1) << " ";
                        }
                    }
                }
                else
                {
                    if ((i + j) <= n)
                    {
                        cout << setw(3) << j << " ";
                    }
                    else
                    {
                        cout << setw(3) << ((n - i) + 1) << " ";
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}