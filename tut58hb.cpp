//gfg example of pre virtual function
#include<iostream>
using namespace std;

class Base{
    int x;
    public:
    virtual void func()=0;
    int getX(){
        return x;
    }
};
class Derived:public Base{
    int y;
    public:
    void func(){
        cout<<"func called:"<<endl;
    }
};

int main(){
    Derived d;
    d.func();
    return 0;
}