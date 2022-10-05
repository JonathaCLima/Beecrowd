#include <stdio.h>

void swap(int*, int*);
char form_triangle(int*, int*, int*, int*);

int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%c\n", form_triangle(&a, &b, &c, &d));

    return 0;
}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

char form_triangle(int* a, int* b, int* c, int* d) {
    if (*a < *b) swap(a, b);
    if (*a < *c) swap(a, c);
    if (*a < *d) swap(a, d);
    if (*b < *c) swap(b, c);
    if (*b < *d) swap(b, d);
    if (*c < *d) swap(c, d);

    return (*a < (*b + *c) || *b < (*c + *d) ? 'S' : 'N');
}