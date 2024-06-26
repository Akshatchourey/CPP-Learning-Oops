#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i=start-1;
    for(int j=start;j<=end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    return i;
}
void quickSort(int arr[], int start, int end){
    if(start < end){
        int part = partition(arr, start, end);
        quickSort(arr, start, part-1);
        quickSort(arr, part+1, end);
    }
     
}

int main(){
    int arr[] = {49, 100, 28, 53, 25, 9, 87, 43, 38, 61, 9, 25, 28, 38, 43, 49, 53, 61, 87, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    cout<<"Sorted array will be "<<endl;
    for(int k:arr) cout<<k<<" ";        
    return 0;
}