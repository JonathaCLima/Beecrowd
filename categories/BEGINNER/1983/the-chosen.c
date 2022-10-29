#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int registrations[n];
    double notes[n];

    for (int i = 0; i < n; i++) {
        scanf("%d  %lf", &registrations[i], &notes[i]);
    }

    int index = 0;
    double greater_note = 0.0;

    for (int i = 0; i < n; i++) {
        if (notes[i] > greater_note) {
            greater_note = notes[i];
            index = i;
        }
    }

    if (greater_note < 8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", registrations[index]);

    return 0;
}