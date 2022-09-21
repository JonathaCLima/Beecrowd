#include <iostream>
#include <vector>

using namespace std;

typedef struct Order
{
    int delivery_time, amount_pizzas;
} Order;

int main()
{
    int n;

    while (cin >> n && n)
    {
        int p;

        cin >> p;

        vector<Order> delivery;
        delivery.resize(1);

        for (int i {1}; i <= n; i++)
        {
            Order new_order;
            cin >> new_order.delivery_time >> new_order.amount_pizzas;
            delivery.push_back(new_order);
        }

        vector<vector<int>> worst_orders;
        worst_orders.resize(n + 1, vector<int>(p + 1, 0));

        for (int i {0}; i <= n; i++)
        {
            for (int j {0}; j <= p; j++)
            {
                if (!i || !j)
                {
                    worst_orders.at(i).at(j) = 0;
                }
                else
                {
                    if (delivery.at(i).amount_pizzas <= j)
                    {
                        worst_orders.at(i).at(j) = max(worst_orders.at(i - 1).at(j), worst_orders.at(i - 1).at(j - delivery.at(i).amount_pizzas) + delivery.at(i).delivery_time);
                    }
                    else
                    {
                        worst_orders.at(i).at(j) = worst_orders.at(i - 1).at(j);
                    }
                }
            }
        }

        cout << worst_orders.at(n).at(p) << " min." << endl;
    }

    return 0;
}