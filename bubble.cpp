#include<iostream>
using namespace std;

int main(){
    int arr[] = {28,40,15,20,50,45,3,8984,564,8,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); 
            }
        }
    }

    for(int k:arr) cout<<k<<" ";
    return 0;
}
