#include<iostream>
using namespace std;

int main(){
    int arr[] = {28,40,15,20,50,45,3,8984,564,8,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j;

    for(int i=1;i<n;i++){
        j = i;
        while(j >= 1 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    for(int k:arr) cout<<k<<" ";
    return 0;
}