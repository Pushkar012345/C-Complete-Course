#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;
};
class Derived:protected Base{

};
int main(){
    Base b;
    Derived d;
    cout<<d.a;
    return 0;
}