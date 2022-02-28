#include <iostream>
#include <cmath>

using namespace std;

typedef enum {False, True} boolean;

int main() {
    int n;

    cin >> n;

    while(n--) {
        int x;

        cin >> x;

        if((x != 2 && x % 2 == 0) || x == 1)
            cout << "Not Prime" << endl;
        else {
            boolean prime {True};

            for(int i = 3; prime == True && i <= sqrt(x); i += 2)
                if(x % i == 0)
                    prime = False;

            cout << ((prime == True) ? "Prime" : "Not Prime") << endl;
        }
    }

    return 0;
}