#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    private:
    Node *head = NULL;
    int x;
    public:
    LinkedList(){}

    void insertNode(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if(isEmpty()){
            head = newNode;
        } else {
            Node* temp = new Node();
            temp = head;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void deleteNodeAtEnd(){
        
    }

    bool isEmpty(){
        if(head == NULL){
            return true;
        } else return false;
    }
    void display(){
        Node* temp = new Node();
        temp = head;
        cout<<endl;
        while(temp != nullptr){
            cout<<"\t"<<temp->data;
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList list;
    list.insertNode(12);
    list.insertNode(10);
    list.insertNode(5);
    list.insertNode(22);
    list.insertNode(2);
    list.insertNode(50);
    list.display();
    return 0;
}