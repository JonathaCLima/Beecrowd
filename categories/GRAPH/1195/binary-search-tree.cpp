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

    void pre(Node*);
    void in(Node*);
    void post(Node*);
};

int main()
{
    int c, count_cases {0};

    cin >> c;

    while (c--)
    {
        Node* root {NULL};

        int n;

        cin >> n;

        while (n--)
        {
            int number;
            cin >> number;
            root = root->push(root, number);
        }

        cout << "Case " << ++count_cases << ":" << endl;
        cout << "Pre.:"; root->pre(root); cout << endl;
        cout << "In..:"; root->in(root); cout << endl;
        cout << "Post:"; root->post(root); cout << endl << endl;
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

void Node::pre(Node* root)
{
    if (root)
    {
        cout << " " << root->data;
        pre(root->left);
        pre(root->right);
    }
}

void Node::in(Node* root)
{
    if (root)
    {
        in(root->left);
        cout << " " << root->data;
        in(root->right);
    }
}

void Node::post(Node* root)
{
    if (root)
    {
        post(root->left);
        post(root->right);
        cout << " " << root->data;
    }
}