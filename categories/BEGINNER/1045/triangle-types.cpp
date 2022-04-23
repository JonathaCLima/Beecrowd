#include <iostream>

#define BIGGER(x, y) x > y ? x : y

void arrange_decreasing_order(float &, float &, float &);

using namespace std;

int main()
{
    float a, b, c;

    cin >> a >> b >> c;
    
    arrange_decreasing_order(a, b, c);

    if (a >= (b + c))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if (a * a == ((b * b) + (c * c)))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if ((a * a) > ((b * b) + (c * c)))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if ((a * a) < ((b * b) + (c * c)))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if ((a == b) && (a == c) && (b == c))
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if ((a == b) || (a == c) || (b == c))
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

   return 0;
}

void arrange_decreasing_order(float &a, float &b, float &c)
{
    float perimeter {a + b + c};

    if ((a >= b) && (a >= c))
    {
        b = BIGGER(b, c);
    }
    else
    {
        if ((b >= a) && (b >= c))
        {
            a = b;
            b = BIGGER((perimeter - b - c), c);
        }
        else
        {
            a = c;
            b = BIGGER((perimeter - b - c), b);
        }
    }

    c = perimeter - a - b;
}