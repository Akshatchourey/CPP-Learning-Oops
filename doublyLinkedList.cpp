#include<iostream>
using namespace std;

class Node_Linked{
    public:
    int data;
    Node_Linked* next = nullptr;
    Node_Linked* prev = nullptr;
};

int main(){
    Node_Linked* one = new Node_Linked;
    Node_Linked* head = one;
    Node_Linked* tale;
    one->data = 1;

    // Insertion
    int y = 1;
    do{
        Node_Linked* two = new Node_Linked;
        cout<<"Enrter the data for this node: ";
        cin>>two->data;
        one->next = two;
        two->prev = one;
        one = two;
        cout<<"If you want to add mores node enter 1 else 0 : ";
        cin>>y;
        tale = two;
    } while (y == 1);

    // traversing forward   
    while(head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    // traversing backward
    while(tale != nullptr){
        cout<<tale->data<<" ";
        tale = tale->prev;
    }

    cout<<endl<<"Thank you.";
    return 0;
}
