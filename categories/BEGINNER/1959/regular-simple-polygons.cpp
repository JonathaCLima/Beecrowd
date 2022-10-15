#include <iostream>

using namespace std;

int main()
{
    int n, l;

    cin >> n >> l;

    long long p {static_cast<long long>(n) * l};

    cout << p << endl;

    return 0;
}