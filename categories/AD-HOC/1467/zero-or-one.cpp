#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    while(cin >> a >> b >> c) {
        if(a != b)
            cout << (a != c ? "A" : "B") << endl;
        else
            cout << (a != c ? "C" : "*") << endl;
    }

    return 0;
}