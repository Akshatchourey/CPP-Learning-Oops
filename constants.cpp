#include<iostream>

using namespace std;
int main(){
    // Constants in c++
    int a = 5;
    cout<<"The value of a is "<<a <<endl;
    a = 10;
    cout<<"The value of a is "<<a <<endl;

    const int b = 5;
    cout<<"The value of b is "<<b <<endl;
    // b = 50;
    cout<<"This is not possible"<<endl;

    // Conditional statements in c++
    int i = 0;
    if(i < 3){
        cout<<i<<endl;
    }
    else if (i == 0){
        cout<<"value of i is 0 and if-elif-else is working in c++"<<endl;
    }else{
        cout<<"Learning the control flow in c++"<<endl;
    }

    // Switch-case in c++
    int marks = 55;
    switch (marks)
    {
    case 90:
        cout<<"you got A gread"<<endl;
        break;
    case 80:
        cout<<"you got B gread"<<endl;
        break;
    case 70:
        cout<<"you got C gread"<<endl;
        break;
    
    default:
        cout<<"you failed"<<endl;
        break;
    }

    return 0;
}
