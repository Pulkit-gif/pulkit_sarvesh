#include<iostream>
using namespace std;
#define MAX 10

//stack is LIFO (Last in First Out)
class Stack{
    int top;
    public:
    int myStack[MAX];
    
    Stack() { top = -1; };
    bool push(int x){
        if(top >= MAX-1){
            cout<<"Stack Overflow";
            return false;
        } else {
            myStack[++top] = x;
            return true;
        }
    }

    int pop(){
        if(top < 0){
            cout<<"Stack is Empty";
            return 0;
        } else {
            int item = myStack[top--];
            return item;
        }
    }

    bool isEmpty(){ return (top > 0); }

    void display(){
        cout<<"Top:";
        for(int i=0;i<=top;i++){
            cout<<myStack[i]<<endl;
        }
    }
};

int main(){
    Stack stack;
    stack.push(6);
    stack.push(10);
    stack.push(9);
    stack.push(11);
    stack.push(55);
    stack.display();
    return 0;
}