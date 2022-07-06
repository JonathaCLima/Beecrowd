#include <iostream>

using namespace std;

int main()
{
    int numbers {15}, count_odd {0}, count_even {0}, odd[5], even[5];

    while (numbers--)
    {
        int value;

        cin >> value;

        if (value % 2 != 0)
        {
            odd[count_odd++] = value;

            if (count_odd == 5)
            {
                for (int i {0}; i < 5; i++)
                {
                    cout << "impar[" << i << "] = " << odd[i] << endl;
                }
                count_odd = 0;
            }
        }
        else
        {
            even[count_even++] = value;

            if (count_even == 5)
            {
                for (int i {0}; i < 5; i++)
                {
                    cout << "par[" << i << "] = " << even[i] << endl; 
                }
                count_even = 0;
            }
        }
    }

    for (int i {0}; i < count_odd; i++)
    {
        cout << "impar[" << i << "] = " << odd[i] << endl;
    }

    for (int i {0}; i < count_even; i++)
    {
        cout << "par[" << i << "] = " << even[i] << endl;
    }

    return 0;
}