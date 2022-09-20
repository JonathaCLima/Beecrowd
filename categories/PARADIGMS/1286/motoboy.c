#include <stdio.h>

#define max(a, b) a > b ? a : b

typedef struct Order {
    int delivery_time, amount_pizzas;
} Order;

int main() {
    Order delivery[31];
    int worst_orders[21][31], n, p;

    while(scanf("%d", &n) && n) {
        scanf("%d", &p);
        for(int i = 1; i <= n; i++)
            scanf("%d %d", &delivery[i].delivery_time, &delivery[i].amount_pizzas);

        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= p; j++)
                if(!i || !j)
                    worst_orders[i][j] = 0;
                else
                    if(delivery[i].amount_pizzas > j)
                        worst_orders[i][j] = worst_orders[i - 1][j];
                    else
                        worst_orders[i][j] = max(worst_orders[i - 1][j - delivery[i].amount_pizzas] + delivery[i].delivery_time, worst_orders[i - 1][j]);

        printf("%d min.\n", worst_orders[n][p]);
    }

    return 0;
}