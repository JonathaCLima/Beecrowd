#include <iostream>

using namespace std;

void quadrant(int, int);

int main()
{
    int x, y;

    do
    {
        cin >> x >> y;
        quadrant(x, y);
    } while (x != 0 && y != 0);

    return 0;
}

void quadrant(int x, int y)
{
    if (x > 0 && y != 0)
    {
        cout << (y > 0 ? "primeiro" : "quarto") << endl;
    }
    else if (x < 0 && y != 0)
    {
        cout << (y > 0 ? "segundo" : "terceiro") << endl;
    }
}