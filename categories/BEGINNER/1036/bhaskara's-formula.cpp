#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;

    cin >> a >> b >> c;

    float delta {(b * b) - (4 * a * c)};

    cout << fixed << setprecision(5);

    if (delta > 0 && a != 0)
    {
        float root_1 {(- b + sqrt(delta)) / (2 * a)};
        cout << "R1 = " << root_1 << endl;

        float root_2 {(- b - sqrt(delta)) / (2 * a)};        
        cout << "R2 = " << root_2 << endl;
    }
    else
    {
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}