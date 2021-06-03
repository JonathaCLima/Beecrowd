#include <stdio.h>

int main() {
    int value, numbers = 15, count_odd = 0, count_even = 0, odd[5], even[5];

    while (numbers--) {
        scanf("%d", &value);

        if (value % 2 != 0) {
            odd[count_odd] = value;
            count_odd++;

            if (count_odd == 5) {
                for (int count = 0; count < 5; count++, count_odd = 0)
                    printf("impar[%d] = %d\n", count, odd[count]);
            }
        }
        else {
            even[count_even] = value;
            count_even++;

            if (count_even == 5) {
                for (int count = 0; count < 5; count++, count_even = 0)
                    printf("par[%d] = %d\n", count, even[count]);
            }
        }
    }

    for (int count = 0; count < count_odd; count++)
        printf("impar[%d] = %d\n", count, odd[count]);

    for (int count = 0; count < count_even; count++)
        printf("par[%d] = %d\n", count, even[count]);

    return 0;
}