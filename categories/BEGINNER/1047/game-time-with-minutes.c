#include <stdio.h>

int main() {
    int initial_hour, initial_minute, final_hour, final_minute, hour, minute;

    scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

    initial_minute = (24 * 60) - ((initial_hour * 60) + initial_minute);
    final_minute   = (24 * 60) - ((final_hour   * 60) + final_minute);

    if ((initial_minute - final_minute) == 0) {
        hour = 24;
        minute = 0;
    }
    else {
        if ((initial_minute - final_minute) > 0) {
            while ((initial_minute - final_minute) >= 60) {
                hour += 1;
                initial_minute -= 60;
            }
            minute = (initial_minute - final_minute);
        }
        else {
            if ((initial_minute - final_minute) < 0) {
                initial_minute = ((-1) * (initial_minute));
                final_minute   = ((-1) * (final_minute));
                while ((initial_minute - final_minute) > 60) {
                    hour += 1;
                    initial_minute -= 60;
                }
                minute = (initial_minute - final_minute);
                hour   = (hour   * (-1) + 24);
                minute = (minute * (-1));
                while ((minute < 0) && (hour > 0)) {
                    hour -= 1;
                    minute += 60;
                }
            }
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);

    return 0;
}