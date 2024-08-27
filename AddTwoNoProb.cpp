#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    int fNo, sNo, sum, carry=0;
    ListNode* first = new ListNode();
    ListNode* head = first;
    ListNode* newNode;
    while(l1 != nullptr || l2 != nullptr){
        fNo = sNo = 0;
        if(l1 != nullptr){
            fNo = l1->val;
            l1 = l1->next;
        }
        if(l2 != nullptr){
            sNo = l2->val;
            l2 = l2->next;
        }
        sum = fNo + sNo + carry;
        newNode = new ListNode(sum%10);
        first->next = newNode;
        first = newNode;
        sum /= 10;
        carry = sum;
    }
    
    if(carry != 0){
        newNode = new ListNode(carry);
        first->next = newNode;
    }
    return head->next;
}
int main(){
    
    return 0;
}
