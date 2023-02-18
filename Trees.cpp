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

    void addNode(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;

        if(isEmpty()){
            root = newNode;
        } else {
            
        }
    }

    bool isEmpty(){
        if(root == NULL)
            return true;
        else return false;
    }

    void inOrder(){}
    void preOrder(){}
    void postOrder(){}

    
};

int main(){

    return 0;
}