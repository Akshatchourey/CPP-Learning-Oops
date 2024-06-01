#include<iostream>

using namespace std;

void swap(int, int);
void swap2(int*, int*);
void swap3(int &, int &);
int & swap4(int &, int &);

int main(){
    int x = 4, y = 5;
    swap(x, y);
    cout<<"Swap by value the value of a is "<<x<<" The value of b is "<<y<<endl;
    // swap2(&x, &y);
    // cout<<"Swap by reference using p the value of a is "<<x<<" The value of b is "<<y<<endl;
    swap3(x, y);
    cout<<"Swap by reference using rv the value of a is "<<x<<" The value of b is "<<y<<endl;
    // x = 766; Function is returning a reference veriabl.
    swap4(x, y) = 766; 
    cout<<"The value of x is v<<x<<endl;alue of x is "<<x<<endl;
       
    return 0;
}
// call by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"IN-FUNCTION The value of a is "<<a<<" The value of b is "<<b<<endl;
}

// call by reference using pointers
void swap2(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"IN-FUNCTION The value of a is "<<*a<<" The value of b is "<<*b<<endl;
}
// call by reference using refrence veriables
void swap3(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"IN-FUNCTION The value of a is "<<a<<" The value of b is "<<b<<endl;
}
// function returning reference veriable
int & swap4(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"IN-FUNCTION The value of a is "<<a<<" The value of b is "<<b<<endl;
    return a;
}
