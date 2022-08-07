#include <iostream>

using namespace std;

int main()
{
    int n, answer;

    cin >> n;

    for (int i {1}, lower {21}; i <= n; i++)
    {
        int t;

        cin >> t;

        if (t < lower)
        {
            lower = t;
            answer = i;
        }
    }

    cout << answer << endl;

    return 0;
}