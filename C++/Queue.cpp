#include<iostream>
using namespace std;
#define MAX 10

//Queue is FIFO (First In First Our)

class Queue{
    private:
    int myQueue[MAX],front,rear;
    public:
    Queue(){ front = rear = -1; }

    bool isFull(){
        if(rear == MAX-1 && front == 0){
            return true;
        } else return false;
    }
    bool isEmpty(){
        if(front == -1){
            return true;
        } else return false;
    }

    int enqueue(int value){
        if(isFull()){
            cout<<"\nQueue is Full";
            return 0;
        } else {
            if(front == -1)
                front = 0;
            myQueue[++rear] = value;
            return 0;
        }
        
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"\nQueue is Empty";
            return 0;
        } else if(front >= rear){
                front = rear = -1;
            return 0;
        }else
            front++;
        return 0;
    }

    void display(){
        cout<<endl;
        cout<<"Start:: ";
        for(int i=front;i<=rear;i++){
            cout<<"\t"<<myQueue[i];
        }
        cout<<"\t::End";
    }

};

int main(){
    Queue queue;
    queue.enqueue(12);
    queue.enqueue(10);
    queue.enqueue(12);
    queue.enqueue(7);
    queue.enqueue(9);
    queue.enqueue(67);
    queue.display();
    queue.dequeue();
    queue.display();
    return 0;
}