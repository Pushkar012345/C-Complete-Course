#include<iostream>
using namespace std;

class B{
    public:
    void say(){
        cout<<"Hello"<<endl;
    }
};

class D:public B{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }

};

int main(){
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}