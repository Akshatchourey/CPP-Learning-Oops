#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(){}
    Node(int data):data(data){}
};
int idx = 0;
Node* treeUsingArray(int arr[]){
    if(arr[idx] == -1) return nullptr;
    Node* root = new Node(arr[idx]);
    idx++;
    root->left = treeUsingArray(arr);
    idx++;
    root->right = treeUsingArray(arr);
    return root;

} 
void inOrder(Node* root){
    if(root == nullptr) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(Node* root){
    if(root == nullptr) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node* root){
    if(root == nullptr) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    int arr[] = {1,2,4,-1,-1,5,-1,-1,3,6,-1,8,-1,-1,7,-1,-1};
    Node* root = treeUsingArray(arr);
    cout<<"preorder traversal of tree is ";preOrder(root);
    cout<<endl;
    cout<<"inorder traversal of tree is ";inOrder(root);
    cout<<endl;
    cout<<"postorder traversal of tree is ";postOrder(root);

    return 0;
}
