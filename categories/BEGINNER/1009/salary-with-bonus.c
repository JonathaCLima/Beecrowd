#include <stdio.h>

int main() {
    char seller_name[256];
    double final_salary, fixed_salary, sale_total;

    scanf("%s %lf %lf", &seller_name, &fixed_salary, &sale_total);
    final_salary = fixed_salary + (sale_total * 0.15);
    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}