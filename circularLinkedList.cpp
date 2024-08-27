#include<iostream>
using namespace std;

class Node_Linked{
    public:
    int data;
    Node_Linked* next;
};

int main(){
    // one = head, two = tale
    Node_Linked* one = new Node_Linked;
    Node_Linked* head = one;
    one->data = 10;
    int size = 1;

    // Insertion
    int y = 1;
    do{
        size++;
        Node_Linked* two = new Node_Linked;
        cout<<"Enrter the data for this node: ";
        cin>>two->data;
        one->next = two;
        one = two;
        two->next = head;
        cout<<"If you want to add mores node enter 1 else 0 : ";
        cin>>y;
    } while (y == 1);

    // traversing
    for(int i=0;i<size+1;i++){
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl<<"Thank you.";
    return 0;
}
