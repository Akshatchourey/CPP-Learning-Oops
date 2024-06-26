#include<iostream>
using namespace std;

class Number{
    int x=0,y=0;
    public:
    Number(){}
    Number(int a, int b){
        x = a;
        y = b;
    }
    Number(Number &obj){ // copy constructor...
        x = obj.x;
        y = obj.y;
    }


    void gwtValues(){
        cout<<"Values of x and y are "<<x<<" "<<y<<endl;
    }
};

int main(){
    Number first(5, 10);
    first.gwtValues();
    cout<<"Address of first object "<<&first<<endl;    

    Number second(first);
    second.gwtValues();
    return 0;
}