#include <iostream>

using namespace std;

int main()
{
    string colon, day;
    int start_day, start_hour, start_minute, start_second;
    int end_day, end_hour, end_minute, end_second;

    cin >> day >> start_day;
    cin >> start_hour >> colon >> start_minute >> colon >> start_second;
    cin >> day >> end_day;
    cin >> end_hour >> colon >> end_minute >> colon >> end_second;

    int duration_day {end_day - start_day};
    int duration_hour {end_hour - start_hour};
    int duration_minute {end_minute - start_minute};
    int duration_second {end_second - start_second};

    if (duration_second < 0)
    {
        duration_second += 60;
        duration_minute--;
    }

    if (duration_minute < 0)
    {
        duration_minute += 60;
        duration_hour--;
    }

    if (duration_hour < 0)
    {
        duration_hour += 24;
        duration_day--;
    }

    cout << duration_day << " dia(s)" << endl;
    cout << duration_hour << " hora(s)" << endl;
    cout << duration_minute << " minuto(s)" << endl;
    cout << duration_second << " segundo(s)" << endl;

    return 0;
}