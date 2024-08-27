#include<iostream>
#include<vector>
#include<list>
using namespace std;

template <class T>
void dispaly(list<T> &lis){
    list<T> :: iterator itr;
    for(itr=lis.begin(); itr!=lis.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec;
    vec.push_back(5);
    cout<<vec.size();

    list<int> seq(4);
    list<int> :: iterator itr;
    itr = seq.begin();
    *itr++ = 5;
    *itr++ = 4;
    *itr++ = 3;
    *itr++ = 2;
    dispaly(seq);   
    return 0;
}
