#include <stdio.h>

int main() {
    int start_day, start_hour, start_minute, start_second;
    int end_day, end_hour, end_minute, end_second;

    scanf("Dia %d", &start_day);
    scanf("%d : %d : %d\n", &start_hour, &start_minute, &start_second);
    scanf("Dia %d", &end_day);
    scanf("%d : %d : %d", &end_hour, &end_minute, &end_second);

    int duration_day = end_day - start_day;
    int duration_hour = end_hour - start_hour;
    int duration_minute = end_minute - start_minute;
    int duration_second = end_second - start_second;

    if (duration_second < 0) {
        duration_second += 60;
        duration_minute--;
    }

    if (duration_minute < 0) {
        duration_minute += 60;
        duration_hour--;
    }

    if (duration_hour < 0) {
        duration_hour += 24;
        duration_day--;
    }

    printf("%d dia(s)\n", duration_day);
    printf("%d hora(s)\n", duration_hour);
    printf("%d minuto(s)\n", duration_minute);
    printf("%d segundo(s)\n", duration_second);

    return 0;
}