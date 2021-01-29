#include <stdio.h>

int main() {
    float salary;

    scanf("%f", &salary);

    if ((salary >= 0) && (salary <= 400.00))
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", (salary * 1.15), (salary * 0.15), 15, 37);
    else if ((salary >= 400.01) && (salary <= 800.00))
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", (salary * 1.12), (salary * 0.12), 12, 37);
    else if ((salary >= 800.01) && (salary <= 1200.00))
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", (salary * 1.10), (salary * 0.10), 10, 37);
    else if ((salary >= 1200.01) && (salary <= 2000.00)) 
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", (salary * 1.07), (salary * 0.07),  7, 37);
    else if (salary > 2000.00)
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", (salary * 1.04), (salary * 0.04),  4, 37);

    return 0;
}