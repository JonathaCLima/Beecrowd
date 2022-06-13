#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n == 1 || n == 2)
    {
        cout << (n == 1 ? "0" : "0 1") << endl;
    }
    else
    {
        int prev {0}, curr {1}, next {1};

        cout << prev << " " << curr << " " << next;

        for (int i {3}; i < n; i++)
        {
            prev = curr;
            curr = next;
            next = curr + prev;
            cout << " " << next;
        }

        cout << endl;
    }

    return 0;
}