#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age, count {0};
    float summation {0};

    cin >> age;

    while (age > 0)
    {
        count++;
        summation += age;
        cin >> age;
    }

    float average {summation / count};

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}