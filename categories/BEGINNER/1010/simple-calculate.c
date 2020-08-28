#include <stdio.h>

int main() {
    double price_product_1, price_product_2, pay;
    int code_product_1, code_product_2, units_product_1, units_product_2;

    scanf("%d %d %lf", &code_product_1, &units_product_1, &price_product_1);
    scanf("%d %d %lf", &code_product_2, &units_product_2, &price_product_2);
    pay = (units_product_1 * price_product_1) + (units_product_2 * price_product_2);
    printf("VALOR A PAGAR: R$ %.2lf\n", pay);
 
    return 0;
}