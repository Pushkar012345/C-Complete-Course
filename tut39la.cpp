#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;
};
class Derived:public Base{

};
int main(){
    Base b;
    Derived d;
    cout<<d.a;
    cout<<b.a;

    return 0;
}