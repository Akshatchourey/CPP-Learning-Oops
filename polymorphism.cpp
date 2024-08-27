#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
    Complex(){}
    Complex(int real, int imag){
        this->real = real;
        this->imag = imag;
    }
    void print(){
        cout<<real<<"+i"<<imag<<endl;
    }
    Complex operator+(Complex obj){
        return Complex(real+obj.real, imag+obj.imag);
    }
    Complex operator-(Complex obj){
        return Complex(real-obj.real, imag-obj.imag);
    }
    Complex operator*(Complex obj){
        Complex c;
        c.real = real*obj.real - imag*obj.imag;
        c.imag = real*obj.imag - imag*obj.real;
        return c;
    }
    Complex operator/(Complex obj){
        Complex c;
        int temp = (obj.real*obj.real + obj.imag*obj.imag);
        c.real = (real*obj.real + imag*obj.imag)/temp;
        c.imag = (imag*obj.real - real*obj.imag) / temp;
        return c;
    }
    
};
int main(){
    Complex a(5,6); Complex b(5,6); Complex c(5,6);
    Complex d = a + b + c;
    d.print();
    (a-b+c).print();
    (a*b).print();
    (a/b).print();
    return 0;
}