#include <iostream>

using namespace std;

class Node
{
    private:
    char data;
    Node* left;
    Node* right;

    public:
    Node(char);

    Node* push(Node*, char);
    Node* find(Node*, char);

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
        char letter;

        if (operation.compare("I") == 0)
        {
            cin >> letter;
            root = root->push(root, letter);
        }
        else if (operation.compare("P") == 0)
        {
            cin >> letter;
            cout << letter << (root->find(root, letter) ? " existe" : " nao existe") << endl;
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

Node::Node(char letter) : data(letter), left(NULL), right(NULL)
{

}

Node* Node::push(Node* root, char letter)
{
    if (!root)
    {
        return new Node(letter);
    }
    else
    {
        letter > root->data ? root->right = push(root->right, letter) : root->left = push(root->left, letter);
    }
    return root;
}

Node* Node::find(Node* root, char letter)
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