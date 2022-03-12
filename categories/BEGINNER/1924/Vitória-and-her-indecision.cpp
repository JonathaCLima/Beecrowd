#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;

    do
    {
        getline(cin, s);
    } while(n--);

    cout << "Ciencia da Computacao" << endl;

    return 0;
}