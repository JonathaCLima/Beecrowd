#include <stdio.h>
#include <stdlib.h>

int ascending(void const *a, void const *b);
int descending(void const *a, void const *b);

int main() {
    int n, num, count_even = 0, count_odd = 0;

    scanf("%d", &n);

    int even[n];
    int odd[n];

    while(n--) {
        scanf("%d", &num);
        if(num % 2 == 0)
            even[count_even++] = num;
        else
            odd[count_odd++] = num;
    }

    qsort(even, count_even, sizeof(int), ascending);
    qsort(odd, count_odd, sizeof(int), descending);

    for(int i = 0; i < count_even; i++)
        printf("%d\n", even[i]);

    for(int i = 0; i < count_odd; i++)
        printf("%d\n", odd[i]);

    return 0;
}

int ascending(void const *a, void const *b) {
    return (*(int*)a - *(int*)b);
}

int descending(void const *a, void const *b) {
    return (*(int*)b - *(int*)a);
}