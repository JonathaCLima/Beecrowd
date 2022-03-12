#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while(n--)
    {
        int x;

        cin >> x;

        if((x != 2 && x % 2 == 0) || x == 1)
        {
            cout << "Not Prime" << endl;
        }
        else
        {
            bool prime = true;

            for(int i = 3; prime == true && i <= sqrt(x); i += 2)
            {
                if(x % i == 0)
                {
                    prime = false;
                }
            }
            cout << ((prime == true) ? "Prime" : "Not Prime") << endl;
        }
    }

    return 0;
}