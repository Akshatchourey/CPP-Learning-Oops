#include<iostream>
#include<cmath>
using namespace std;

// Paratemerized and default constructors
class ConstructorsA{
    int x = 0, y = 0;
    public:
    ConstructorsA(){}
    ConstructorsA(int a, int b){
        x = a;
        y = b;
    }
    int distance(ConstructorsA o1, ConstructorsA o2){
        return sqrt(pow(o2.x-o1.x, 2) + pow(o2.y-o1.y, 2));
    }
};
int main(){
    ConstructorsA bob(1, 0);
    ConstructorsA geek(70, 0);
    cout<<"The distance between two points is "<<bob.distance(bob, geek)<<" units"<<endl;
    return 0;
}
