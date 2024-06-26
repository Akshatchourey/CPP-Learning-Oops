#include<iostream>
#include<cmath>
using namespace std;

class Insert{
    public:
    int a, b;
    char c;
    Insert(){
        cout<<"Enter the value of no a and b"<<endl;
        cin>>a>>b;
    }
};
class SimpleCalc : virtual public Insert{
    public:
    void getOperator(){
        cout<<"Enter the operator: +,-,*,/"<<endl;
        cin>>c;
    }
    int operate(){
        switch(c){
            case '+':
            cout<<"sum of a and b is "<<a+b<<endl;
            break;
            case '-':
            cout<<"difference of a and b is "<<a-b<<endl;
            break;
            case '*':
            cout<<"product of a and b is "<<a*b<<endl;
            break;
            case '/':
            cout<<"division of a and b is "<<a/b<<endl;
            break;
        default:
            return 0;
        }
        return 1;
    }
};
class ScientificCalc : virtual public Insert{
    public:
    void getOperator(){
        cout<<"Enter the operator: +, -, *, /, log = l,sqrt = s, exp = e, cos = c"<<endl;
        cin>>c;
    }
    int operate(){
        switch(c){
            case 'l':
            cout<<"log of a and b is "<<log(a)<<" and "<<log(b)<<" respectivly."<<endl;
            break;
            case 's':
            cout<<"squre root of a and b is "<<sqrt(a)<<" and "<<sqrt(b)<<" respectivly."<<a-b<<endl;
            break;
            case 'e':
            cout<<"a power b is "<<pow(a, b)<<endl;
            break;
            case 'c':
            cout<<"cosine of a and b is "<<cos(a)<<" and "<<cos(b)<<" respectivly."<<a/b<<endl;
            break;
        default:
            return 0;
        }
        return 1;
    }
};
class HybridCalc : public SimpleCalc, public ScientificCalc{
    public:
    void getOperator(){
        cout<<"Enter the operator: +, -, *, /, log = l,sqrt = s, exp = e, cos = c"<<endl;
        cin>>c;
    }
    int operate(){
        int f = SimpleCalc :: operate();
        if(f == 0){
            ScientificCalc :: operate();
        }
        return 1;
    }
};
int main(){
    // SimpleCalc tempA;
    // tempA.getOperator();
    // tempA.operate();

    // SimpleCalc tempB;
    // tempB.getOperator();
    // tempB.operate();

    HybridCalc tempC;
    int c;
    do{
        tempC.getOperator();
        tempC.operate();
        cout<<"do you want to continue if yes enter 1 else enter 0: "<<endl;
        cin>>c;
    } while (c == 1);
    
    return 0;
}
