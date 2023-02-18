#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

class BSTree{
    private:
    Node* root;
    public:

    BSTree(){ root = NULL; }

    Node* getNewNode(int val){
        Node* newNode = new Node();
        newNode->data = val;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    Node *insert(Node* root, int val)
    {
        if(root == NULL)
            return getNewNode(val);
    
        if(root->data < val)
            root->right = insert(root->right,val);
   
        else if(root->data > val)
            root->left = insert(root->left,val);

        return root;
    }

    bool isEmpty(){
        if(root == NULL)
            return true;
        else return false;
    }

    void inOrder(Node* root){
        if(isEmpty()){
            cout<<"Tree is Empty";
        } else {
            inOrder(root->left);
            cout<<"\t"<<root->data;
            inOrder(root->right);
        } 
    }
    void preOrder(){
        if(isEmpty()){
            cout<<"Tree is Empty";
        } else {
            cout<<"\t"<<root->data;
            inOrder(root->left);
            inOrder(root->right);
        } 
    }
    void postOrder(){
        if(isEmpty()){
            cout<<"Tree is Empty";
        } else {
            inOrder(root->left);
            inOrder(root->right);
            cout<<"\t"<<root->data;
        } 
    }

    
};

int main(){
    BSTree tree;

    return 0;
}