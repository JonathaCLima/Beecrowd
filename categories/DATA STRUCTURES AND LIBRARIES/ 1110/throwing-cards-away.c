#include <stdio.h>

void push(int);
void pop();

int deck[50];
int count;

int main() {
    int n;

    while(scanf("%d", &n) && n != 0) {
        count = 0;

        for (int i = 1; i <= n; i++) {
            push(i);
        }

        printf("Discarded cards: ");

        while(--n) {
            printf(n > 1 ? "%d, " : "%d\n", deck[0]);
            pop();
            push(deck[0]);
            pop();
        }

        printf("Remaining card: %d\n", deck[0]);
    }

    return 0;
}

void push(int x) {
    deck[count++] = x;
}

void pop() {
    for (int i = 0; i < count - 1; i++) {
        deck[i] = deck[i + 1];
    }
    count--;
}