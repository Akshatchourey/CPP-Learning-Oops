#include<iostream>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int value){
        data = value;
    }
};
class Queue{
    public:
    ListNode* front;
    ListNode* rear;

    Queue() {front = rear = nullptr;}
    void push(int value){
        ListNode* newNode = new ListNode(value);
        if(front == nullptr){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    int pop(){
        if(front == nullptr){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        int value = front->data;
        ListNode* temp = front;
        front = front->next;
        delete temp;
        return value;
    }
};
int main(){
    Queue q;
    int temp;

    int y = 1;
    do{
        cout<<"Enter the value for new element: ";
        cin>>temp;
        q.push(temp);
        cout<<"If you want to increase the queue enter 1 if yes else 0 : ";
        cin>>y;
    }while(y == 1);

    cout<<"Front in queue "<<q.front->data<<endl;
    cout<<"rear in queue "<<q.rear->data<<endl;
    q.pop();
    cout<<"Front in queue "<<q.front->data<<endl;
    cout<<"rear in queue "<<q.rear->data<<endl;

    return 0;
}
