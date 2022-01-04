#include <stdio.h>

#define LARGER(a, b) a > b ? a : b

typedef struct {
    int time_spent, pizzas;
} Delivery;

int main() {
    Delivery order[31];
    int motoboy[21][31], n, p;

    while(scanf("%d", &n) && n) {
        scanf("%d", &p);
        for(int i = 1; i <= n; i++)
            scanf("%d %d", &order[i].time_spent, &order[i].pizzas);

        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= p; j++)
                if(!i || !j)
                    motoboy[i][j] = 0;
                else
                    if(order[i].pizzas > j)
                        motoboy[i][j] = motoboy[i-1][j];
                    else
                        motoboy[i][j] = LARGER(motoboy[i-1][j - order[i].pizzas] + order[i].time_spent, motoboy[i-1][j]);

        printf("%d min.\n", motoboy[n][p]);
    }

    return 0;
}