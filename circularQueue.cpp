#include<iostream>
using namespace std;

class Queue{
    public:
    int front, rear;
    int size;
    int *arr;

    Queue(int s){
        front = rear = -1;
        size = s;
        arr = new int[s];
    }
    void push(int value);
    int pop();
    void displayQueue();
};
void Queue :: push(int value){
    if((rear+1)%size == front){
        cout<<"Queue is full - overflow"<<endl;
        return;
    }
    else if(front == -1){
        front = 0;
    }
    rear = (rear+1)%size;
    arr[rear] = value;
}
int Queue :: pop(){
    if(front == -1){
        cout<<"Queue is empty - underflow condition."<<endl;
        return -1;
    }
    int value = arr[front];
    front = (front+1)%size;
    if(front-1 == rear){
        front = rear = -1;
    }
    return value;
}
void Queue :: displayQueue(){
    if(front == -1){
        cout<<"Queue is empty - underflow condition."<<endl;
        return;
    }
    int f = front;
    while(f != rear){
        cout<<arr[f]<<" ";
        f = (f+1)%size;
    }
    cout<<arr[f]<<endl;
}
int main(){
    Queue q(4);
    int temp;

    int y = 1;
    do{
        cout<<"Enter the value for new element: ";
        cin>>temp;
        q.push(temp);
        cout<<"If you want to increase the queue enter 1 if yes else 0 : ";
        cin>>y;
    }while(y == 1);

    q.displayQueue();
    cout<<"Front in queue "<<q.arr[q.front]<<endl;
    cout<<"rear in queue "<<q.arr[q.rear]<<endl;
    q.pop();
    cout<<"Front in queue "<<q.arr[q.front]<<endl;
    cout<<"rear in queue "<<q.arr[q.rear]<<endl;

    return 0;
}
