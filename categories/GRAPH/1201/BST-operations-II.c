#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* create(Node*, int);
Node* push(Node*, int);
Node* pop(Node*, int);
Node* find(Node*, int);
Node* min(Node*);
Node* max(Node*);

void pre(Node*);
void in(Node*);
void post(Node*);

int data_index;

int main() {
    Node* root = NULL;

    char operation[10];

    while(scanf("%s", operation) != EOF) {
        int number;

        if(strcmp(operation, "I") == 0) {
            scanf("%d", &number);
            root = push(root, number);
        }
        else if(strcmp(operation, "P") == 0) {
            scanf("%d", &number);
            find(root, number) ? printf("%d existe\n", number) : printf("%d nao existe\n", number);
        }
        else if(strcmp(operation, "R") == 0) {
            scanf("%d", &number);
            root = pop(root, number);
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

Node* create(Node* root, int number) {
    root = (Node*) malloc(sizeof(Node));
    root->data = number;
    root->right = NULL;
    root->left = NULL;

    return root;
}

Node* push(Node* root, int number) {
    if(!root)
        return root = create(root, number);
    else {
        if (number > root->data)
            root->right = push(root->right, number);
        else
            root->left = push(root->left, number);
    }

    return root;
}

Node* pop(Node* root, int number) {
    if(!root)
        return root;
    else if(root->data > number)
        root->left = pop(root->left, number);
    else if(root->data < number)
        root->right = pop(root->right, number);
    else if(root->left && root->right) {
        root->data = max(root->left)->data;
        root->left = pop(root->left, root->data);
    }
    else {
        if (!root->left)
            root = root->right;
        else
            root = root->left;
    }

    return root;
}

Node* find(Node* root, int number) {
    if(!root || root->data == number)
        return root;
    else
        return number < root->data ? find(root->left, number) : find(root->right, number);
}

Node* min(Node* root) {
    if(!root)
        return root;
    else
        return !root->left ? root : max(root->left);
}

Node* max(Node* root) {
    if(!root)
        return root;
    else
        return !root->right ? root : max(root->right);
}

void pre(Node* root) {
    if(root) {
        data_index++ == 0 ? printf("%d", root->data) : printf(" %d", root->data);
        pre(root->left);
        pre(root->right);
    }
}

void in(Node* root) {
    if(root) {
        in(root->left);
        data_index++ == 0 ? printf("%d", root->data) : printf(" %d", root->data);
        in(root->right);
    }
}

void post(Node* root) {
    if(root) {
        post(root->left);
        post(root->right);
        data_index++ == 0 ? printf("%d", root->data) : printf(" %d", root->data);
    }
}