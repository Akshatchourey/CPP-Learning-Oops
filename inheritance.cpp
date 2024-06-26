#include<iostream>
using namespace std;

class Employee{
    protected:
    float salary;
    public:
    int id;
    string skill = "basic";
    Employee(){}
    Employee(int Id){
        id = Id;
        salary = 20000.00;
    }
};
class Programer : Employee{
    public:
    Programer(){}
    Programer(int Id){
        id = 5;
        skill = "java python javascript";
    }
    void get(){
        cout<<id<<endl;
        cout<<skill<<endl;
    }
};
class JuniorDevloper : public Employee{
    public:
    int level;
    JuniorDevloper(){
        skill = "basic code correction";
    }
};
class SeniorDevloper : protected Employee{
    public:
    int level;
    SeniorDevloper(){
        skill = "sql git app and web devlopment";
        salary = 10000000;
    }
    void showData(){
        cout<<salary<<endl;
        cout<<skill<<endl;
    }
};
int main(){
    Employee mummy(1);
    Programer papa(2);
    JuniorDevloper kanika;
    SeniorDevloper akshat;

    cout<<mummy.id<<endl;
    cout<<mummy.skill<<endl;
    papa.get();
    cout<<kanika.skill<<endl;
    akshat.showData();
    
    
    return 0;
}
