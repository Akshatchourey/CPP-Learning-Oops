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
    Employee *ptr = new Employee[2]; // Dynamic deceleration of block of memory for our 2 employees.
    Employee *fp = ptr; // First pointer
    for(int i=0;i<2;i++){
        ptr->set();
        ptr->get();
        ptr++;
    }
    return 0;
}
