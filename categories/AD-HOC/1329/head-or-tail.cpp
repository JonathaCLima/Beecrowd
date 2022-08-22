#include <iostream>

using namespace std;

int main()
{
    int n;

    while ((cin >> n) && (n))
    {
        int head {0}, tail {0};

        for (int i {0}; i < n; i++)
        {
            int r;
            cin >> r;
            r == 0 ? head++ : tail++;
        }

        cout << "Mary won " << head << " times and John won " << tail << " times" << endl;
    }

    return 0;
}