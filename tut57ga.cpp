//C++ program to illustrate example of virtual functions
#include<iostream>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout<<"Base print called:"<<endl;
    }
    void show(){
        cout<<"Base show called:"<<endl;
    }
};

class Derived:public Base{
    int derived;
    public:
    void print(){
        cout<<"derived base print called"<<endl;
    }
    void show(){
        cout<<"derived show called:"<<endl;
    }
};

int main(){
    Base *bptr;
    Derived d;
    bptr= &d;
    //virtual function,binded at runtime
    bptr->print();
    //nonvirtual function binded at compile time
    bptr->show();
    return 0;
}