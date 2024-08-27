#include<iostream>
using namespace std;

void merge(int arr[], int beg, int mid, int end);

void mergeSort(int arr[], int beg, int end){
    if(beg < end){
        int mid = (beg+end)/2;
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}

void merge(int arr[], int beg, int mid, int end){
    int i, j, k=beg;
    int l = mid-beg+1, r = end-mid;
    int left[l], right[r];

    for(i=0;i<l;i++) left[i] = arr[k++];
    for(j=0;j<r;j++) right[j] = arr[k++];

    i=0, j=0, k=beg;
    while(i < l && j < r){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }else{
            arr[k++] = right[j++];
        }
    }
    while(i < l){
        arr[k++] = left[i++];
    }
    while(j < r){
        arr[k++] = right[j++];
    }
}
int main(){
    int arr[] = {28,40,15,20,50,45,3,8984,564,8,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);

    for(int k:arr) cout<<k<<" ";
    return 0;
}
