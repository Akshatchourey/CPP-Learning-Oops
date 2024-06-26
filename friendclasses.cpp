#include<iostream>
using namespace std;

// forword declaration.
class B;
class A;

class C{
    public:
    void func(A );
};

class A{
    int data1;
    int data2 = 100;
    public:
        void setA(int d){
            data1=d;
        }
        friend class B;
        friend void print(A );
        friend void C :: func(A );
};

class B{
    int value;
    public:
    void setB(int d){
        value = d;
    }
    void sum(A o1, B o2){
        cout<<"sum of value and data is "<<o1.data1+o1.data2+o2.value<<endl;
    }
       
};
void print(A o3){
    cout<<"i am a friend function of A and i can excess private attributes of A"<<o3.data1<<endl;
}
void C :: func(A o4){
        cout<<"I am a member function of c and i can excess private attribute of A "<<o4.data1<<endl;
    }

int main(){
    A akshat;
    B anjali;
    akshat.setA(12);
    anjali.setB(14);
    anjali.sum(akshat, anjali);

    print(akshat);
    
    C satish;
    satish.func(akshat);
    return 0;
}
