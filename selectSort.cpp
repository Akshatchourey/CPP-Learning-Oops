#include<iostream>
using namespace std;

int main(){
    int arr[] = {28,40,15,20,50,45,3,8984,564,8,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx; // stores index of smallest element
    for(int i=0;i<n-1;i++){
        idx = i;
        for(int j=i;j<n;j++){
            if(arr[j] < arr[idx]) idx = j;
        }
        swap(arr[i], arr[idx]);
    }

    for(int k:arr) cout<<k<<" ";
    return 0;
}
