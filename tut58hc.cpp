#include<iostream>
using namespace std;

class Base{
    int x;
    public:
    virtual void display()=0;
};

class Derived:public Base{
    int y;
    public:
    void display(){
        cout<<"in derived called"<<endl;
    }
};

int main(){
    Base *bptr=new Derived();
    bptr->display();
    return 0;
}