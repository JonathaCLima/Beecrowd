#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct node {
    char element;
    struct node *left, *right;
} Node;

typedef struct binary_tree {
    struct node *root;
} BTree;

void insert(BTree *tree, char element);
void insert_left(Node *ptr, char element);
void insert_right(Node *ptr, char element);
bool find(Node *ptr, char element);
void pre(Node *ptr);
void in(Node *ptr);
void post(Node *ptr);

bool first_space;

int main() {
    char operation[10], element;
    BTree tree;
    tree.root = NULL;

    while(scanf("%s", operation) != EOF) {
        getchar();
        if (strcmp (operation, "I") == 0) {
            scanf("%c", &element);
            insert(&tree, element);
        }
        else if (strcmp (operation, "P") == 0) {
            scanf("%c", &element);
            find(tree.root, element) ? printf("%c existe\n", element) : printf("%c nao existe\n", element);
        }
        else if (strcmp (operation, "INFIXA") == 0) {
            first_space = false;
            in(tree.root);
            printf("\n");
        }
        else if (strcmp (operation, "PREFIXA") == 0) {
            first_space = false;
            pre(tree.root);
            printf("\n");
        }
        else if (strcmp (operation, "POSFIXA") == 0) {
            first_space = false;
            post(tree.root);
            printf("\n");
        }
    }

    return 0;
}

bool find(Node *ptr, char element) {
   if (ptr == NULL)
       return false;
   else {
       if (ptr->element == element)
           return true;
       else
           return element < ptr->element ? find(ptr->left, element) : find(ptr->right, element);
   }
}

void insert(BTree *tree, char element) {
    if(tree->root == NULL) {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->element = element;
        new_node->left = NULL;
        new_node->right = NULL;
        tree->root = new_node;
    }
    else
        element < tree->root->element ? insert_left(tree->root, element) : insert_right(tree->root, element);
}

void insert_left(Node *ptr, char element) {
    if(ptr->left == NULL) {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->element = element;
        new_node->left = NULL;
        new_node->right = NULL;
        ptr->left = new_node;
    }
    else
        element < ptr->left->element ? insert_left(ptr->left, element) : insert_right(ptr->left, element);
}

void insert_right(Node *ptr, char element) {
    if(ptr->right == NULL) {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->element = element;
        new_node->left = NULL;
        new_node->right = NULL;
        ptr->right = new_node;
    }
    else
        element > ptr->right->element ? insert_right(ptr->right, element) : insert_left(ptr->right, element);
}

void pre(Node *ptr) {
    if(ptr != NULL) {
        if(first_space)
            printf(" ");
        first_space = true;
        printf("%c", ptr->element);
        pre(ptr->left);
        pre(ptr->right);
    }
}

void in(Node *ptr) {
    if(ptr != NULL) {
        in(ptr->left);
        if(first_space)
            printf(" ");
        first_space = true;
        printf("%c", ptr->element);
        in(ptr->right);
    }
}

void post(Node *ptr) {
    if(ptr != NULL) {
        post(ptr->left);
        post(ptr->right);
        if(first_space)
            printf(" ");
        first_space = true;
        printf("%c", ptr->element);
    }
}