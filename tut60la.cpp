#include<iostream>
//get all classes in this header file
#include<fstream>
using namespace std;

//The useful classes for working with classes in c++ are
//fstreambase:-
//ifstream:-derived from fstreambase
//ofstream:-derived from fstreambase

//in order to work with files in c++
//there are two ways to open a file
//1.using the constructor
//2.using member f open of the class

int main(){
    string st="Harry Bhai";
    string st2;
    //opening file using constructor
    //ofstream:-using which u can output to file
    //and also helps to write in sample60.txt
    //opening file using cons and writing it.
    ofstream out("sample60e.txt");
    out<<st;

    //opening file using constructor and reading from it
    //ifstream in("sample60c.txt");
    //in>>st2;
    //at output come only this bcoz it ignores space and new lines.
    //cout<<st2;
    //to read full line,u can use getline function
    //getline(in,st2);
   
   
    cout<<st2;

    return 0;
}