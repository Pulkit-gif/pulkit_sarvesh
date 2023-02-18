#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *getNewNode(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node *insert(Node *root, int val)
{
    if (root == NULL)
        return getNewNode(val);

    if (root->data < val)
        root->right = insert(root->right, val);

    else if (root->data > val)
        root->left = insert(root->left, val);

    return root;
}

 void inOrder(Node *node)
{
     if (node == NULL)
    {
        cout << "{0}";
    }
    else
    {
        inOrder(node->left);
        cout << "\t" << node->data;
        inOrder(node->right);
    }
} 

void preOrder(Node *node)
{
    if (node == NULL)
    {
        cout << "{0}";
    }
    else
    {
        cout << "\t" << node->data;
        preOrder(node->left);
        preOrder(node->right);
    }
}
void postOrder(Node *node)
{
    if (node == NULL)
    {
        cout << "{0}";
    }
    else
    {
        postOrder(node->left);
        postOrder(node->right);
        cout << "\t" << node->data;
    }
}

int main()
{

    Node *root = getNewNode(100);

    insert(root, 50);
    insert(root, 150);
    
    inOrder(root);
    return 0;
}