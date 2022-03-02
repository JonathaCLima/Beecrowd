#include <iostream>

using namespace std;

int main() {
    int n {};
    char s[100] {};

    cin >> n;

    do {
        cin.getline(s, sizeof(s));
    } while(n--);

    cout << "Ciencia da Computacao" << endl;

    return 0;
}