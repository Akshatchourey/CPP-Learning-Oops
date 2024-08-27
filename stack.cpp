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
class Stack{
    ListNode* top;
    public: 
    int size = 0;
    Stack(){top = nullptr;}
    void push(int value){
        ListNode* newNode = new ListNode(value);
        newNode->next = top;
        top = newNode;
        size++;
    }
    int pop(){
        if(top == nullptr){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int value = top->data;
        ListNode* temp = top;
        top = top->next;
        size--;
        delete temp;
        return value;
    }
    int peek(){
        if(top == nullptr){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
};
class Stack2{
    public:
    int top;
    int size;
    int* arr;

    Stack2(int s){
        top = -1;
        size = s;
        arr = new int[s];
    }
    bool push(int value){
        if(top == size-1){
            cout<<"Stack is full - overflow."<<endl;
            return false;
        }
        arr[++top] = value;
        return true;
    }
    int pop(){
        if(top == -1){
            cout<<"Stack is empty - underflow."<<endl;
            return -1;
        }
        int value = arr[top--];
        return value;
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        return arr[top];
    }

};
int main(){
    Stack s;
    int temp;

    int y = 1;
    do{
        cout<<"Enter the value for current top: ";
        cin>>temp;
        s.push(temp);
        cout<<"If you want keep stacking enter 1 if yes else 0 : ";
        cin>>y;
    }while(y == 1);

    cout<<"top element is "<<s.peek()<<endl;
    cout<<"pop element is "<<s.pop()<<endl;
    cout<<"top element is "<<s.peek()<<endl;
    cout<<"size of stack is "<<s.size<<endl;

    return 0;
}

/*int main(){
    Stack2 s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<"top element is "<<s.peek()<<endl;
    cout<<"deleted element is "<<s.pop()<<endl;
    cout<<"top element is "<<s.peek()<<endl;
}*/
