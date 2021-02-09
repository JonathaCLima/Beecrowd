#include <stdio.h>

int main() {
    int start_day, start_hour, start_minute, start_second, end_day, end_hour, end_minute, end_second, duration_day, duration_hour, duration_minute, duration_second;

    scanf("Dia %d%*c%d : %d : %d%*cDia %d%*c%d : %d : %d", &start_day, &start_hour, &start_minute, &start_second, &end_day, &end_hour, &end_minute, &end_second);

    duration_day = end_day - start_day;

    if (start_hour <= end_hour)
        duration_hour = end_hour - start_hour;
    else if (start_hour > end_hour) {
        duration_hour = (24 - (start_hour - end_hour));
        duration_day -= 1;
    }

    if (start_minute <= end_minute)
        duration_minute = end_minute - start_minute;
    else if (start_minute > end_minute) {
        duration_minute = (60 - (start_minute - end_minute));
        duration_hour -= 1;
    }

    if (start_second <= end_second)
        duration_second = end_second - start_second;
    else if (start_second > end_second) {
        duration_second = (60 - (start_second - end_second));
        duration_minute -= 1;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", duration_day, duration_hour, duration_minute, duration_second);

    return 0;
}