#include <stdio.h>

int main() {
    int age, count = 0;
    float average = 0, summation = 0;

    scanf("%d", &age);

    while (age > 0) {
        count++;
        summation += age;
        scanf("%d", &age);
    }

    average = summation / count;

    printf("%.2f\n", average);

    return 0;
}