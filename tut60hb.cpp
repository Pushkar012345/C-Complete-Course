#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st2;
    ifstream in("sample60c.txt");
    in>>st2;
    getline(in,st2);
    getline(in,st2);

    cout<<st2;
    return 0;
}