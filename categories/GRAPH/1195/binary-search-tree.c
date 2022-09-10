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

void pre(Node*);
void in(Node*);
void post(Node*);

int main() {
    int c, count_cases = 0;

    scanf("%d", &c);

    while(c--) {
        Node* root = NULL;

        int n;

        scanf("%d", &n);

        while(n--) {
            int number;
            scanf("%d", &number);
            root = push(root, number);
        }

        printf("Case %d:", ++count_cases); printf("\n");
        printf("Pre.:"); pre(root); printf("\n");
        printf("In..:"); in(root); printf("\n");
        printf("Post:"); post(root); printf("\n\n");
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

void pre(Node* root) {
    if(root) {
        printf(" %d", root->data);
        pre(root->left);
        pre(root->right);
    }
}

void in(Node* root) {
    if(root) {
        in(root->left);
        printf(" %d", root->data);
        in(root->right);
    }
}

void post(Node* root) {
    if(root) {
        post(root->left);
        post(root->right);
        printf(" %d", root->data);
    }
}