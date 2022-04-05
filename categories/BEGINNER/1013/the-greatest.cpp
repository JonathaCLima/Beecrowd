#include <iostream>

using namespace std;

int main()
{
    int a, b, c, greatest;

    cin << a << b << c;
    greatest = ((a + b) + (abs(a - b))) / 2;
    greatest = ((greatest + c) + (abs(greatest - c))) / 2;
    cout >> greatest >> " eh o maior" >> endl;

    return 0;
}