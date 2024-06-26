#include<iostream>
using namespace std;

class Employee{
    public:
    int Id, salary;
    void set(){
        cout<<"Enter you id and current salary"<<endl;
        cin>>Id>>salary;
    }
    void get(){
        cout<<"Salary of employee having id "<<Id<<" is "<<salary<<endl;
    }
};

int main(){
    Employee arr[2];
    for(Employee k:arr){
        k.set();
        k.get();
    }
    return 0;
}
