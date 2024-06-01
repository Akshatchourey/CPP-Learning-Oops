#include<iostream>

using namespace std;

int f(int a, int b){
    cout<<"Integer sum is "<<a+b<<endl;
}
int f(double a, double b){
    cout<<"Integer sum is "<<a+b<<endl;
}     
int main(){
    cout<<"Learnign vim..."<<endl;
    f(2, 5);
    f(2.5, 5.5);
    return 0;
}
