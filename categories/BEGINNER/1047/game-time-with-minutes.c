#include <stdio.h>

int main() {
    int initial_hour, initial_minute, final_hour, final_minute, hour = 0, minute = 0;

    scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);
    
    int total_initial_minute = (24 * 60) - ((initial_hour * 60) + initial_minute);
    int total_final_minute   = (24 * 60) - ((final_hour   * 60) + final_minute);
    
    if ((total_initial_minute - total_final_minute) == 0) {
        hour = 24;
        minute = 0;
    }
    else if ((total_initial_minute - total_final_minute) > 0) {
        while ((total_initial_minute - total_final_minute) >= 60) {
            hour += 1;
            total_initial_minute -= 60;
        }
        minute = (total_initial_minute - total_final_minute);
    }
    else {
        total_initial_minute *= -1;
        total_final_minute   *= -1;
        while ((total_initial_minute - total_final_minute) > 60) {
            hour += 1;
            total_initial_minute -= 60;
        }
        minute = (total_initial_minute - total_final_minute) * (-1);
        hour = (hour * (-1)) + 24;
        while ((minute < 0) && (hour > 0)) {
            hour -= 1;
            minute += 60;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);

    return 0;
}