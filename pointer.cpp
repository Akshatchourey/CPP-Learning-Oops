#include<iostream>
// pointers ---> Data type which holdes the address of another Data types

using namespace std;
int main(){
    int a = 3;
    int* b = &a;  // pointer veriable

    // & ---> (Address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // 8 ---> (Value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at c is "<<*c<<endl;
    cout<<"The value at assress value_at(value_at (c)) is "<<**c<<endl;

    return 0;
}
