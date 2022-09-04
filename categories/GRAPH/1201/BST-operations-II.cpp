#include <iostream>

using namespace std;

class BinarySearchTree
{
private:
    int data;
    BinarySearchTree* left;
    BinarySearchTree* right;

public:
    BinarySearchTree(int);

    BinarySearchTree* push(BinarySearchTree*, int);
    BinarySearchTree* pop(BinarySearchTree*, int);
    BinarySearchTree* find(BinarySearchTree*, int);
    BinarySearchTree* min(BinarySearchTree*);
    BinarySearchTree* max(BinarySearchTree*);
        
    void pre(BinarySearchTree*);
    void in(BinarySearchTree*);
    void post(BinarySearchTree*);
};

int data_index;

int main()
{
    BinarySearchTree* tree {NULL};
    BinarySearchTree* root {NULL};

    string operation;

    while (cin >> operation)
    {
        int number;

        if (operation.compare("I") == 0)
        {
            cin >> number;
            root = tree->push(root, number);
        }
        else if (operation.compare("P") == 0)
        {
            cin >> number;
            cout << number << (tree->find(root, number) ? " existe" : " nao existe") << endl;
        }
        else if (operation.compare("R") == 0)
        {
            cin >> number;
            root = tree->pop(root, number);
        }
        else if (operation.compare("INFIXA") == 0)
        {
            tree->in(root);
            cout << endl;
        }
        else if (operation.compare("PREFIXA") == 0)
        {
            tree->pre(root);
            cout << endl;
        }
        else if (operation.compare("POSFIXA") == 0)
        {
            tree->post(root);
            cout << endl;
        }

        data_index = 0;
    }

    return 0;
}

BinarySearchTree::BinarySearchTree(int number) : data(number), left(NULL), right(NULL)
{

}

BinarySearchTree* BinarySearchTree::push(BinarySearchTree* root, int number)
{
    if (!root)
    {
        return new BinarySearchTree(number);
    }
    else
    {
        number > root->data ? root->right = push(root->right, number) : root->left = push(root->left, number);
    }
    return root;
}

BinarySearchTree* BinarySearchTree::pop(BinarySearchTree* root, int number)
{
    if (!root)
    {
        return root;
    }
    else if (root->data > number)
    {
        root->left = pop(root->left, number);
    }
    else if (root->data < number)
    {
        root->right = pop(root->right, number);
    }
    else if (root->left && root->right)
    {
        root->data = max(root->left)->data;
        root->left = pop(root->left, root->data);
    }
    else
    {
        !root->left ? root = root->right : root = root->left;
    }

    return root;
}

BinarySearchTree* BinarySearchTree::find(BinarySearchTree* root, int number)
{
    if (!root || root->data == number)
    {
        return root;
    }
    else
    {
        return number < root->data ? find(root->left, number) : find(root->right, number);
    }
}

BinarySearchTree* BinarySearchTree::min(BinarySearchTree* root)
{
    if (!root)
    {
        return root;
    }
    else
    {
        return !root->left ? root : max(root->left);
    }
}

BinarySearchTree* BinarySearchTree::max(BinarySearchTree* root)
{
    if (!root)
    {
        return root;
    }
    else
    {
        return !root->right ? root : max(root->right);
    }
}

void BinarySearchTree::pre(BinarySearchTree* root)
{
    if (root)
    {
        cout << (data_index++ == 0 ? "\0" : " ") << root->data;
        pre(root->left);
        pre(root->right);
    }
}

void BinarySearchTree::in(BinarySearchTree* root)
{
    if (root)
    {
        in(root->left);
        cout << (data_index++ == 0 ? "\0" : " ") << root->data;
        in(root->right);
    }
}

void BinarySearchTree::post(BinarySearchTree* root)
{
    if (root)
    {
        post(root->left);
        post(root->right);
        cout << (data_index++ == 0 ? "\0" : " ") << root->data;
    }
}