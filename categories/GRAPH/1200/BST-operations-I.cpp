#include <iostream>

using namespace std;

class BinarySearchTree
{
private:
    char data;
    BinarySearchTree* left;
    BinarySearchTree* right;

public:
    BinarySearchTree(char);

    BinarySearchTree* push(BinarySearchTree*, char);
    BinarySearchTree* find(BinarySearchTree*, char);

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
        char letter;

        if (operation.compare("I") == 0)
        {
            cin >> letter;
            root = tree->push(root, letter);
        }
        else if (operation.compare("P") == 0)
        {
            cin >> letter;
            cout << letter << (tree->find(root, letter) ? " existe" : " nao existe") << endl;
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

BinarySearchTree::BinarySearchTree(char letter) : data(letter), left(NULL), right(NULL)
{

}

BinarySearchTree* BinarySearchTree::push(BinarySearchTree* root, char letter)
{
    if (!root)
    {
        return new BinarySearchTree(letter);
    }
    else
    {
        letter > root->data ? root->right = push(root->right, letter) : root->left = push(root->left, letter);
    }
    return root;
}

BinarySearchTree* BinarySearchTree::find(BinarySearchTree* root, char letter)
{
    if (!root || root->data == letter)
    {
        return root;
    }
    else
    {
        return letter < root->data ? find(root->left, letter) : find(root->right, letter);
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