# include<iostream>

int main(){
    int no;
    std::cout<<"Enter no you want to print table:- ";
    std::cin>>no;
    // for loop in cpp
    for(int i=1;i<11;i++){
        std::cout<<no<<" * "<<i<<" = " <<i*no <<"\n";
    }

    // while loop in cpp
    int i = 1;
    while(i<11){
        std::cout<<no<<" * "<<i<<" = " <<i*no <<"\n";
        i++;
    }

    // do-while loop in cpp
    i = 0;
    do{
        std::cout<<no<<" * "<<i<<" = " <<i*no <<"\n";
        i++;
    }while(i<11);

    return 0;
}
