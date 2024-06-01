#include<iostream>

using namespace std;

typedef struct employee{
    int eid;
    string name;
    float salary;
}ep;

union money{ // use same memory space of 6 byte
    int a; // 4 byte
    float b; // 2 byte
    char c;  // 6 byte
};

int main(){
    // struct
    struct employee akshat;
    akshat.eid = 1;
    akshat.name = "Akshat Chourey";
    akshat.salary = 100000;
    cout<<"The value of akshat's eid is "<<akshat.eid<<endl;
    cout<<"The name of the employee is "<<akshat.name<<endl;
    cout<<"The value of akshat's salary is "<<akshat.salary<<endl;

    ep anjali;
    anjali.eid = 20;
    cout<<"The value of anjali's eid is "<<anjali.eid<<endl;

    // union (Same use)
    union money car;
    car.a = 5;
    car.b = 10;
    cout<<"a "<<car.a<<endl; // gives weired ans
    cout<<"b "<<car.b<<endl;
    
    // enum
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    meal morning = breakfast;
    cout<<morning<<endl;

    return 0;
}
