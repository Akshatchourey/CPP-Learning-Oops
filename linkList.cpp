#include<iostream>
using namespace std;

class Node_Linked{
    public:
    int data;
    Node_Linked* next;
};
int main(){
    // own = head, two = tale
    Node_Linked* one = new Node_Linked;
    Node_Linked* head = one;
    one->data = 10;

    // Insertion
    int y = 1;
    do{
        Node_Linked* two = new Node_Linked;
        cout<<"Enrter the data for this node: ";
        cin>>two->data;
        one->next = two;
        one = two;
        cout<<"If you want to add mores node enter 1 else 0 : ";
        cin>>y;
    } while (y == 1);
    one->next = nullptr;

    // traversing
    while(head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl<<"Thank you.";
    return 0;
}
