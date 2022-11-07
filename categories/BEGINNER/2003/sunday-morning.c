#include <stdio.h>

#define MAXIMUM_DELAY (60)
#define MEETING_HOUR  (60 * 8)

int main() {
    int hour, minute;

    while (scanf("%d:%d", &hour, &minute) != EOF) {
        int delay = (((hour * 60) + minute + MAXIMUM_DELAY) - MEETING_HOUR);
        printf("Atraso maximo: %d\n", (delay > 0 ? delay : 0));
    }

    return 0;
}