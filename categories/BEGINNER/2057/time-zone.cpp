#include <iostream>

using namespace std;

int main()
{
    int s, t, f;

    cin >> s >> t >> f;

    cout << (s == 0 ? ((24 + t + f) % 24) : ((s + t + f) % 24)) << endl;

    return 0;
}