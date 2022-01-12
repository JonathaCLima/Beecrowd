#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char v[100];

    scanf("%d", &n);

    while(n--) {
        scanf("%s", v);
        for(int i = 0, leds = 0; i <= strlen(v); i++) {
            if(v[i] == '\0') { printf("%d leds\n", leds); break; }
            if(v[i] == '0') { leds += 6; continue; }
            if(v[i] == '1') { leds += 2; continue; }
            if(v[i] == '2') { leds += 5; continue; }
            if(v[i] == '3') { leds += 5; continue; }
            if(v[i] == '4') { leds += 4; continue; }
            if(v[i] == '5') { leds += 5; continue; }
            if(v[i] == '6') { leds += 6; continue; }
            if(v[i] == '7') { leds += 3; continue; }
            if(v[i] == '8') { leds += 7; continue; }
            if(v[i] == '9') { leds += 6; continue; }
        }
    }

    return 0;
}