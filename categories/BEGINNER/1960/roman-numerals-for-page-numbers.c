#include <stdio.h>
#include <string.h>

char* arabic_to_roman(int);

int main() {
    int n;

    scanf("%d", &n);

    printf("%s\n", arabic_to_roman(n));

    return 0;
}

char* arabic_to_roman(int value) {
    int arabic_numerals[]  = { 1000,  900, 500, 400,  100,   90, 50,    40,  10,    9,   5,    4,  1  };
    char* roman_numerals[] = {  "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    static char roman[20]  = { "" };
        
    for(int i = 0; i <= 13; i++) {
        while((value - arabic_numerals[i]) >= 0) {
            strncat(roman, roman_numerals[i], sizeof(roman_numerals[i]));
            value -= arabic_numerals[i];
        }
    }

    return roman;
}