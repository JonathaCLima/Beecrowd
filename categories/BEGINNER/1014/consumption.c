#include <stdio.h>

int main() {
    int distance_traveled;
    double spent_fuel, average_consumption;

    scanf("%d %lf", &distance_traveled, &spent_fuel);
    average_consumption = distance_traveled / spent_fuel;
    printf("%.3lf km/l\n", average_consumption);

    return 0;
}