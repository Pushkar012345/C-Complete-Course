#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //To write into the file
    ofstream hout("sample61ha.txt");
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;

    hout<<name+"is my name";
    hout.close();

    //To read from a file
    ifstream hin("sample61ha.txt");
    string content;
    hin>>content;
    cout<<"The content of file is:"<<content<<endl;
    hin.close();
    return 0;
}