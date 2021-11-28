#include <stdio.h>
#include <stdbool.h>

bool balanced(char *);

int main () {
    char expression[1000];

    while (scanf("%s", expression) != EOF)
        balanced(expression) ? printf("correct\n") : printf("incorrect\n");

    return 0;
}

bool balanced(char *character) {
    short count = 0;
    if (*character == ')')
        return false;
    else {
        while ((*character) && (count >= 0)) {
            if (*character == '(')
                count++;
            if (*character == ')')
                count --;
            character++;
        }
        return (count == 0) ? true : false;
    }
}