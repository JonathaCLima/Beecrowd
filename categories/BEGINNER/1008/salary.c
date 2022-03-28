#include <stdio.h>

int main() {
    double worked_hours, salary, hour_value;
    int employee_number;

    scanf("%d %lf %lf", &employee_number, &worked_hours, &hour_value);
    salary = worked_hours * hour_value;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", employee_number, salary);

    return 0;
}