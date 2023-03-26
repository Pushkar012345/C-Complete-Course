//C++ program showing ambiguity in multipath inheritance:
#include<iostream>
using namespace std;

class classA
{
    public:
    int a;
};
class classB:public classA
{
    public:
    int b;
};
class classC:public classA
{
    public:
    int c;
};
class classD:public classB,public classC
{
    public:
    int d;
};
int main(){
    classD obj1;
    //a inherting from class B
    obj1.classB::a=10;
    //a inherting from class C
    obj1.classC::a=100;
    //value of a,b and c
    obj1.b=10;
    obj1.c=20;
    obj1.d=30;

    cout<<"The value of obj1.classB::a is:"<<obj1.classB::a<<endl;
    cout<<"The value of obj1.classC::a is:"<<obj1.classC::a<<endl;

    cout<<"The value of obj1.b is:"<<obj1.b<<endl;
    cout<<"The value of obj1.c is:"<<obj1.c<<endl;
    cout<<"The value of obj1.d is:"<<obj1.d<<endl;
    
    return 0;
}




