//file i/o using member function open
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    //connecting text file to object out using member function open
    out.open("sample62ha.txt");

    //writing to the file
    out<<"This is me\n";
    out<<"This is also me";

    //closing file connection
    out.close();
    return 0;

}