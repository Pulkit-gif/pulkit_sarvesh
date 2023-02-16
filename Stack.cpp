#include<iostream>
using namespace std;
#define max 10

//stack is LIFO (Last in First Out)
class Stack{
    int top;
    public:
    int myStack[max];
    
    Stack() { top = -1; };
    bool push(int x){}
    int pop(){
        
    }
    bool isEmpty(){ return (top > 0); }
};

int main(){

    return 0;
}