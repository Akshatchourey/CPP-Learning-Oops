#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str;
    // opening file using construsctor and read 
    ifstream in("fileHandling.txt");
    // in>>str;
    getline(in, str);
    cout<<str<<endl;
    in.close();

    // opening file using constructor and write
    // ofstream out("fileHandling.txt");
    // out<<"Hi i am writing."; // This will re-write the file

    // using member function open()
    ifstream newFile;
    newFile.open("fileHandling.txt");
    while(newFile.eof() == 0){
        getline(newFile, str);
        cout<<str<<endl;
    }
    newFile.close();

    return 0;
}
