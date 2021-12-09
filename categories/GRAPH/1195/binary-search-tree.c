#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *left, *right;
} Node;

typedef struct binary_tree {
    struct node *root;
} BTree;

void insert(BTree *tree, int value);
void insert_left(Node *ptr, int value);
void insert_right(Node *ptr, int value);
void print(Node *ptr, int count);
void pre(Node *ptr);
void in(Node *ptr);
void post(Node *ptr);

int main() {
    int c, n, value, count = 1;
    BTree tree;
    
    scanf("%d", &c);
    while(c--) {
        tree.root = NULL;
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &value);
            insert(&tree, value);
        }
        print(tree.root, count++);
    }

    return 0;
}

void insert(BTree *tree, int value) {
    if(tree->root == NULL) {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->value = value;
        new_node->left = NULL;
        new_node->right = NULL;
        tree->root = new_node;
    }
    else
        value < tree->root->value ? insert_left(tree->root, value) : insert_right(tree->root, value);
}

void insert_left(Node *ptr, int value) {
    if(ptr->left == NULL) {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->value = value;
        new_node->left = NULL;
        new_node->right = NULL;
        ptr->left = new_node;
    }
    else
        value < ptr->left->value ? insert_left(ptr->left, value) : insert_right(ptr->left, value);
}

void insert_right(Node *ptr, int value) {
    if(ptr->right == NULL) {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->value = value;
        new_node->left = NULL;
        new_node->right = NULL;
        ptr->right = new_node;
    }
    else
        value > ptr->right->value ? insert_right(ptr->right, value) : insert_left(ptr->right, value);
}

void print(Node *ptr, int count) {
    printf("Case %d:", count);
    printf("\nPre.:");
    pre(ptr);
    printf("\nIn..:");
    in(ptr);
    printf("\nPost:");
    post(ptr);
    printf("\n\n");
}

void pre(Node *ptr) {
    if(ptr != NULL) {
        printf(" %d", ptr->value);
        pre(ptr->left);
        pre(ptr->right);
    }
}

void in(Node *ptr) {
    if(ptr != NULL) {
        in(ptr->left);
        printf(" %d", ptr->value);
        in(ptr->right);
    }
}

void post(Node *ptr) {
    if(ptr != NULL) {
        post(ptr->left);
        post(ptr->right);
        printf(" %d", ptr->value);
    }
}