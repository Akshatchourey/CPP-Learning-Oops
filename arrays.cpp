#include<iostream>

using namespace std;
int main(){
    int temp[26]; // declare and direct alocation of memory
    string plants[6] = {"herbs", "shrubs", "climbers", "bushs", "trees", "creepers"};
    
    for(string k:plants) cout<<"Types of plants "<<k<<endl;

    // using pointers   
    int marks[] = {1,2,3,4};
    int* p = marks;
    cout<<p<<endl;
    cout<<p+1<<endl;
    cout<<p+2<<endl;
    cout<<p+3<<endl;

    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+7)<<endl; // what is this
    return 0;
}
