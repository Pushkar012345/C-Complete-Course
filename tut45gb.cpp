#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void show(){
        cout<<"Hello from a"<<endl;
    }
};
class B:virtual public A{

};
class C:virtual public A{

};
class D:public B,public C{

};
int main(){
    D object;
    object.show();
    return 0;
}




