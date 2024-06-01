#include<iostream>

using namespace std;

int c = 45;
int main(){
    int a = 5, b = 10, c = 5;
    cout<<"a+b+c = "<< a+b+c <<endl;
    cout<<"local c "<< c <<endl;
    cout<<"globel c using scope resolution operator "<<::c;

    float d = 45.5f;
    long double e = 50.00005l;
    cout<<"this is float d " <<d <<"ans this is doubel e "<< e <<endl;

    int x = 100;
    int & y = x;
    cout<<x <<endl;
    cout<<y <<endl;

    // same as they same as y is refering to x 
    cout<<"The address of x is "<<&x<<endl;
    cout<<"The address of y is "<<&y<<endl;
    y += 10;
    cout<<"The after changing, address of y is same "<<&y<<endl;
    cout<<"The value of x changes "<<x<<endl;
}
