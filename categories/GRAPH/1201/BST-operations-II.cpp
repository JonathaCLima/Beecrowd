#include <iostream>

using namespace std;

class Node
{
    private:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int);

    Node* push(Node*, int);
    Node* pop(Node*, int);
    Node* find(Node*, int);
    Node* min(Node*);
    Node* max(Node*);
        
    void pre(Node*);
    void in(Node*);
    void post(Node*);
};

int data_index;

int main()
{
    Node* root {NULL};

    string operation;

    while (cin >> operation)
    {
        int number;

        if (operation.compare("I") == 0)
        {
            cin >> number;
            root = root->push(root, number);
        }
        else if (operation.compare("P") == 0)
        {
            cin >> number;
            cout << number << (root->find(root, number) ? " existe" : " nao existe") << endl;
        }
        else if (operation.compare("R") == 0)
        {
            cin >> number;
            root = root->pop(root, number);
        }
        else if (operation.compare("INFIXA") == 0)
        {
            root->in(root);
            cout << endl;
        }
        else if (operation.compare("PREFIXA") == 0)
        {
            root->pre(root);
            cout << endl;
        }
        else if (operation.compare("POSFIXA") == 0)
        {
            root->post(root);
            cout << endl;
        }

        data_index = 0;
    }

    return 0;
}

Node::Node(int number) : data(number), left(NULL), right(NULL)
{

}

Node* Node::push(Node* root, int number)
{
    if (!root)
    {
        return new Node(number);
    }
    else
    {
        number > root->data ? root->right = push(root->right, number) : root->left = push(root->left, number);
    }
    return root;
}

Node* Node::pop(Node* root, int number)
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

Node* Node::find(Node* root, int number)
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

Node* Node::min(Node* root)
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

Node* Node::max(Node* root)
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

void Node::pre(Node* root)
{
    if (root)
    {
        cout << (data_index++ == 0 ? "\0" : " ") << root->data;
        pre(root->left);
        pre(root->right);
    }
}

void Node::in(Node* root)
{
    if (root)
    {
        in(root->left);
        cout << (data_index++ == 0 ? "\0" : " ") << root->data;
        in(root->right);
    }
}

void Node::post(Node* root)
{
    if (root)
    {
        post(root->left);
        post(root->right);
        cout << (data_index++ == 0 ? "\0" : " ") << root->data;
    }
}