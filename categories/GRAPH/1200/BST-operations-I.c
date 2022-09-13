#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

Node* create(Node*, char);
Node* push(Node*, char);
Node* find(Node*, char);

void pre(Node*);
void in(Node*);
void post(Node*);

int data_index;

int main() {
    Node* root = NULL;

    char operation[10];

    while(scanf("%s%*c", operation) != EOF) {
        char letter;

        if(strcmp(operation, "I") == 0) {
            scanf("%c", &letter);
            root = push(root, letter);
        }
        else if(strcmp(operation, "P") == 0) {
            scanf("%c", &letter);
            find(root, letter) ? printf("%c existe\n", letter) : printf("%c nao existe\n", letter);
        }
        else if(strcmp(operation, "INFIXA") == 0) {
            in(root);
            printf("\n");
        }
        else if(strcmp(operation, "PREFIXA") == 0) {
            pre(root);
            printf("\n");
        }
        else if(strcmp(operation, "POSFIXA") == 0) {
            post(root);
            printf("\n");
        }

        data_index = 0;
    }

    return 0;
}

Node* create(Node* root, char letter) {
    root = (Node*) malloc(sizeof(Node));
    root->data = letter;
    root->right = NULL;
    root->left = NULL;

    return root;
}

Node* push(Node* root, char letter) {
    if(!root)
        return root = create(root, letter);
    else {
        if (letter > root->data)
            root->right = push(root->right, letter);
        else
            root->left = push(root->left, letter);
    }

    return root;
}

Node* find(Node* root, char letter) {
    if(!root || root->data == letter)
        return root;
    else
        return letter < root->data ? find(root->left, letter) : find(root->right, letter);
}

void pre(Node* root) {
    if(root) {
        data_index++ == 0 ? printf("%c", root->data) : printf(" %c", root->data);
        pre(root->left);
        pre(root->right);
    }
}

void in(Node* root) {
    if(root) {
        in(root->left);
        data_index++ == 0 ? printf("%c", root->data) : printf(" %c", root->data);
        in(root->right);
    }
}

void post(Node* root) {
    if(root) {
        post(root->left);
        post(root->right);
        data_index++ == 0 ? printf("%c", root->data) : printf(" %c", root->data);
    }
}