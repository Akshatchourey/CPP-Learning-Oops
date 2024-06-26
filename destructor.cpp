#include<iostream>
using namespace std;

// Why one extra destructor is  called??
int count = 0;
class Checker{
    public:
    Checker* p;
    Checker(void){
        count++;
        cout<<"This is a constructor of object"<<count<<endl;
    }
    ~Checker(void){
        cout<<"This is a destructor of object"<<count<<endl;
        count--;
    }

    void addressOfObject(void){
        cout<<"Address of this class is "<<p<<endl;
    }
};

int main(){
    Checker n1;
    n1.p = &n1;
    n1.addressOfObject();
    // cout<<&n1<<endl;;
    cout<<"We are in main block"<<endl;
    {
        cout<<"Entered in new block"<<endl;
        n1.~Checker();
        Checker n2, n3;
        cout<<"New block ends"<<endl;
    }
    // n2.addressOfObject(); // Gives error because n2 is defined inside the above scope.
    cout<<"we are back in main block"<<endl;
    return 0;
}