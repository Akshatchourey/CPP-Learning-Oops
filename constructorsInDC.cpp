#include<iostream>
using namespace std;
class Base{
    int a;
    public:
    Base(int x){
        a = x;
        cout<<"base class constructor is running."<<endl;
    }
};
class Derived : public Base{
    public:
    Derived(int x): Base(x){
        cout<<"dericed class constructor is running."<<endl;
    }
    void message(void){
        cout<<"Hi!!"<<endl;
    }
};
int main(){
    Derived akshat(5);
    akshat.message();
    return 0;
}
