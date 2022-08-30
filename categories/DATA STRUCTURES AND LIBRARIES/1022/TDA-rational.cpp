#include <iostream>

using namespace std;

int mdc(int, int);
int abs(int);

int main()
{
    int n, n1, d1, n2, d2;
    char op, slash;

    cin >> n;

    do {
        cin >> n1 >> slash >> d1 >> op >> n2 >> slash >> d2;
        switch (op) {
            case '+':
                n1 = (n1 * d2 + n2 * d1);
                d1 = (d1 * d2);;
            break;
            case '-':
                n1 = (n1 * d2 - n2 * d1);
                d1 = (d1 * d2);
            break;
            case '*':
                n1 = (n1 * n2);
                d1 = (d1 * d2);
            break;
            case '/':
                n1 = (n1 * d2);
                d1 = (n2 * d1);
            break;
        }
        cout << n1 << "/" << d1 << " = " << n1/mdc(abs(n1), abs(d1)) << "/" << d1/mdc(abs(n1), abs(d1)) << endl;
    } while (--n > 0);
    
    return 0;
}

int mdc(int n1, int d1)
{
    return n1 % d1 == 0 ? d1 : mdc(d1, n1 % d1);
}

int abs(int x)
{
    return x < 0 ? x * (- 1) : x;
}