#include <iostream>

using namespace std;

int main()
{
    int duration;

    cin >> duration;

    int hours   {duration / 3600};
    int minutes {duration % 3600 / 60};
    int seconds {duration % 60};

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}