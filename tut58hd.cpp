//if we not override pure virtual function in derived class then derived class also becomes
//abstract class
#include<iostream>
using namespace std;

class Base{
    int x;
    public:
    virtual void display()=0;
};
class Derived:public Base{

};
int main(){
    //Derived d;
    //d.display();
    //return 0;
}