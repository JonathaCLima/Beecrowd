#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string letters_underlined {"LIFE IS NOT A PROBLEM TO BE SOLVED"};

    cin >> n;

    string characters {letters_underlined.substr(0, n)};

    cout << characters << endl;

    return 0;
}