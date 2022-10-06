#include <iostream>

using namespace std;

char form_triangle(int*, int*, int*, int*);

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << form_triangle(&a, &b, &c, &d) << endl;

    return 0;
}

char form_triangle(int* a, int* b, int* c, int* d)
{
    if (*a < *b)
    {
        swap(a, b);
    }
    if (*a < *c)
    {
        swap(a, c);
    }
    if (*a < *d)
    {
        swap(a, d);
    }
    if (*b < *c)
    {
        swap(b, c);
    }
    if (*b < *d)
    {
        swap(b, d);
    }
    if (*c < *d)
    {
        swap(c, d);
    }

    return (*a < (*b + *c) || *b < (*c + *d) ? 'S' : 'N');
}