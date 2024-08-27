#include<iostream>
using namespace std;

int* merge(int*, int, int*, int);

int* mergeSort(int* arr, int size){
    if(size == 1) return arr;

    int l = size/2, r = size-(size/2);
    int left[l], right[r];
    int k = 0;
    for(int i=0;i<size/2;i++) left[k++] = arr[i];
    k = 0;
    for(int i=size/2;i<size;i++) right[k++] = arr[i];
    
    int* leftpart = mergeSort(left, l);
    int* rightpart = mergeSort(right, r);

    return merge(leftpart, l, rightpart, r);
}

int* merge(int* left, int l, int* right, int r){
    int i=0, j=0, idx=0;
    int* result = new int[l+r];
    while(i < l && j < r){
        if(left[i] <= right[j]){
            result[idx] = left[i];
            i++;
        }else{
            result[idx] = right[j];
            j++;
        }
        idx++;
    }
    
    for(int x=i;x<l;x++){
        result[idx] = left[x];
        idx++;
    }
    for(int x=j;x<r;x++){
        result[idx] = right[x];
        idx++;
    }
    return result;
}

int main(){
    int n = 6;
    int asq[] = {5,4,10,9,8,1};
    int* arr = mergeSort(asq, 6);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}
