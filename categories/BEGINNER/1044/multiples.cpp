#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    cout << ((a % b == 0) || (b % a == 0) ? "Sao Multiplos" : "Nao sao Multiplos") << endl;

    return 0;
}