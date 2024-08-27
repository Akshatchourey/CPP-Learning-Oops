#include<iostream>
using namespace std;

template <class T>
T fun(T a,T b=1){
    return (a <= b)? a : b;
}

template <class T>
class Vector{
    public:
    Vector(){
        cout<<"constructor of vector class is running."<<endl;
    }
    T type(T a);
    
};
template <class T>
T Vector<T> :: type(T a){
    cout<<a<<endl;
}

template <class T1=int, class T2=int>
class A{
    public:
    T1 a;
    T2 b;
    A(T1 a, T2 b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<"Values of a and b is "<<a<<" "<<b<<" respectively"<<endl;
    }
};

int main(){
    cout<<fun(5,2)<<endl;
    cout<<fun(5.0,5.215)<<endl;
    Vector<int> anjali;
    anjali.type(15.9);
    A<int, char> akshat(12, 'a');
    akshat.display();

    return 0;
}
