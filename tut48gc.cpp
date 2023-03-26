//c++ program to show concept of inheritance in multilevel inheritance
#include<iostream>
using namespace std;

class A
{
    public:
    A(){
        cout<<"base class A constructor"<<endl;
    }
};
class B:public A
{
    public:
    B(){
        cout<<"base class B constructor"<<endl;
    }
};
class C:public B
{
    public:
    C(){
        cout<<"Base class C constructor"<<endl;
    }
};
int main(){
    C object;
    return 0;
}
