#include<iostream>
using namespace std;

class Complax{
    int real, imaginary;
    public:
    void setData(int x, int y){
        real = x;
        imaginary = y;
    }
    void getData(){
        cout<<"Real part of complax no is "<<real<<endl;
        cout<<"Imaginary part of complax no is "<<imaginary<<endl;
    }
};
int main(){
    Complax *ptr = new Complax;
    ptr->setData(5, 6);
    ptr->getData();

    Complax *arr = new Complax[4];
    for(int i=0;i<4;i++) (arr+i)->getData();
    return 0;
}