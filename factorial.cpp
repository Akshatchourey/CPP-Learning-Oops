#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n-1);
}

void fibonacci(int terms){
    int a=1, b=1, c;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<terms-2;i++){
        cout<<a+b<<" ";
        c = a+b;
        a = b;
        b = c;
    }
}
int main(){
    int n=10;
    cout<<"Factorial of the no is "<<factorial(n)<<endl;   
    fibonacci(10);
    return 0;
}
