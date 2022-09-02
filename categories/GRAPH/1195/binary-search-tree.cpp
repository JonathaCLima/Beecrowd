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
        
    void pre(BinarySearchTree*);
    void in(BinarySearchTree*);
    void post(BinarySearchTree*);
};

int main()
{
    int c, count_cases {0};

    cin >> c;

    while (c--)
    {
        BinarySearchTree* tree {NULL};
        BinarySearchTree* root {NULL};

        int n;

        cin >> n;

        while (n--)
        {
            int number;
            cin >> number;
            root = tree->push(root, number);
        }

        cout << "Case " << ++count_cases << ":" << endl;
        cout << "Pre.:"; tree->pre(root); cout << endl;
        cout << "In..:"; tree->in(root); cout << endl;
        cout << "Post:"; tree->post(root); cout << endl << endl;
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

void BinarySearchTree::pre(BinarySearchTree* root)
{
    if (root)
    {
        cout << " " << root->data;
        pre(root->left);
        pre(root->right);
    }
}

void BinarySearchTree::in(BinarySearchTree* root)
{
    if (root)
    {
        in(root->left);
        cout << " " << root->data;
        in(root->right);
    }
}

void BinarySearchTree::post(BinarySearchTree* root)
{
    if (root)
    {
        post(root->left);
        post(root->right);
        cout << " " << root->data;
    }
}