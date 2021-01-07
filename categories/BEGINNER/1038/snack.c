#include <stdio.h>

int main() {
    int product_code, quantity;
    
    scanf("%d %d", &product_code, &quantity);
    
    switch(product_code) {
        case 1:
            printf("Total: R$ %.2f\n", 4.00 * quantity);
        break;
        case 2:
            printf("Total: R$ %.2f\n", 4.50 * quantity);
        break;
        case 3:
            printf("Total: R$ %.2f\n", 5.00 * quantity);
        break;
        case 4:
            printf("Total: R$ %.2f\n", 2.00 * quantity);
        break;
        case 5:
            printf("Total: R$ %.2f\n", 1.50 * quantity);
        break;
    }

    return(0);
}