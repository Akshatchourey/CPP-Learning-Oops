#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void getvalues(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
        void setvalue(int, int, int);

};

void Employee :: setvalue(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee akshat;
    akshat.d = 4;
    akshat.e = 5;
    akshat.setvalue(1,2,3);
    akshat.getvalues();
    return 0;
}
