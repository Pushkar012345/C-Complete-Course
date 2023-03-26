//file input/output operations in c++
//for writing to file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="Harry bhai";
    ofstream out("sample60ha.txt");
    out<<st;
    return 0;
}