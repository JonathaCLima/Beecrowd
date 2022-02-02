#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int card;
    struct node *next;
} Node;

typedef struct stack {
    struct node *top;
} Stack;

void pop(Stack *stack, int *discard);
void push(Stack *stack, int card);
void move_top(Stack *stack);
void make_empty(Stack *stack);
void erase(Stack *stack);
int count;

int main() {
    int n;
    Stack deck;

    while(scanf("%d", &n) && n != 0) {
        int discard[n];
        make_empty(&deck);
        count = 0;

        for(int i = n; i > 0; i--)
            push(&deck, i);

        pop(&deck, discard);

        printf("Discarded cards:");
        for(int i = 0; i < count; i++) {
            printf(" %d", discard[i]);
            i != count - 1 ? printf(",") : printf("\n");
        }

        printf("Remaining card: %d\n", deck.top->card);
        erase(&deck);
    }

    return 0;
}

void pop(Stack *stack, int *discard) {
    if(stack) {
        if(!stack->top->next)
            return;
        do {
            Node *aux = stack->top;
            discard[count++] = aux->card;
            stack->top = stack->top->next;
            free(aux);
            move_top(stack);
        } while(stack->top->next);
    }
}

void push(Stack *stack, int card) {
    Node *aux = (Node *) malloc(sizeof(Node));
    if(!aux) exit(1);
    aux->next = stack->top;
    stack->top = aux;
    aux->card = card;
}

void move_top(Stack *stack) {
    Node *aux = stack->top;
    Node *bottom = stack->top;
    if(bottom->next) {
        while(bottom->next)
            bottom = bottom->next;
        stack->top = stack->top->next;
        aux->next = bottom->next;
        bottom->next = aux;
    }
}

void make_empty(Stack *stack) {
    stack->top = NULL;
}

void erase(Stack *stack) {
    Node *aux = stack->top;
    stack->top = NULL;
    free(aux);
}