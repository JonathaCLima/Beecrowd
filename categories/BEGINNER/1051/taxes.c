#include <stdio.h>

int main() {
    float salary;

    scanf("%f", &salary);

    if ((salary >= 0) && (salary <= 2000.00))
        printf("Isento\n");
    else if ((salary >= 2000.01) && (salary <= 3000.00))
        printf("R$ %.2f\n", ((salary - 2000.00) * 0.08));
    else if ((salary >= 3000.01) && (salary <= 4500.00))
        printf("R$ %.2f\n", (((salary - 3000.00) * 0.18) + 80.00));
    else if (salary > 4500.00)
        printf("R$ %.2f\n", (((salary - 4500.00) * 0.28) + 350.00));

    return 0;
}