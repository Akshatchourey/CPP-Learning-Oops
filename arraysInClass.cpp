#include<iostream>
using namespace std;

class Shop{
    int itemID[10];
    int itemPrice[10];
    int counter = 0;

    public:
    Shop(){
        cout<<"Hi, I am a constructor"<<endl;
    }
    void shopingList(void);
    void showList(void);
};
void Shop :: shopingList(){
    cout<<"Enter the ID of item "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter the price of the item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop :: showList(void){
    for(int i=0;i<counter;i++){
        cout<<"Price of item with itemId "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }    
}
int main(){
    Shop dukaan;
    dukaan.shopingList();
    dukaan.shopingList();
    dukaan.shopingList();
    dukaan.shopingList();
    dukaan.showList();
    return 0;
}