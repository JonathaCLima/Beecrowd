#include <stdio.h>

int main() {
    double liters;
    int distance, time, average_speed;
    
    scanf("%d %d", &time, &average_speed);
    distance = time * average_speed;
    liters = (double)distance / 12;
    printf("%.3lf\n", liters);

    return 0;
}