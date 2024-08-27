#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A & setData(int a){
        this->a = a;
        return *this;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    A akshat;
    akshat.setData(5).getData();
    akshat.getData();
    return 0;
}
