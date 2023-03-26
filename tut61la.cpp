#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with hout stream
    ofstream hout("sample61.txt");

    //creating name string and filled it with string entered by user
    cout<<"Enter your name"<<endl;
    string name;
    cin>>name;


    //writing a string to the file
    hout<<"My name is:"+name;
    //connection pipe of link closed
    hout.close();

    //to read now what is in file
    string content;
   // hin>>content;  //what is content of file pit in this content
    cout<<"The content of this file is:"<<content<<endl;
   // hin.close();
    return 0;
}