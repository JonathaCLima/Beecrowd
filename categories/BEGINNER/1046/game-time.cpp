#include <iostream>

using namespace std;

int main()
{
    int start_time, end_time;

    cin >> start_time >> end_time;

    int duration {(24 - start_time) + end_time};

    if (duration > 24)
    {
        duration -= 24;
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

    return 0;
}