#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //declaring object of type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening text file into in
    in.open("sample62ha.txt");
    while(in.eof()==0)
    {
        //using getline to fill whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;

}