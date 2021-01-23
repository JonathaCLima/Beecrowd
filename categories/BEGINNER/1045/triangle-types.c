#include <stdio.h>

float bigger(float x, float y) {
    return x > y ? x : y;
}

int main() {
    float a, b, c, perimeter;

    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;

    if ((a >= b) && (a >= c))
        b = bigger(b, c);
    else {
        if ((b >= a) && (b >= c)) {
            a = b;
            b = bigger((perimeter - b - c), c);
        }
        else {
            a = c;
            b = bigger((perimeter - b - c), b);
        }
    }

    c = perimeter - a - b;

    if (a >= (b + c))
        printf("NAO FORMA TRIANGULO\n");
    else if (a * a == ((b * b) + (c * c)))
        printf("TRIANGULO RETANGULO\n");
    else if ((a * a) > ((b * b) + (c * c)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if ((a * a) < ((b * b) + (c * c)))
        printf("TRIANGULO ACUTANGULO\n");

    if ((a == b) && (a == c) && (b == c))
        printf("TRIANGULO EQUILATERO\n");
    else if ((a == b) || (a == c) || (b == c))
        printf("TRIANGULO ISOSCELES\n");

   return 0;
}