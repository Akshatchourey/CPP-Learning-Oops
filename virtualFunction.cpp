#include<iostream>
using namespace std;

class Base{ // it is a Abstract class with pure vertual function.
    public:
    void greet(){
        cout<<"deja wale babu mera gana bajade "<<endl;
    }        
    virtual void language() = 0;
};
class Compliment : public Base{
    public:
    void language() override {
        cout<<"nache je babi rest na kar "<<endl;
    }
};
class Hindi : public Base{
    public:    
    void language() override {
        cout<<"sare rat bajau gane, hindi-english nay purane "<<endl;
    }
};

int main(){
    Compliment compli;
    compli.greet();
    compli.language();

    Hindi song;
    song.language();

    return 0;
}
