#include <stdio.h>

int main() {
    int value;

    scanf("%d", &value);

    for (int count = 1, multiplication_table = value; count <= 10; count++, multiplication_table = count * value) 
        printf("%d x %d = %d\n", count, value, multiplication_table);

    return 0;
}