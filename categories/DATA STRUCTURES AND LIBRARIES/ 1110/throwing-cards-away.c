#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
    struct node *prev;
} Node;

typedef struct deque {
    struct node *head;
    struct node *tail;
} Deque;

Deque *inicialize(void);
bool is_empty(Deque *deque);
void push_front(Deque *deque, int value);
void push_back(Deque *deque, int value);
void pop_front(Deque *deque);
void pop_back(Deque *deque);
int peek_front(Deque *deque);
int peek_back(Deque *deque);
void erase_deque(Deque *deque);

int main() {
    int n;

    while(scanf("%d", &n) && n != 0) {
        Deque *deck = inicialize();

        for(int i = 1; i <= n; i++) {
            push_back(deck, i);
        }

        printf("Discarded cards: ");

        while(--n) {
            printf(n > 1 ? "%d, " : "%d\n", peek_front(deck));
            pop_front(deck);
            push_back(deck, peek_front(deck));
            pop_front(deck);
        }

        printf("Remaining card: %d\n", peek_front(deck));

        erase_deque(deck);
    }

    return 0;
}

Deque *inicialize() {
    Deque *deque = malloc(sizeof(Deque));
    deque->head = NULL;
    deque->tail = NULL;

    return deque;
}

bool is_empty(Deque *deque) {
    return !deque->head || !deque->tail;
}

void push_front(Deque *deque, int value) {
    Node *new_node = malloc(sizeof(Node));

    new_node->value = value;
    new_node->next = deque->head;
    new_node->prev = NULL;

    if (is_empty(deque))
        deque->tail = new_node;
    else
        deque->head->prev = new_node;

    deque->head = new_node;
}

void push_back(Deque *deque, int value) {
    Node *new_node = malloc(sizeof(Node));

    new_node->value = value;
    new_node->next = NULL;
    new_node->prev = deque->tail;

    if (is_empty(deque))
        deque->head = new_node;
    else
        deque->tail->next = new_node;

    deque->tail = new_node;
}

void pop_front(Deque *deque) {
    Node *aux = deque->head;
    deque->head = aux->next;

    if (!deque->head)
        deque->tail = NULL;
    else
        deque->head->prev = NULL;

    free(aux);
}

void pop_back(Deque *deque) {
    Node *aux = deque->tail;
    deque->tail = aux->prev;

    if (!deque->tail)
        deque->head = NULL;
    else
        deque->tail->next = NULL;

    free(aux);
}

int peek_front(Deque *deque) {
    return deque->head->value;
}

int peek_back(Deque *deque) {
    return deque->tail->value;
}

void erase_deque(Deque *deque) {
    Node *aux = deque->head;
    deque->head = NULL;
    free(aux);
}