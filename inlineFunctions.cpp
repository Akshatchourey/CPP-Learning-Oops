#include<iostream>
using namespace std;

// inline function
inline int product(int a, int b){
    return a*b;
}

// Default arguments y = 10
// this functions can be used with either one or two arguments.
int sum(int x, int y=10){
    return x+y;
}

// constant arguments ---> arguments which are not suppose to be changed inside a function.
int f_name(const int* p, int* q){
    // *p = *q; now p cannot be changed
}
int main(){
    int a, b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    cout<<"the prodict of a and b is "<<product(a, b)<<endl;   
    cout<<"the prodict of a and b is "<<product(a, b)<<endl;   
    cout<<"the prodict of a and b is "<<product(a, b)<<endl;   

    cout<<"the prodict of a and b is "<<sum(a)<<endl;   
    cout<<"the prodict of a and b is "<<sum(a, b)<<endl;   

    int p = 2, q = 3;
    cout<<"the value of p and q before "<<p<<q<<endl;
    f_name(&p, &q);
    cout<<"the value of p and q after "<<p<<q<<endl;
    return 0;
}