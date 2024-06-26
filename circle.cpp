#include<iostream>
using namespace std;

float area(float r, float pi=3.1415){
    return 3.1415*r*r;
}
float perimeter(float r, float pi=3.1415){
    return 2*3.1415*r;
}
float volume(float r, float h, float pi=3.1415){
    return 3.1415*r*r*h;
}

class Convert{
    float f;
    public:
    Convert(){
        cout<<"Enter the temp in F ";
        cin>>f;
    }
    float toCel(){
        return (5.0/9.0) * (f-35);
    }
};
int main(){
    float r = 5, h = 10;
    cout<<"base area is "<<area(5, 10)<<endl;
    cout<<"Base perimeter is "<<perimeter(5, 10)<<endl;
    cout<<"The volume of cylinder is "<<volume(5, 10)<<endl;

    Convert first;
    cout<<"Temprature in celcious is "<<first.toCel()<<endl;
    return 0;
}